
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedPropositionalTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  TimedPropositionalTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    FreezeTime = 1, LessThanOrEqualTo = 2, GreaterThanOrEqualTo = 3, LessThan = 4, 
    GreaterThan = 5, EqualTo = 6, NotEqualTo = 7, EventuallyOperator = 8, 
    AlwaysOperator = 9, NextOperator = 10, UntilOperator = 11, ReleaseOperator = 12, 
    NegationOperator = 13, ConjunctionOperator = 14, DisjunctionOperator = 15, 
    ImplicationOperator = 16, IffOperator = 17, True = 18, False = 19, LeftBrace = 20, 
    RightBrace = 21, LeftBracket = 22, RightBracket = 23, LeftParenthesis = 24, 
    RightParenthesis = 25, BlockComment = 26, LineComment = 27, Infinity = 28, 
    Scalar = 29, Integer = 30, DecimalInteger = 31, BinaryInteger = 32, 
    OctalInteger = 33, HexInteger = 34, Floating = 35, PointFloat = 36, 
    ExponentFloat = 37, Identifier = 38, Whitespace = 39, AdditionOperator = 40, 
    SubtractionOperator = 41, MultiplicationOperator = 42, DivisionOperator = 43
  };

  explicit TimedPropositionalTemporalLogicLexer(antlr4::CharStream *input);

  ~TimedPropositionalTemporalLogicLexer() override;


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
