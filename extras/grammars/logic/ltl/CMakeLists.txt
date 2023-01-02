# Copy grammar file to build tree if original changed.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/antlr/grammars/LinearTemporalLogicLexer.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/LinearTemporalLogicLexer.g4 ${CMAKE_BINARY_DIR}/antlr/grammars/
  MAIN_DEPENDENCY LinearTemporalLogicLexer.g4
  DEPENDS LogicLexerGrammarFile
)

# Create a custom target to copy grammar file as a dependent of others.
add_custom_target(LinearTemporalLogicLexerGrammarFile
  COMMENT "Copying... LinearTemporalLogicLexer.g4"
  DEPENDS ${CMAKE_BINARY_DIR}/antlr/grammars/LinearTemporalLogicLexer.g4
)

# Create a custom command to generate an ANTLR target.
#
# Note: This macro does NOT create a CMake target but rather generates the
# definition required to generate an target for ANTLR.
antlr_target(LinearTemporalLogicLexer
  ${CMAKE_BINARY_DIR}/antlr/grammars/LinearTemporalLogicLexer.g4
  LEXER
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/LinearTemporalLogic/
)

# Create a custom target to generate the ANTLR target.
add_custom_target(LinearTemporalLogicLexer
  DEPENDS ${ANTLR_LinearTemporalLogicLexer_OUTPUTS}
)

# Copy grammar file to build tree if original changed.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/antlr/grammars/LinearTemporalLogicParser.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/LinearTemporalLogicParser.g4 ${CMAKE_BINARY_DIR}/antlr/grammars/
  MAIN_DEPENDENCY LinearTemporalLogicParser.g4
  DEPENDS LogicParserGrammarFile
)

# Create a custom target to copy grammar file as a dependent of others.
add_custom_target(LinearTemporalLogicParserGrammarFile
  COMMENT "Copying... LinearTemporalLogicParser.g4"
  DEPENDS ${CMAKE_BINARY_DIR}/antlr/grammars/LinearTemporalLogicParser.g4
)

# Create a custom command to generate an ANTLR target.
#
# Note: This macro does NOT create a CMake target but rather generates the
# definition required to generate an target for ANTLR.
antlr_target(LinearTemporalLogicParser
  ${CMAKE_BINARY_DIR}/antlr/grammars/LinearTemporalLogicParser.g4
  PARSER
  VISITOR
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/LinearTemporalLogic/
  DEPENDS_ANTLR LinearTemporalLogicLexer
  COMPILE_FLAGS -DtokenVocab=LinearTemporalLogicLexer
)

# Create a custom target to generate the ANTLR target.
add_custom_target(LinearTemporalLogicParser
  DEPENDS ${ANTLR_LinearTemporalLogicParser_OUTPUTS}
)
