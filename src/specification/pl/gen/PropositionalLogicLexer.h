
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/PropositionalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  PropositionalLogicLexer : public antlr4::Lexer {
public:
  enum {
    NegationOperator = 1, ConjunctionOperator = 2, DisjunctionOperator = 3, 
    ImplicationOperator = 4, IffOperator = 5, True = 6, False = 7, Comma = 8, 
    LeftBrace = 9, RightBrace = 10, LeftBracket = 11, RightBracket = 12, 
    LeftChevron = 13, RightChevron = 14, LeftParenthesis = 15, RightParenthesis = 16, 
    BlockComment = 17, LineComment = 18, Infinity = 19, Scalar = 20, Integer = 21, 
    DecimalInteger = 22, BinaryInteger = 23, OctalInteger = 24, HexInteger = 25, 
    Floating = 26, PointFloat = 27, ExponentFloat = 28, Identifier = 29, 
    Whitespace = 30
  };

  explicit PropositionalLogicLexer(antlr4::CharStream *input);

  ~PropositionalLogicLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace gen
