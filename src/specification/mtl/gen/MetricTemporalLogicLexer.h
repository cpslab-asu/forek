
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/MetricTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  MetricTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    OnceOperator = 1, HistoricallyOperator = 2, PreviousOperator = 3, SinceOperator = 4, 
    TriggerOperator = 5, EventuallyOperator = 6, AlwaysOperator = 7, NextOperator = 8, 
    UntilOperator = 9, ReleaseOperator = 10, NegationOperator = 11, ConjunctionOperator = 12, 
    DisjunctionOperator = 13, ImplicationOperator = 14, IffOperator = 15, 
    True = 16, False = 17, Comma = 18, LeftBrace = 19, RightBrace = 20, 
    LeftBracket = 21, RightBracket = 22, LeftChevron = 23, RightChevron = 24, 
    LeftParenthesis = 25, RightParenthesis = 26, BlockComment = 27, LineComment = 28, 
    Infinity = 29, Scalar = 30, Integer = 31, DecimalInteger = 32, BinaryInteger = 33, 
    OctalInteger = 34, HexInteger = 35, Floating = 36, PointFloat = 37, 
    ExponentFloat = 38, Identifier = 39, Whitespace = 40
  };

  explicit MetricTemporalLogicLexer(antlr4::CharStream *input);

  ~MetricTemporalLogicLexer() override;


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
