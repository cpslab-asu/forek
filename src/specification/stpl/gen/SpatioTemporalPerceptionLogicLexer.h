
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SpatioTemporalPerceptionLogicLexer : public antlr4::Lexer {
public:
  enum {
    SpatialExists = 1, SpatialForall = 2, InteriorOperator = 3, ClosureOperator = 4, 
    BoundingBoxFunction = 5, ExistsQuantifier = 6, ForallQuantifier = 7, 
    FreezeTime = 8, LessThanOrEqualTo = 9, GreaterThanOrEqualTo = 10, EqualTo = 11, 
    NotEqualTo = 12, OnceOperator = 13, HistoricallyOperator = 14, PreviousOperator = 15, 
    SinceOperator = 16, TriggerOperator = 17, EventuallyOperator = 18, AlwaysOperator = 19, 
    NextOperator = 20, UntilOperator = 21, ReleaseOperator = 22, NegationOperator = 23, 
    ConjunctionOperator = 24, DisjunctionOperator = 25, ImplicationOperator = 26, 
    IffOperator = 27, True = 28, False = 29, Comma = 30, LeftBrace = 31, 
    RightBrace = 32, LeftBracket = 33, RightBracket = 34, LeftChevron = 35, 
    RightChevron = 36, LeftParenthesis = 37, RightParenthesis = 38, BlockComment = 39, 
    LineComment = 40, Infinity = 41, Scalar = 42, Integer = 43, DecimalInteger = 44, 
    BinaryInteger = 45, OctalInteger = 46, HexInteger = 47, Floating = 48, 
    PointFloat = 49, ExponentFloat = 50, Identifier = 51, Whitespace = 52, 
    AdditionOperator = 53, SubtractionOperator = 54, MultiplicationOperator = 55, 
    DivisionOperator = 56, ModuloOperator = 57
  };

  explicit SpatioTemporalPerceptionLogicLexer(antlr4::CharStream *input);

  ~SpatioTemporalPerceptionLogicLexer() override;


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
