# Copy grammar file to build tree if original changed.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/antlr/grammars/LogicLexer.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/LogicLexer.g4 ${CMAKE_BINARY_DIR}/antlr/grammars/
  MAIN_DEPENDENCY LogicLexer.g4
  DEPENDS CommonLexerGrammarFile
)

# Create a custom target to copy grammar file as a dependent of others.
add_custom_target(LogicLexerGrammarFile
  COMMENT "Copying... LogicLexer.g4"
  DEPENDS ${CMAKE_BINARY_DIR}/antlr/grammars/LogicLexer.g4
)

# Create a custom command to generate an ANTLR target.
#
# Note: This macro does NOT create a CMake target but rather generates the
# definition required to generate an target for ANTLR.
antlr_target(LogicLexer
  ${CMAKE_BINARY_DIR}/antlr/grammars/LogicLexer.g4
  LEXER
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/Logic/
)

# Create a custom target to generate the ANTLR target.
add_custom_target(LogicLexer DEPENDS
  ${ANTLR_LogicLexer_OUTPUTS}
)

# Copy grammar file to build tree if original changed.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/antlr/grammars/LogicParser.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/LogicParser.g4 ${CMAKE_BINARY_DIR}/antlr/grammars/
  MAIN_DEPENDENCY LogicParser.g4
)

# Create a custom target to copy grammar file as a dependent of others.
add_custom_target(LogicParserGrammarFile
  COMMENT "Copying... LogicParser.g4"
  DEPENDS ${CMAKE_BINARY_DIR}/antlr/grammars/LogicParser.g4
)

# Create a custom command to generate an ANTLR target.
#
# Note: This macro does NOT create a CMake target but rather generates the
# definition required to generate an target for ANTLR.
antlr_target(LogicParser
  ${CMAKE_BINARY_DIR}/antlr/grammars/LogicParser.g4
  PARSER
  VISITOR
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/Logic/
  DEPENDS_ANTLR LogicLexer
  COMPILE_FLAGS -DtokenVocab=LogicLexer
)

# Create a custom target to generate the ANTLR target.
add_custom_target(LogicParser
  DEPENDS ${ANTLR_LogicParser_OUTPUTS}
)

add_subdirectory(ltl)
