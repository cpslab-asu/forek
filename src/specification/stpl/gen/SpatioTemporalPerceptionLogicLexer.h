
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SpatioTemporalPerceptionLogicLexer : public antlr4::Lexer {
public:
  enum {
    SpatialExists = 1, SpatialForall = 2, InteriorOperator = 3, ClosureOperator = 4, 
    BoundingBoxFunction = 5, AreaFunction = 6, ExistsQuantifier = 7, ForallQuantifier = 8, 
    FreezeTime = 9, LessThanOrEqualTo = 10, GreaterThanOrEqualTo = 11, EqualTo = 12, 
    NotEqualTo = 13, EventuallyOperator = 14, AlwaysOperator = 15, NextOperator = 16, 
    UntilOperator = 17, ReleaseOperator = 18, NegationOperator = 19, ConjunctionOperator = 20, 
    DisjunctionOperator = 21, ImplicationOperator = 22, IffOperator = 23, 
    True = 24, False = 25, Comma = 26, LeftBrace = 27, RightBrace = 28, 
    LeftBracket = 29, RightBracket = 30, LeftChevron = 31, RightChevron = 32, 
    LeftParenthesis = 33, RightParenthesis = 34, BlockComment = 35, LineComment = 36, 
    Infinity = 37, Scalar = 38, Integer = 39, DecimalInteger = 40, BinaryInteger = 41, 
    OctalInteger = 42, HexInteger = 43, Floating = 44, PointFloat = 45, 
    ExponentFloat = 46, Identifier = 47, Whitespace = 48, AdditionOperator = 49, 
    SubtractionOperator = 50, MultiplicationOperator = 51, DivisionOperator = 52, 
    ModulusOperator = 53
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
