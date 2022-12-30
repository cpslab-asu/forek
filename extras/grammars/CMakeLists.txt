find_package(ANTLR REQUIRED)

# Create directory to store all ANTLR grammar files in build tree.
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/grammars/)

# Copy grammar file to build tree if original changed.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/antlr/grammars/CommonLexer.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/CommonLexer.g4 ${CMAKE_BINARY_DIR}/antlr/grammars/
  MAIN_DEPENDENCY CommonLexer.g4
)

# Create a custom target to copy grammar file as a dependent of others.
add_custom_target(CommonLexerGrammarFile
  COMMENT "Copying... CommonLexer.g4"
  DEPENDS ${CMAKE_BINARY_DIR}/antlr/grammars/CommonLexer.g4
)

# Create a custom command to generate an ANTLR target.
#
# Note: This macro does NOT create a CMake target but rather generates the
# definition required to generate an target for ANTLR.
antlr_target(CommonLexer
  ${CMAKE_BINARY_DIR}/antlr/grammars/CommonLexer.g4
  LEXER
  OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/
)

# Create a custom target to generate the ANTLR target.
add_custom_target(CommonLexer DEPENDS
  ${ANTLR_CommonLexer_OUTPUTS}
)

add_subdirectory(logic)
