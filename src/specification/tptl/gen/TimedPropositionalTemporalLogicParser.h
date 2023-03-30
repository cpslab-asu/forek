
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedPropositionalTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  TimedPropositionalTemporalLogicParser : public antlr4::Parser {
public:
  enum {
    FreezeTime = 1, LessThanOrEqualTo = 2, GreaterThanOrEqualTo = 3, LessThan = 4, 
    GreaterThan = 5, EqualTo = 6, NotEqualTo = 7, EventuallyOperator = 8, 
    AlwaysOperator = 9, NextOperator = 10, UntilOperator = 11, ReleaseOperator = 12, 
    NegationOperator = 13, ConjunctionOperator = 14, DisjunctionOperator = 15, 
    ImplicationOperator = 16, IffOperator = 17, True = 18, False = 19, LeftBrace = 20, 
    RightBrace = 21, LeftBracket = 22, RightBracket = 23, LeftParenthesis = 24, 
    RightParenthesis = 25, BlockComment = 26, LineComment = 27, Infinity = 28, 
    Scalar = 29, Integer = 30, DecimalInteger = 31, BinaryInteger = 32, 
    OctalInteger = 33, HexInteger = 34, Floating = 35, PointFloat = 36, 
    ExponentFloat = 37, Identifier = 38, Whitespace = 39, AdditionOperator = 40, 
    SubtractionOperator = 41, MultiplicationOperator = 42, DivisionOperator = 43
  };

  enum {
    RuleStart = 0, RuleFormula = 1, RuleTimeConstraint = 2, RuleRelationalOperator = 3, 
    RuleProposition = 4, RuleExpression = 5, RuleTerm = 6
  };

  explicit TimedPropositionalTemporalLogicParser(antlr4::TokenStream *input);

  TimedPropositionalTemporalLogicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TimedPropositionalTemporalLogicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class FormulaContext;
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

  class  PlAtomContext : public FormulaContext {
  public:
    PlAtomContext(FormulaContext *ctx);

    PropositionContext *proposition();

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

  class  TptlParenthesesContext : public FormulaContext {
  public:
    TptlParenthesesContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *LeftParenthesis();
    FormulaContext *formula();
    antlr4::tree::TerminalNode *RightParenthesis();

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

  class  LtlReleaseContext : public FormulaContext {
  public:
    LtlReleaseContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *ReleaseOperator();

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
   
    RelationalOperatorContext() = default;
    void copyFrom(RelationalOperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TptlNotEqualToContext : public RelationalOperatorContext {
  public:
    TptlNotEqualToContext(RelationalOperatorContext *ctx);

    antlr4::tree::TerminalNode *NotEqualTo();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlLessThanOrEqualToContext : public RelationalOperatorContext {
  public:
    TptlLessThanOrEqualToContext(RelationalOperatorContext *ctx);

    antlr4::tree::TerminalNode *LessThanOrEqualTo();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlGreaterThanOrEqualToContext : public RelationalOperatorContext {
  public:
    TptlGreaterThanOrEqualToContext(RelationalOperatorContext *ctx);

    antlr4::tree::TerminalNode *GreaterThanOrEqualTo();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlGreaterThanContext : public RelationalOperatorContext {
  public:
    TptlGreaterThanContext(RelationalOperatorContext *ctx);

    antlr4::tree::TerminalNode *GreaterThan();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlLessThanContext : public RelationalOperatorContext {
  public:
    TptlLessThanContext(RelationalOperatorContext *ctx);

    antlr4::tree::TerminalNode *LessThan();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TptlEqualToContext : public RelationalOperatorContext {
  public:
    TptlEqualToContext(RelationalOperatorContext *ctx);

    antlr4::tree::TerminalNode *EqualTo();

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
