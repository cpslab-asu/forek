
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


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
    RuleStart = 0, RulePlFormula = 1, RuleProposition = 2
  };

  explicit PropositionalLogicParser(antlr4::TokenStream *input);

  PropositionalLogicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PropositionalLogicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class PlFormulaContext;
  class PropositionContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlFormulaContext *plFormula();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  PlFormulaContext : public antlr4::ParserRuleContext {
  public:
    PlFormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PlFormulaContext() = default;
    void copyFrom(PlFormulaContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PlNegationContext : public PlFormulaContext {
  public:
    PlNegationContext(PlFormulaContext *ctx);

    antlr4::tree::TerminalNode *NegationOperator();
    PlFormulaContext *plFormula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlIffContext : public PlFormulaContext {
  public:
    PlIffContext(PlFormulaContext *ctx);

    std::vector<PlFormulaContext *> plFormula();
    PlFormulaContext* plFormula(size_t i);
    antlr4::tree::TerminalNode *IffOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlTrueContext : public PlFormulaContext {
  public:
    PlTrueContext(PlFormulaContext *ctx);

    antlr4::tree::TerminalNode *True();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlAtomContext : public PlFormulaContext {
  public:
    PlAtomContext(PlFormulaContext *ctx);

    PropositionContext *proposition();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlParenthesisContext : public PlFormulaContext {
  public:
    PlParenthesisContext(PlFormulaContext *ctx);

    antlr4::tree::TerminalNode *LeftParenthesis();
    PlFormulaContext *plFormula();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlDisjunctionContext : public PlFormulaContext {
  public:
    PlDisjunctionContext(PlFormulaContext *ctx);

    std::vector<PlFormulaContext *> plFormula();
    PlFormulaContext* plFormula(size_t i);
    antlr4::tree::TerminalNode *DisjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlImplicationContext : public PlFormulaContext {
  public:
    PlImplicationContext(PlFormulaContext *ctx);

    std::vector<PlFormulaContext *> plFormula();
    PlFormulaContext* plFormula(size_t i);
    antlr4::tree::TerminalNode *ImplicationOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlConjunctionContext : public PlFormulaContext {
  public:
    PlConjunctionContext(PlFormulaContext *ctx);

    std::vector<PlFormulaContext *> plFormula();
    PlFormulaContext* plFormula(size_t i);
    antlr4::tree::TerminalNode *ConjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlFalseContext : public PlFormulaContext {
  public:
    PlFalseContext(PlFormulaContext *ctx);

    antlr4::tree::TerminalNode *False();

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

}  // namespace gen
