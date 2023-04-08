
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedQualityTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  TimedQualityTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    ExistsQuantifier = 1, ForallQuantifier = 2, FreezeTime = 3, LessThanOrEqualTo = 4, 
    GreaterThanOrEqualTo = 5, EqualTo = 6, NotEqualTo = 7, EventuallyOperator = 8, 
    AlwaysOperator = 9, NextOperator = 10, UntilOperator = 11, ReleaseOperator = 12, 
    NegationOperator = 13, ConjunctionOperator = 14, DisjunctionOperator = 15, 
    ImplicationOperator = 16, IffOperator = 17, True = 18, False = 19, Comma = 20, 
    LeftBrace = 21, RightBrace = 22, LeftBracket = 23, RightBracket = 24, 
    LeftChevron = 25, RightChevron = 26, LeftParenthesis = 27, RightParenthesis = 28, 
    BlockComment = 29, LineComment = 30, Infinity = 31, Scalar = 32, Integer = 33, 
    DecimalInteger = 34, BinaryInteger = 35, OctalInteger = 36, HexInteger = 37, 
    Floating = 38, PointFloat = 39, ExponentFloat = 40, Identifier = 41, 
    Whitespace = 42, AdditionOperator = 43, SubtractionOperator = 44, MultiplicationOperator = 45, 
    DivisionOperator = 46, ModulusOperator = 47
  };

  explicit TimedQualityTemporalLogicLexer(antlr4::CharStream *input);

  ~TimedQualityTemporalLogicLexer() override;


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
