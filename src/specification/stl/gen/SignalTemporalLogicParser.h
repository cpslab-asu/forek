
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SignalTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SignalTemporalLogicParser : public antlr4::Parser {
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

  enum {
    RuleStart = 0, RuleFormula = 1, RulePredicate = 2, RuleRelationalOperator = 3, 
    RuleInterval = 4, RuleProposition = 5, RuleExpression = 6, RuleTerm = 7
  };

  explicit SignalTemporalLogicParser(antlr4::TokenStream *input);

  SignalTemporalLogicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SignalTemporalLogicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class FormulaContext;
  class PredicateContext;
  class RelationalOperatorContext;
  class IntervalContext;
  class PropositionContext;
  class ExpressionContext;
  class TermContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormulaContext *formula();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  FormulaContext : public antlr4::ParserRuleContext {
  public:
    FormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FormulaContext() = default;
    void copyFrom(FormulaContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PlNegationContext : public FormulaContext {
  public:
    PlNegationContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *NegationOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesesContext : public FormulaContext {
  public:
    ParenthesesContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *LeftParenthesis();
    FormulaContext *formula();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlUntilContext : public FormulaContext {
  public:
    LtlUntilContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *UntilOperator();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlImplicationContext : public FormulaContext {
  public:
    PlImplicationContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *ImplicationOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlConjunctionContext : public FormulaContext {
  public:
    PlConjunctionContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *ConjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlFalseContext : public FormulaContext {
  public:
    PlFalseContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *False();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StlPredicateContext : public FormulaContext {
  public:
    StlPredicateContext(FormulaContext *ctx);

    PredicateContext *predicate();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlAlwaysContext : public FormulaContext {
  public:
    LtlAlwaysContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *AlwaysOperator();
    FormulaContext *formula();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlIffContext : public FormulaContext {
  public:
    PlIffContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *IffOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlTrueContext : public FormulaContext {
  public:
    PlTrueContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *True();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlDisjunctionContext : public FormulaContext {
  public:
    PlDisjunctionContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *DisjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlPropositionContext : public FormulaContext {
  public:
    PlPropositionContext(FormulaContext *ctx);

    PropositionContext *proposition();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlReleaseContext : public FormulaContext {
  public:
    LtlReleaseContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *ReleaseOperator();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlEventuallyContext : public FormulaContext {
  public:
    LtlEventuallyContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *EventuallyOperator();
    FormulaContext *formula();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlNextContext : public FormulaContext {
  public:
    LtlNextContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *NextOperator();
    FormulaContext *formula();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FormulaContext* formula();
  FormulaContext* formula(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    RelationalOperatorContext *relationalOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  RelationalOperatorContext : public antlr4::ParserRuleContext {
  public:
    RelationalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThanOrEqualTo();
    antlr4::tree::TerminalNode *GreaterThanOrEqualTo();
    antlr4::tree::TerminalNode *LeftChevron();
    antlr4::tree::TerminalNode *RightChevron();
    antlr4::tree::TerminalNode *EqualTo();
    antlr4::tree::TerminalNode *NotEqualTo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalOperatorContext* relationalOperator();

  class  IntervalContext : public antlr4::ParserRuleContext {
  public:
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *LeftBracket();
    std::vector<antlr4::tree::TerminalNode *> Scalar();
    antlr4::tree::TerminalNode* Scalar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Infinity();
    antlr4::tree::TerminalNode* Infinity(size_t i);
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *RightBracket();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  PropositionContext : public antlr4::ParserRuleContext {
  public:
    PropositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropositionContext* proposition();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArithmeticMinusContext : public ExpressionContext {
  public:
    ArithmeticMinusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SubtractionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticTimesContext : public ExpressionContext {
  public:
    ArithmeticTimesContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MultiplicationOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticParenthesesContext : public ExpressionContext {
  public:
    ArithmeticParenthesesContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LeftParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticDivideContext : public ExpressionContext {
  public:
    ArithmeticDivideContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DivisionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticModulusContext : public ExpressionContext {
  public:
    ArithmeticModulusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ModulusOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticTermContext : public ExpressionContext {
  public:
    ArithmeticTermContext(ExpressionContext *ctx);

    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticPlusContext : public ExpressionContext {
  public:
    ArithmeticPlusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AdditionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArithmeticConstantContext : public TermContext {
  public:
    ArithmeticConstantContext(TermContext *ctx);

    antlr4::tree::TerminalNode *Scalar();
    antlr4::tree::TerminalNode *SubtractionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticVariableContext : public TermContext {
  public:
    ArithmeticVariableContext(TermContext *ctx);

    antlr4::tree::TerminalNode *Identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TermContext* term();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool formulaSempred(FormulaContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace gen
