
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedQualityTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  TimedQualityTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    ExistsQuantifier = 1, ForallQuantifier = 2, FreezeTime = 3, LessThanOrEqualTo = 4, 
    GreaterThanOrEqualTo = 5, EqualTo = 6, NotEqualTo = 7, OnceOperator = 8, 
    HistoricallyOperator = 9, PreviousOperator = 10, SinceOperator = 11, 
    TriggerOperator = 12, EventuallyOperator = 13, AlwaysOperator = 14, 
    NextOperator = 15, UntilOperator = 16, ReleaseOperator = 17, NegationOperator = 18, 
    ConjunctionOperator = 19, DisjunctionOperator = 20, ImplicationOperator = 21, 
    IffOperator = 22, True = 23, False = 24, Comma = 25, LeftBrace = 26, 
    RightBrace = 27, LeftBracket = 28, RightBracket = 29, LeftChevron = 30, 
    RightChevron = 31, LeftParenthesis = 32, RightParenthesis = 33, BlockComment = 34, 
    LineComment = 35, Infinity = 36, Scalar = 37, Integer = 38, DecimalInteger = 39, 
    BinaryInteger = 40, OctalInteger = 41, HexInteger = 42, Floating = 43, 
    PointFloat = 44, ExponentFloat = 45, Identifier = 46, Whitespace = 47, 
    AdditionOperator = 48, SubtractionOperator = 49, MultiplicationOperator = 50, 
    DivisionOperator = 51, ModuloOperator = 52
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
