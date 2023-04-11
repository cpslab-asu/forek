
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/LinearTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  LinearTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    EventuallyOperator = 1, AlwaysOperator = 2, NextOperator = 3, UntilOperator = 4, 
    ReleaseOperator = 5, NegationOperator = 6, ConjunctionOperator = 7, 
    DisjunctionOperator = 8, ImplicationOperator = 9, IffOperator = 10, 
    True = 11, False = 12, Comma = 13, LeftBrace = 14, RightBrace = 15, 
    LeftBracket = 16, RightBracket = 17, LeftChevron = 18, RightChevron = 19, 
    LeftParenthesis = 20, RightParenthesis = 21, BlockComment = 22, LineComment = 23, 
    Infinity = 24, Scalar = 25, Integer = 26, DecimalInteger = 27, BinaryInteger = 28, 
    OctalInteger = 29, HexInteger = 30, Floating = 31, PointFloat = 32, 
    ExponentFloat = 33, Identifier = 34, Whitespace = 35
  };

  explicit LinearTemporalLogicLexer(antlr4::CharStream *input);

  ~LinearTemporalLogicLexer() override;


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
