
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/LinearTemporalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  LinearTemporalLogicLexer : public antlr4::Lexer {
public:
  enum {
    EventuallyOperator = 1, AlwaysOperator = 2, NextOperator = 3, UntilOperator = 4, 
    ReleaseOperator = 5, NegationOperator = 6, ConjunctionOperator = 7, 
    DisjunctionOperator = 8, ImplicationOperator = 9, IffOperator = 10, 
    True = 11, False = 12, At = 13, Ampersand = 14, Apostrophe = 15, Asterick = 16, 
    Bar = 17, Caret = 18, Colon = 19, Comma = 20, DollarSign = 21, Dot = 22, 
    Equal = 23, ExclamationMark = 24, GraveAccent = 25, Hash = 26, Minus = 27, 
    PercentSign = 28, Plus = 29, QuestionMark = 30, QuotationMark = 31, 
    Semicolon = 32, Tilde = 33, Underscore = 34, Slash = 35, BackSlash = 36, 
    LeftBrace = 37, RightBrace = 38, LeftBracket = 39, RightBracket = 40, 
    LeftChevron = 41, RightChevron = 42, LeftParenthesis = 43, RightParenthesis = 44, 
    BlockComment = 45, LineComment = 46, Scalar = 47, Integer = 48, DecimalInteger = 49, 
    BinaryInteger = 50, OctalInteger = 51, HexInteger = 52, Floating = 53, 
    PointFloat = 54, ExponentFloat = 55, Identifier = 56, Whitespace = 57
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
