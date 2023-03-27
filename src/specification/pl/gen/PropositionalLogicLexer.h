
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/PropositionalLogicLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  PropositionalLogicLexer : public antlr4::Lexer {
public:
  enum {
    NegationOperator = 1, ConjunctionOperator = 2, DisjunctionOperator = 3, 
    ImplicationOperator = 4, IffOperator = 5, True = 6, False = 7, At = 8, 
    Ampersand = 9, Apostrophe = 10, Asterick = 11, Bar = 12, Caret = 13, 
    Colon = 14, Comma = 15, DollarSign = 16, Dot = 17, Equal = 18, ExclamationMark = 19, 
    GraveAccent = 20, Hash = 21, Minus = 22, PercentSign = 23, Plus = 24, 
    QuestionMark = 25, QuotationMark = 26, Semicolon = 27, Tilde = 28, Underscore = 29, 
    Slash = 30, BackSlash = 31, LeftBrace = 32, RightBrace = 33, LeftBracket = 34, 
    RightBracket = 35, LeftChevron = 36, RightChevron = 37, LeftParenthesis = 38, 
    RightParenthesis = 39, BlockComment = 40, LineComment = 41, Infinity = 42, 
    Scalar = 43, Integer = 44, DecimalInteger = 45, BinaryInteger = 46, 
    OctalInteger = 47, HexInteger = 48, Floating = 49, PointFloat = 50, 
    ExponentFloat = 51, Identifier = 52, Whitespace = 53
  };

  explicit PropositionalLogicLexer(antlr4::CharStream *input);

  ~PropositionalLogicLexer() override;


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
