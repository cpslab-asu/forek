
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedQualityTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  TimedQualityTemporalLogicParser : public antlr4::Parser {
public:
  enum {
    ExistsQuantifier = 1, ForallQuantifier = 2, FreezeTime = 3, LessThanOrEqualTo = 4, 
    GreaterThanOrEqualTo = 5, EqualTo = 6, NotEqualTo = 7, OnceOperator = 8, 
    HistoricallyOperator = 9, PreviousOperator = 10, SinceOperator = 11, 
    TriggerOperator = 12, EventuallyOperator = 13, AlwaysOperator = 14, 
    NextOperator = 15, UntilOperator = 16, ReleaseOperator = 17, NegationOperator = 18, 
    ConjunctionOperator = 19, DisjunctionOperator = 20, ImplicationOperator = 21, 
    IffOperator = 22, True = 23, False = 24, Comma = 25, LeftBrace = 26, 
    RightBrace = 27, LeftBracket = 28, RightBracket = 29, LeftChevron = 30, 
    RightChevron = 31, LeftParenthesis = 32, RightParenthesis = 33, BlockComment = 34, 
    LineComment = 35, Infinity = 36, Scalar = 37, Integer = 38, DecimalInteger = 39, 
    BinaryInteger = 40, OctalInteger = 41, HexInteger = 42, Floating = 43, 
    PointFloat = 44, ExponentFloat = 45, Identifier = 46, Whitespace = 47, 
    AdditionOperator = 48, SubtractionOperator = 49, MultiplicationOperator = 50, 
    DivisionOperator = 51, ModuloOperator = 52
  };

  enum {
    RuleStart = 0, RuleFormula = 1, RuleObjectQualifier = 2, RuleArgumentList = 3, 
    RuleTimeConstraint = 4, RuleRelationalOperator = 5, RuleProposition = 6, 
    RuleExpression = 7, RuleTerm = 8
  };

  explicit TimedQualityTemporalLogicParser(antlr4::TokenStream *input);

  TimedQualityTemporalLogicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TimedQualityTemporalLogicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class FormulaContext;
  class ObjectQualifierContext;
  class ArgumentListContext;
  class TimeConstraintContext;
  class RelationalOperatorContext;
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

  class  TqtlObjectQualifierContext : public FormulaContext {
  public:
    TqtlObjectQualifierContext(FormulaContext *ctx);

    ObjectQualifierContext *objectQualifier();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PtltlOnceContext : public FormulaContext {
  public:
    PtltlOnceContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *OnceOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlUntilContext : public FormulaContext {
  public:
    LtlUntilContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *UntilOperator();

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

  class  PtltlHistoricallyContext : public FormulaContext {
  public:
    PtltlHistoricallyContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *HistoricallyOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlAlwaysContext : public FormulaContext {
  public:
    LtlAlwaysContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *AlwaysOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlTimeConstraintContext : public FormulaContext {
  public:
    TptlTimeConstraintContext(FormulaContext *ctx);

    TimeConstraintContext *timeConstraint();

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

  class  TptlFreezeTimeContext : public FormulaContext {
  public:
    TptlFreezeTimeContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *FreezeTime();
    antlr4::tree::TerminalNode *Identifier();
    FormulaContext *formula();

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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PtltlPreviousContext : public FormulaContext {
  public:
    PtltlPreviousContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *PreviousOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PtltlSinceContext : public FormulaContext {
  public:
    PtltlSinceContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *SinceOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PtltlTriggerContext : public FormulaContext {
  public:
    PtltlTriggerContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *TriggerOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlEventuallyContext : public FormulaContext {
  public:
    LtlEventuallyContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *EventuallyOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlNextContext : public FormulaContext {
  public:
    LtlNextContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *NextOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FormulaContext* formula();
  FormulaContext* formula(int precedence);
  class  ObjectQualifierContext : public antlr4::ParserRuleContext {
  public:
    ObjectQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ObjectQualifierContext() = default;
    void copyFrom(ObjectQualifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TqtlExistsQualifierContext : public ObjectQualifierContext {
  public:
    TqtlExistsQualifierContext(ObjectQualifierContext *ctx);

    antlr4::tree::TerminalNode *ExistsQuantifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *FreezeTime();
    antlr4::tree::TerminalNode *Identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TqtlForallQualifierContext : public ObjectQualifierContext {
  public:
    TqtlForallQualifierContext(ObjectQualifierContext *ctx);

    antlr4::tree::TerminalNode *ForallQuantifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *FreezeTime();
    antlr4::tree::TerminalNode *Identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ObjectQualifierContext* objectQualifier();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Comma();
    ArgumentListContext *argumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  TimeConstraintContext : public antlr4::ParserRuleContext {
  public:
    TimeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    RelationalOperatorContext *relationalOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeConstraintContext* timeConstraint();

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

  class  ArithmeticModuloContext : public ExpressionContext {
  public:
    ArithmeticModuloContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ModuloOperator();

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
