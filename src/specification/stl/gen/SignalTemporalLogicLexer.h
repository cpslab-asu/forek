
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SignalTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SignalTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    LessThanOrEqualTo = 1, GreaterThanOrEqualTo = 2, EqualTo = 3, NotEqualTo = 4, 
    OnceOperator = 5, HistoricallyOperator = 6, PreviousOperator = 7, SinceOperator = 8, 
    TriggerOperator = 9, EventuallyOperator = 10, AlwaysOperator = 11, NextOperator = 12, 
    UntilOperator = 13, ReleaseOperator = 14, NegationOperator = 15, ConjunctionOperator = 16, 
    DisjunctionOperator = 17, ImplicationOperator = 18, IffOperator = 19, 
    True = 20, False = 21, Comma = 22, LeftBrace = 23, RightBrace = 24, 
    LeftBracket = 25, RightBracket = 26, LeftChevron = 27, RightChevron = 28, 
    LeftParenthesis = 29, RightParenthesis = 30, BlockComment = 31, LineComment = 32, 
    Infinity = 33, Scalar = 34, Integer = 35, DecimalInteger = 36, BinaryInteger = 37, 
    OctalInteger = 38, HexInteger = 39, Floating = 40, PointFloat = 41, 
    ExponentFloat = 42, Identifier = 43, Whitespace = 44, AdditionOperator = 45, 
    SubtractionOperator = 46, MultiplicationOperator = 47, DivisionOperator = 48, 
    ModuloOperator = 49
  };

  explicit SignalTemporalLogicLexer(antlr4::CharStream *input);

  ~SignalTemporalLogicLexer() override;


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
