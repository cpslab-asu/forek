
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  PropositionalLogicParser : public antlr4::Parser {
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
    RightParenthesis = 39, BlockComment = 40, LineComment = 41, Scalar = 42, 
    Integer = 43, DecimalInteger = 44, BinaryInteger = 45, OctalInteger = 46, 
    HexInteger = 47, Floating = 48, PointFloat = 49, ExponentFloat = 50, 
    Identifier = 51, Whitespace = 52
  };

  enum {
    RulePlFormula = 0, RuleProposition = 1
  };

  explicit PropositionalLogicParser(antlr4::TokenStream *input);

  PropositionalLogicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PropositionalLogicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class PlFormulaContext;
  class PropositionContext; 

  class  PlFormulaContext : public antlr4::ParserRuleContext {
  public:
    PlFormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    std::vector<PlFormulaContext *> plFormula();
    PlFormulaContext* plFormula(size_t i);
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *NegationOperator();
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();
    PropositionContext *proposition();
    antlr4::tree::TerminalNode *ConjunctionOperator();
    antlr4::tree::TerminalNode *DisjunctionOperator();
    antlr4::tree::TerminalNode *ImplicationOperator();
    antlr4::tree::TerminalNode *IffOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlFormulaContext* plFormula();
  PlFormulaContext* plFormula(int precedence);
  class  PropositionContext : public antlr4::ParserRuleContext {
  public:
    PropositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropositionContext* proposition();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool plFormulaSempred(PlFormulaContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

