
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SignalTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SignalTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    LessThanOrEqualTo = 1, GreaterThanOrEqualTo = 2, EqualTo = 3, NotEqualTo = 4, 
    EventuallyOperator = 5, AlwaysOperator = 6, NextOperator = 7, UntilOperator = 8, 
    ReleaseOperator = 9, NegationOperator = 10, ConjunctionOperator = 11, 
    DisjunctionOperator = 12, ImplicationOperator = 13, IffOperator = 14, 
    True = 15, False = 16, Comma = 17, LeftBrace = 18, RightBrace = 19, 
    LeftBracket = 20, RightBracket = 21, LeftChevron = 22, RightChevron = 23, 
    LeftParenthesis = 24, RightParenthesis = 25, BlockComment = 26, LineComment = 27, 
    Infinity = 28, Scalar = 29, Integer = 30, DecimalInteger = 31, BinaryInteger = 32, 
    OctalInteger = 33, HexInteger = 34, Floating = 35, PointFloat = 36, 
    ExponentFloat = 37, Identifier = 38, Whitespace = 39, AdditionOperator = 40, 
    SubtractionOperator = 41, MultiplicationOperator = 42, DivisionOperator = 43, 
    ModulusOperator = 44
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
