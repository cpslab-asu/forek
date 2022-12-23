find_package(ANTLR REQUIRED)
set(ANTLR4_JAR_LOCATION ${ANTLR_EXECUTABLE})

# Find the ANTLR package responsible for generating parsers and lexers from a
# provided grammar file.
find_package(antlr4-generator REQUIRED)

# Create directory to store all grammar files at root level.
#
# Note: This is a necessary step as we want to keep the project's grammar
# directory structure for readability.
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/grammars/)

# Create a custom command to copy grammar file if changed.
#
# Note: This command is a dependency of the `antlr4_generate` macro command.
# Therefore, it is guaranteed to run BEFORE generating the ANTLR target.
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/grammars/CommonLexer.g4
  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/CommonLexer.g4 ${CMAKE_BINARY_DIR}/grammars/
  MAIN_DEPENDENCY ${CMAKE_CURRENT_SOURCE_DIR}/CommonLexer.g4
  COMMENT "Copying ${CMAKE_CURRENT_SOURCE_DIR}/CommonLexer.g4 to ${CMAKE_BINARY_DIR}/grammars/"
)

# Construct command to generate lexer from `CommonLexer.g4`.
#
# Note: This macro does not set a target but rather creates a custom command to
# generate the appropriate ANTLR targets from the grammar file. Therefore, to
# generate the ANTLR targets from the grammar, a custom target must be created.
antlr4_generate(
  CommonLexer
  ${CMAKE_BINARY_DIR}/grammars/CommonLexer.g4
  LEXER
  FALSE
  FALSE
)

# Create a custom target to generate the targets from `CommonLexer.g4`.
#
# Note: The current version of ANTLR (v4.11.1) does not support importing
# grammars across more than one directory ("lib"). As a workaround, the grammar
# file should be copied over to the binary directory as a sibling to other
# grammars it depends on or is a dependency of.
add_custom_target(CommonLexerGenerated
  DEPENDS ${ANTLR4_SRC_FILES_CommonLexer}
)
