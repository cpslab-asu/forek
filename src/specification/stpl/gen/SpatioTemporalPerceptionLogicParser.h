
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SpatioTemporalPerceptionLogicParser : public antlr4::Parser {
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

  enum {
    RuleStart = 0, RuleFormula = 1, RuleSpatialFormula = 2, RuleSpatialTerm = 3, 
    RuleFnComparison = 4, RuleFnExpression = 5, RuleFnInvocation = 6, RuleObjectQualifier = 7, 
    RuleArgumentList = 8, RuleTimeConstraint = 9, RuleRelationalOperator = 10, 
    RuleProposition = 11, RuleExpression = 12, RuleTerm = 13, RuleInterval = 14
  };

  explicit SpatioTemporalPerceptionLogicParser(antlr4::TokenStream *input);

  SpatioTemporalPerceptionLogicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SpatioTemporalPerceptionLogicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class FormulaContext;
  class SpatialFormulaContext;
  class SpatialTermContext;
  class FnComparisonContext;
  class FnExpressionContext;
  class FnInvocationContext;
  class ObjectQualifierContext;
  class ArgumentListContext;
  class TimeConstraintContext;
  class RelationalOperatorContext;
  class PropositionContext;
  class ExpressionContext;
  class TermContext;
  class IntervalContext; 

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

  class  StplSpatialExistsContext : public FormulaContext {
  public:
    StplSpatialExistsContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *SpatialExists();
    SpatialFormulaContext *spatialFormula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LtlAlwaysContext : public FormulaContext {
  public:
    LtlAlwaysContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *AlwaysOperator();
    FormulaContext *formula();

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

  class  PlPropositionContext : public FormulaContext {
  public:
    PlPropositionContext(FormulaContext *ctx);

    PropositionContext *proposition();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PtltlPreviousContext : public FormulaContext {
  public:
    PtltlPreviousContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *PreviousOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFunctionComparisonContext : public FormulaContext {
  public:
    StplFunctionComparisonContext(FormulaContext *ctx);

    FnComparisonContext *fnComparison();

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

  class  LtlNextContext : public FormulaContext {
  public:
    LtlNextContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *NextOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialForallContext : public FormulaContext {
  public:
    StplSpatialForallContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *SpatialForall();
    SpatialFormulaContext *spatialFormula();

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

  class  PtltlHistoricallyContext : public FormulaContext {
  public:
    PtltlHistoricallyContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *HistoricallyOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlTimeConstraintContext : public FormulaContext {
  public:
    TptlTimeConstraintContext(FormulaContext *ctx);

    TimeConstraintContext *timeConstraint();

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

  class  LtlReleaseContext : public FormulaContext {
  public:
    LtlReleaseContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *ReleaseOperator();

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

  class  LtlEventuallyContext : public FormulaContext {
  public:
    LtlEventuallyContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *EventuallyOperator();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FormulaContext* formula();
  FormulaContext* formula(int precedence);
  class  SpatialFormulaContext : public antlr4::ParserRuleContext {
  public:
    SpatialFormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SpatialFormulaContext() = default;
    void copyFrom(SpatialFormulaContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StplSpatialConjunctionContext : public SpatialFormulaContext {
  public:
    StplSpatialConjunctionContext(SpatialFormulaContext *ctx);

    std::vector<SpatialFormulaContext *> spatialFormula();
    SpatialFormulaContext* spatialFormula(size_t i);
    antlr4::tree::TerminalNode *ConjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialTermContext : public SpatialFormulaContext {
  public:
    StplSpatialTermContext(SpatialFormulaContext *ctx);

    SpatialTermContext *spatialTerm();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialAlwaysContext : public SpatialFormulaContext {
  public:
    StplSpatialAlwaysContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *AlwaysOperator();
    SpatialFormulaContext *spatialFormula();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialUntilContext : public SpatialFormulaContext {
  public:
    StplSpatialUntilContext(SpatialFormulaContext *ctx);

    std::vector<SpatialFormulaContext *> spatialFormula();
    SpatialFormulaContext* spatialFormula(size_t i);
    antlr4::tree::TerminalNode *UntilOperator();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialDisjunctionContext : public SpatialFormulaContext {
  public:
    StplSpatialDisjunctionContext(SpatialFormulaContext *ctx);

    std::vector<SpatialFormulaContext *> spatialFormula();
    SpatialFormulaContext* spatialFormula(size_t i);
    antlr4::tree::TerminalNode *DisjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialReleaseContext : public SpatialFormulaContext {
  public:
    StplSpatialReleaseContext(SpatialFormulaContext *ctx);

    std::vector<SpatialFormulaContext *> spatialFormula();
    SpatialFormulaContext* spatialFormula(size_t i);
    antlr4::tree::TerminalNode *ReleaseOperator();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialEventuallyContext : public SpatialFormulaContext {
  public:
    StplSpatialEventuallyContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *EventuallyOperator();
    SpatialFormulaContext *spatialFormula();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialNextContext : public SpatialFormulaContext {
  public:
    StplSpatialNextContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *NextOperator();
    SpatialFormulaContext *spatialFormula();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialNegationContext : public SpatialFormulaContext {
  public:
    StplSpatialNegationContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *NegationOperator();
    SpatialFormulaContext *spatialFormula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialInteriorContext : public SpatialFormulaContext {
  public:
    StplSpatialInteriorContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *InteriorOperator();
    SpatialFormulaContext *spatialFormula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplSpatialClosureContext : public SpatialFormulaContext {
  public:
    StplSpatialClosureContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *ClosureOperator();
    SpatialFormulaContext *spatialFormula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SpatialFormulaContext* spatialFormula();
  SpatialFormulaContext* spatialFormula(int precedence);
  class  SpatialTermContext : public antlr4::ParserRuleContext {
  public:
    SpatialTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BoundingBoxFunction();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *RightParenthesis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpatialTermContext* spatialTerm();

  class  FnComparisonContext : public antlr4::ParserRuleContext {
  public:
    FnComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FnExpressionContext *> fnExpression();
    FnExpressionContext* fnExpression(size_t i);
    RelationalOperatorContext *relationalOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnComparisonContext* fnComparison();

  class  FnExpressionContext : public antlr4::ParserRuleContext {
  public:
    FnExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FnExpressionContext() = default;
    void copyFrom(FnExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StplFnExpressionFnInvocationContext : public FnExpressionContext {
  public:
    StplFnExpressionFnInvocationContext(FnExpressionContext *ctx);

    FnInvocationContext *fnInvocation();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionMinusContext : public FnExpressionContext {
  public:
    StplFnExpressionMinusContext(FnExpressionContext *ctx);

    std::vector<FnExpressionContext *> fnExpression();
    FnExpressionContext* fnExpression(size_t i);
    antlr4::tree::TerminalNode *SubtractionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionModuloContext : public FnExpressionContext {
  public:
    StplFnExpressionModuloContext(FnExpressionContext *ctx);

    std::vector<FnExpressionContext *> fnExpression();
    FnExpressionContext* fnExpression(size_t i);
    antlr4::tree::TerminalNode *ModuloOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionParenthesesContext : public FnExpressionContext {
  public:
    StplFnExpressionParenthesesContext(FnExpressionContext *ctx);

    antlr4::tree::TerminalNode *LeftParenthesis();
    FnExpressionContext *fnExpression();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionTermContext : public FnExpressionContext {
  public:
    StplFnExpressionTermContext(FnExpressionContext *ctx);

    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionDivisionContext : public FnExpressionContext {
  public:
    StplFnExpressionDivisionContext(FnExpressionContext *ctx);

    std::vector<FnExpressionContext *> fnExpression();
    FnExpressionContext* fnExpression(size_t i);
    antlr4::tree::TerminalNode *DivisionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionTimesContext : public FnExpressionContext {
  public:
    StplFnExpressionTimesContext(FnExpressionContext *ctx);

    std::vector<FnExpressionContext *> fnExpression();
    FnExpressionContext* fnExpression(size_t i);
    antlr4::tree::TerminalNode *MultiplicationOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplFnExpressionPlusContext : public FnExpressionContext {
  public:
    StplFnExpressionPlusContext(FnExpressionContext *ctx);

    std::vector<FnExpressionContext *> fnExpression();
    FnExpressionContext* fnExpression(size_t i);
    antlr4::tree::TerminalNode *AdditionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FnExpressionContext* fnExpression();
  FnExpressionContext* fnExpression(int precedence);
  class  FnInvocationContext : public antlr4::ParserRuleContext {
  public:
    FnInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *RightParenthesis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnInvocationContext* fnInvocation();

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


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool formulaSempred(FormulaContext *_localctx, size_t predicateIndex);
  bool spatialFormulaSempred(SpatialFormulaContext *_localctx, size_t predicateIndex);
  bool fnExpressionSempred(FnExpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace gen
