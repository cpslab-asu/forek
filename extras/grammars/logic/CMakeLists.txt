# Construct command to generate lexer from `LogicLexer.g4`.
#
# Note: This macro does not set a target but rather creates a custom command to
# generate the appropriate ANTLR targets from the grammar file. Therefore, to
# generate the ANTLR targets from the grammar, a custom target must be created.
antlr4_generate(
  LogicLexer
  ${CMAKE_BINARY_DIR}/grammars/LogicLexer.g4
  LEXER
  FALSE
  FALSE
  ""
  ""
  "${CMAKE_BINARY_DIR}/grammars/"
)

# Create a custom command to copy grammar file if changed.
#
# Note: This command is a dependency of the `antlr4_generate` macro command.
# Therefore, it is guaranteed to run BEFORE generating the ANTLR target.
#
# Note: The current version of ANTLR (v4.11.1) does not support importing
# grammars across more than one directory ("lib"). As a workaround, the grammar
# file should be copied over to the binary directory as a sibling to other
# grammars it depends on or is a dependency of.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/grammars/LogicLexer.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/LogicLexer.g4 ${CMAKE_BINARY_DIR}/grammars/
  MAIN_DEPENDENCY ${CMAKE_CURRENT_SOURCE_DIR}/LogicLexer.g4
  COMMENT "Copying ${CMAKE_CURRENT_SOURCE_DIR}/LogicLexer.g4 to ${CMAKE_BINARY_DIR}/grammars/"
)

# Create a custom target to generate the targets from `LogicLexer.g4`.
add_custom_target(LogicLexerGenerated DEPENDS
  # While, the more accurate dependency of this target is
  # ${CMAKE_BINARY_DIR}/grammars/CommonLexer.g4, this is not necessarily a target
  # to be directly built.
  #
  # Therefore, to achieve the grammar file-level dependency ordering, we can
  # depend on the target which copies the grammar file as a pre-requisite.
  CommonLexerGenerated
  ${ANTLR4_SRC_FILES_LogicLexer}
)

# Construct command to generate lexer from `LogicParser.g4`.
#
# Note: This macro does not set a target but rather creates a custom command to
# generate the appropriate ANTLR targets from the grammar file. Therefore, to
# generate the ANTLR targets from the grammar, a custom target must be created.
antlr4_generate(
  LogicParser
  ${CMAKE_BINARY_DIR}/grammars/LogicParser.g4
  PARSER
  FALSE
  TRUE
  ""
  "${ANTLR4_TOKEN_FILES_LogicLexer}"
  "${ANTLR4_TOKEN_DIRECTORY_LogicLexer}"
)

# Create a custom command to copy grammar file if changed.
#
# Note: This command is a dependency of the `antlr4_generate` macro command.
# Therefore, it is guaranteed to run BEFORE generating the ANTLR target.
#
# Note: The current version of ANTLR (v4.11.1) does not support importing
# grammars across more than one directory ("lib"). As a workaround, the grammar
# file should be copied over to the binary directory as a sibling to other
# grammars it depends on or is a dependency of.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/grammars/LogicParser.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/LogicParser.g4 ${CMAKE_BINARY_DIR}/grammars/
  MAIN_DEPENDENCY ${CMAKE_CURRENT_SOURCE_DIR}/LogicParser.g4
  COMMENT "Copying ${CMAKE_CURRENT_SOURCE_DIR}/LogicParser.g4 to ${CMAKE_BINARY_DIR}/grammars/"
)

# Create a custom target to generate the targets from `LogicParser.g4`.
add_custom_target(LogicParserGenerated DEPENDS
  # While, the more accurate dependency of this target is
  # ${ANTLR4_TOKEN_FILES_LogicLexer}, this is not necessarily a target to be
  # directly built.
  #
  # Therefore, to achieve the token-level dependency ordering, we can depend on
  # the target which will construct to the tokens file needed.
  LogicLexerGenerated
  ${ANTLR4_SRC_FILES_LogicParser}
)
