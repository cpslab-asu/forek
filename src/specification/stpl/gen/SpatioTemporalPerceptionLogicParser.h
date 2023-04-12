
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  SpatioTemporalPerceptionLogicParser : public antlr4::Parser {
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

  enum {
    RuleStart = 0, RuleFormula = 1, RuleSpatialFormula = 2, RuleSpatialTerm = 3, 
    RuleFnComparison = 4, RuleExpression = 5, RuleFunctionCall = 6, RuleObjectQualifier = 7, 
    RuleArgumentList = 8, RuleTimeConstraint = 9, RuleRelationalOperator = 10, 
    RuleProposition = 11, RuleTerm = 12, RuleInterval = 13
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
  class ExpressionContext;
  class FunctionCallContext;
  class ObjectQualifierContext;
  class ArgumentListContext;
  class TimeConstraintContext;
  class RelationalOperatorContext;
  class PropositionContext;
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

  class  StplFunctionComparisonContext : public FormulaContext {
  public:
    StplFunctionComparisonContext(FormulaContext *ctx);

    FnComparisonContext *fnComparison();

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

  class  StplSpatialForallContext : public FormulaContext {
  public:
    StplSpatialForallContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *SpatialForall();
    SpatialFormulaContext *spatialFormula();

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

  class  StplComplementContext : public SpatialFormulaContext {
  public:
    StplComplementContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *NegationOperator();
    SpatialFormulaContext *spatialFormula();

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

  class  StplInteriorContext : public SpatialFormulaContext {
  public:
    StplInteriorContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *InteriorOperator();
    SpatialFormulaContext *spatialFormula();

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

  class  SpatialParenthesesContext : public SpatialFormulaContext {
  public:
    SpatialParenthesesContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *LeftParenthesis();
    SpatialFormulaContext *spatialFormula();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplClosureContext : public SpatialFormulaContext {
  public:
    StplClosureContext(SpatialFormulaContext *ctx);

    antlr4::tree::TerminalNode *ClosureOperator();
    SpatialFormulaContext *spatialFormula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplIntersectionContext : public SpatialFormulaContext {
  public:
    StplIntersectionContext(SpatialFormulaContext *ctx);

    std::vector<SpatialFormulaContext *> spatialFormula();
    SpatialFormulaContext* spatialFormula(size_t i);
    antlr4::tree::TerminalNode *ConjunctionOperator();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StplUnionContext : public SpatialFormulaContext {
  public:
    StplUnionContext(SpatialFormulaContext *ctx);

    std::vector<SpatialFormulaContext *> spatialFormula();
    SpatialFormulaContext* spatialFormula(size_t i);
    antlr4::tree::TerminalNode *DisjunctionOperator();

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
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    RelationalOperatorContext *relationalOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnComparisonContext* fnComparison();

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
    antlr4::tree::TerminalNode *SubtractionOperator();

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

  class  StplFunctionCallContext : public ExpressionContext {
  public:
    StplFunctionCallContext(ExpressionContext *ctx);

    FunctionCallContext *functionCall();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AreaFunction();
    antlr4::tree::TerminalNode *LeftParenthesis();
    SpatialFormulaContext *spatialFormula();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Identifier();
    ArgumentListContext *argumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

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
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace gen
