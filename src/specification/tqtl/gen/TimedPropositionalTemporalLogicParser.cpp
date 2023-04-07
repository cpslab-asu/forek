
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedPropositionalTemporalLogicParser.g4 by ANTLR 4.11.1


#include "TimedPropositionalTemporalLogicParserVisitor.h"

#include "TimedPropositionalTemporalLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct TimedPropositionalTemporalLogicParserStaticData final {
  TimedPropositionalTemporalLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TimedPropositionalTemporalLogicParserStaticData(const TimedPropositionalTemporalLogicParserStaticData&) = delete;
  TimedPropositionalTemporalLogicParserStaticData(TimedPropositionalTemporalLogicParserStaticData&&) = delete;
  TimedPropositionalTemporalLogicParserStaticData& operator=(const TimedPropositionalTemporalLogicParserStaticData&) = delete;
  TimedPropositionalTemporalLogicParserStaticData& operator=(TimedPropositionalTemporalLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag timedpropositionaltemporallogicparserParserOnceFlag;
TimedPropositionalTemporalLogicParserStaticData *timedpropositionaltemporallogicparserParserStaticData = nullptr;

void timedpropositionaltemporallogicparserParserInitialize() {
  assert(timedpropositionaltemporallogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<TimedPropositionalTemporalLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "timeConstraint", "relationalOperator", "proposition", 
      "expression", "term"
    },
    std::vector<std::string>{
      "", "", "'<='", "'>='", "", "", "'=='", "'!='", "", "", "", "", "", 
      "", "", "", "", "", "'true'", "'false'", "'{'", "'}'", "'['", "']'", 
      "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "FreezeTime", "LessThanOrEqualTo", "GreaterThanOrEqualTo", "LessThan", 
      "GreaterThan", "EqualTo", "NotEqualTo", "EventuallyOperator", "AlwaysOperator", 
      "NextOperator", "UntilOperator", "ReleaseOperator", "NegationOperator", 
      "ConjunctionOperator", "DisjunctionOperator", "ImplicationOperator", 
      "IffOperator", "True", "False", "LeftBrace", "RightBrace", "LeftBracket", 
      "RightBracket", "LeftParenthesis", "RightParenthesis", "BlockComment", 
      "LineComment", "Infinity", "Scalar", "Integer", "DecimalInteger", 
      "BinaryInteger", "OctalInteger", "HexInteger", "Floating", "PointFloat", 
      "ExponentFloat", "Identifier", "Whitespace", "AdditionOperator", "SubtractionOperator", 
      "MultiplicationOperator", "DivisionOperator"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,43,109,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,3,1,38,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,58,8,1,10,1,12,1,61,9,1,1,2,1,2,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,3,3,73,8,3,1,4,1,4,1,5,1,5,1,5,1,5,1,
  	5,1,5,3,5,83,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,
  	97,8,5,10,5,12,5,100,9,5,1,6,1,6,3,6,104,8,6,1,6,3,6,107,8,6,1,6,0,2,
  	2,10,7,0,2,4,6,8,10,12,0,0,128,0,14,1,0,0,0,2,37,1,0,0,0,4,62,1,0,0,0,
  	6,72,1,0,0,0,8,74,1,0,0,0,10,82,1,0,0,0,12,106,1,0,0,0,14,15,3,2,1,0,
  	15,16,5,0,0,1,16,1,1,0,0,0,17,18,6,1,-1,0,18,19,5,24,0,0,19,20,3,2,1,
  	0,20,21,5,25,0,0,21,38,1,0,0,0,22,38,5,18,0,0,23,38,5,19,0,0,24,25,5,
  	8,0,0,25,38,3,2,1,13,26,27,5,9,0,0,27,38,3,2,1,12,28,29,5,10,0,0,29,38,
  	3,2,1,11,30,31,5,13,0,0,31,38,3,2,1,8,32,33,5,1,0,0,33,34,5,38,0,0,34,
  	38,3,2,1,3,35,38,3,4,2,0,36,38,3,8,4,0,37,17,1,0,0,0,37,22,1,0,0,0,37,
  	23,1,0,0,0,37,24,1,0,0,0,37,26,1,0,0,0,37,28,1,0,0,0,37,30,1,0,0,0,37,
  	32,1,0,0,0,37,35,1,0,0,0,37,36,1,0,0,0,38,59,1,0,0,0,39,40,10,10,0,0,
  	40,41,5,11,0,0,41,58,3,2,1,11,42,43,10,9,0,0,43,44,5,12,0,0,44,58,3,2,
  	1,10,45,46,10,7,0,0,46,47,5,14,0,0,47,58,3,2,1,8,48,49,10,6,0,0,49,50,
  	5,15,0,0,50,58,3,2,1,7,51,52,10,5,0,0,52,53,5,16,0,0,53,58,3,2,1,6,54,
  	55,10,4,0,0,55,56,5,17,0,0,56,58,3,2,1,5,57,39,1,0,0,0,57,42,1,0,0,0,
  	57,45,1,0,0,0,57,48,1,0,0,0,57,51,1,0,0,0,57,54,1,0,0,0,58,61,1,0,0,0,
  	59,57,1,0,0,0,59,60,1,0,0,0,60,3,1,0,0,0,61,59,1,0,0,0,62,63,3,10,5,0,
  	63,64,3,6,3,0,64,65,3,10,5,0,65,5,1,0,0,0,66,73,5,2,0,0,67,73,5,4,0,0,
  	68,73,5,3,0,0,69,73,5,5,0,0,70,73,5,6,0,0,71,73,5,7,0,0,72,66,1,0,0,0,
  	72,67,1,0,0,0,72,68,1,0,0,0,72,69,1,0,0,0,72,70,1,0,0,0,72,71,1,0,0,0,
  	73,7,1,0,0,0,74,75,5,38,0,0,75,9,1,0,0,0,76,77,6,5,-1,0,77,78,5,24,0,
  	0,78,79,3,10,5,0,79,80,5,25,0,0,80,83,1,0,0,0,81,83,3,12,6,0,82,76,1,
  	0,0,0,82,81,1,0,0,0,83,98,1,0,0,0,84,85,10,4,0,0,85,86,5,42,0,0,86,97,
  	3,10,5,5,87,88,10,3,0,0,88,89,5,43,0,0,89,97,3,10,5,4,90,91,10,2,0,0,
  	91,92,5,40,0,0,92,97,3,10,5,3,93,94,10,1,0,0,94,95,5,41,0,0,95,97,3,10,
  	5,2,96,84,1,0,0,0,96,87,1,0,0,0,96,90,1,0,0,0,96,93,1,0,0,0,97,100,1,
  	0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,11,1,0,0,0,100,98,1,0,0,0,101,107,
  	5,38,0,0,102,104,5,41,0,0,103,102,1,0,0,0,103,104,1,0,0,0,104,105,1,0,
  	0,0,105,107,5,29,0,0,106,101,1,0,0,0,106,103,1,0,0,0,107,13,1,0,0,0,9,
  	37,57,59,72,82,96,98,103,106
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  timedpropositionaltemporallogicparserParserStaticData = staticData.release();
}

}

TimedPropositionalTemporalLogicParser::TimedPropositionalTemporalLogicParser(TokenStream *input) : TimedPropositionalTemporalLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TimedPropositionalTemporalLogicParser::TimedPropositionalTemporalLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TimedPropositionalTemporalLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *timedpropositionaltemporallogicparserParserStaticData->atn, timedpropositionaltemporallogicparserParserStaticData->decisionToDFA, timedpropositionaltemporallogicparserParserStaticData->sharedContextCache, options);
}

TimedPropositionalTemporalLogicParser::~TimedPropositionalTemporalLogicParser() {
  delete _interpreter;
}

const atn::ATN& TimedPropositionalTemporalLogicParser::getATN() const {
  return *timedpropositionaltemporallogicparserParserStaticData->atn;
}

std::string TimedPropositionalTemporalLogicParser::getGrammarFileName() const {
  return "TimedPropositionalTemporalLogicParser.g4";
}

const std::vector<std::string>& TimedPropositionalTemporalLogicParser::getRuleNames() const {
  return timedpropositionaltemporallogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& TimedPropositionalTemporalLogicParser::getVocabulary() const {
  return timedpropositionaltemporallogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TimedPropositionalTemporalLogicParser::getSerializedATN() const {
  return timedpropositionaltemporallogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::StartContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::StartContext::EOF() {
  return getToken(TimedPropositionalTemporalLogicParser::EOF, 0);
}


size_t TimedPropositionalTemporalLogicParser::StartContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleStart;
}


std::any TimedPropositionalTemporalLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

TimedPropositionalTemporalLogicParser::StartContext* TimedPropositionalTemporalLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, TimedPropositionalTemporalLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    formula(0);
    setState(15);
    match(TimedPropositionalTemporalLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedPropositionalTemporalLogicParser::FormulaContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleFormula;
}

void TimedPropositionalTemporalLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlNegationContext::NegationOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::NegationOperator, 0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::PlNegationContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

TimedPropositionalTemporalLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlAtomContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::PropositionContext* TimedPropositionalTemporalLogicParser::PlAtomContext::proposition() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::PropositionContext>(0);
}

TimedPropositionalTemporalLogicParser::PlAtomContext::PlAtomContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlUntilContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::FormulaContext *> TimedPropositionalTemporalLogicParser::LtlUntilContext::formula() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::FormulaContext>();
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::LtlUntilContext::formula(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::LtlUntilContext::UntilOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::UntilOperator, 0);
}

TimedPropositionalTemporalLogicParser::LtlUntilContext::LtlUntilContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::LtlUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::FormulaContext *> TimedPropositionalTemporalLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::FormulaContext>();
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::ImplicationOperator, 0);
}

TimedPropositionalTemporalLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::FormulaContext *> TimedPropositionalTemporalLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::FormulaContext>();
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::ConjunctionOperator, 0);
}

TimedPropositionalTemporalLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlFalseContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlFalseContext::False() {
  return getToken(TimedPropositionalTemporalLogicParser::False, 0);
}

TimedPropositionalTemporalLogicParser::PlFalseContext::PlFalseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlParenthesesContext::LeftParenthesis() {
  return getToken(TimedPropositionalTemporalLogicParser::LeftParenthesis, 0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::TptlParenthesesContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlParenthesesContext::RightParenthesis() {
  return getToken(TimedPropositionalTemporalLogicParser::RightParenthesis, 0);
}

TimedPropositionalTemporalLogicParser::TptlParenthesesContext::TptlParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::LtlAlwaysContext::AlwaysOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::AlwaysOperator, 0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::LtlAlwaysContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

TimedPropositionalTemporalLogicParser::LtlAlwaysContext::LtlAlwaysContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::LtlAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlTimeConstraintContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::TimeConstraintContext* TimedPropositionalTemporalLogicParser::TptlTimeConstraintContext::timeConstraint() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::TimeConstraintContext>(0);
}

TimedPropositionalTemporalLogicParser::TptlTimeConstraintContext::TptlTimeConstraintContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlTimeConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlTimeConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::FormulaContext *> TimedPropositionalTemporalLogicParser::PlIffContext::formula() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::FormulaContext>();
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlIffContext::IffOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::IffOperator, 0);
}

TimedPropositionalTemporalLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlTrueContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlTrueContext::True() {
  return getToken(TimedPropositionalTemporalLogicParser::True, 0);
}

TimedPropositionalTemporalLogicParser::PlTrueContext::PlTrueContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::FormulaContext *> TimedPropositionalTemporalLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::FormulaContext>();
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::DisjunctionOperator, 0);
}

TimedPropositionalTemporalLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlFreezeTimeContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext::FreezeTime() {
  return getToken(TimedPropositionalTemporalLogicParser::FreezeTime, 0);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext::Identifier() {
  return getToken(TimedPropositionalTemporalLogicParser::Identifier, 0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext::TptlFreezeTimeContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlFreezeTime(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlReleaseContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::FormulaContext *> TimedPropositionalTemporalLogicParser::LtlReleaseContext::formula() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::FormulaContext>();
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::LtlReleaseContext::formula(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::LtlReleaseContext::ReleaseOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::ReleaseOperator, 0);
}

TimedPropositionalTemporalLogicParser::LtlReleaseContext::LtlReleaseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::LtlReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::LtlEventuallyContext::EventuallyOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::EventuallyOperator, 0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::LtlEventuallyContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

TimedPropositionalTemporalLogicParser::LtlEventuallyContext::LtlEventuallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::LtlEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlNextContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::LtlNextContext::NextOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::NextOperator, 0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::LtlNextContext::formula() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::FormulaContext>(0);
}

TimedPropositionalTemporalLogicParser::LtlNextContext::LtlNextContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::LtlNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlNext(this);
  else
    return visitor->visitChildren(this);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::formula() {
   return formula(0);
}

TimedPropositionalTemporalLogicParser::FormulaContext* TimedPropositionalTemporalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TimedPropositionalTemporalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  TimedPropositionalTemporalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, TimedPropositionalTemporalLogicParser::RuleFormula, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TptlParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(18);
      match(TimedPropositionalTemporalLogicParser::LeftParenthesis);
      setState(19);
      formula(0);
      setState(20);
      match(TimedPropositionalTemporalLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(22);
      match(TimedPropositionalTemporalLogicParser::True);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(23);
      match(TimedPropositionalTemporalLogicParser::False);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(24);
      match(TimedPropositionalTemporalLogicParser::EventuallyOperator);
      setState(25);
      formula(13);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(26);
      match(TimedPropositionalTemporalLogicParser::AlwaysOperator);
      setState(27);
      formula(12);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(28);
      match(TimedPropositionalTemporalLogicParser::NextOperator);
      setState(29);
      formula(11);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(30);
      match(TimedPropositionalTemporalLogicParser::NegationOperator);
      setState(31);
      formula(8);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<TptlFreezeTimeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(TimedPropositionalTemporalLogicParser::FreezeTime);
      setState(33);
      match(TimedPropositionalTemporalLogicParser::Identifier);
      setState(34);
      formula(3);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<TptlTimeConstraintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(35);
      timeConstraint();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<PlAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      proposition();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(59);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(57);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(39);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(40);
          match(TimedPropositionalTemporalLogicParser::UntilOperator);
          setState(41);
          formula(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(42);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(43);
          match(TimedPropositionalTemporalLogicParser::ReleaseOperator);
          setState(44);
          formula(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(45);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(46);
          match(TimedPropositionalTemporalLogicParser::ConjunctionOperator);
          setState(47);
          formula(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(48);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(49);
          match(TimedPropositionalTemporalLogicParser::DisjunctionOperator);
          setState(50);
          formula(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(51);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(52);
          match(TimedPropositionalTemporalLogicParser::ImplicationOperator);
          setState(53);
          formula(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(54);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(55);
          match(TimedPropositionalTemporalLogicParser::IffOperator);
          setState(56);
          formula(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(61);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TimeConstraintContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::TimeConstraintContext::TimeConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TimedPropositionalTemporalLogicParser::ExpressionContext *> TimedPropositionalTemporalLogicParser::TimeConstraintContext::expression() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::ExpressionContext>();
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::TimeConstraintContext::expression(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::ExpressionContext>(i);
}

TimedPropositionalTemporalLogicParser::RelationalOperatorContext* TimedPropositionalTemporalLogicParser::TimeConstraintContext::relationalOperator() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::RelationalOperatorContext>(0);
}


size_t TimedPropositionalTemporalLogicParser::TimeConstraintContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleTimeConstraint;
}


std::any TimedPropositionalTemporalLogicParser::TimeConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTimeConstraint(this);
  else
    return visitor->visitChildren(this);
}

TimedPropositionalTemporalLogicParser::TimeConstraintContext* TimedPropositionalTemporalLogicParser::timeConstraint() {
  TimeConstraintContext *_localctx = _tracker.createInstance<TimeConstraintContext>(_ctx, getState());
  enterRule(_localctx, 4, TimedPropositionalTemporalLogicParser::RuleTimeConstraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    expression(0);
    setState(63);
    relationalOperator();
    setState(64);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalOperatorContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::RelationalOperatorContext::RelationalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedPropositionalTemporalLogicParser::RelationalOperatorContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleRelationalOperator;
}

void TimedPropositionalTemporalLogicParser::RelationalOperatorContext::copyFrom(RelationalOperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TptlNotEqualToContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlNotEqualToContext::NotEqualTo() {
  return getToken(TimedPropositionalTemporalLogicParser::NotEqualTo, 0);
}

TimedPropositionalTemporalLogicParser::TptlNotEqualToContext::TptlNotEqualToContext(RelationalOperatorContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlNotEqualToContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlNotEqualTo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlLessThanOrEqualToContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlLessThanOrEqualToContext::LessThanOrEqualTo() {
  return getToken(TimedPropositionalTemporalLogicParser::LessThanOrEqualTo, 0);
}

TimedPropositionalTemporalLogicParser::TptlLessThanOrEqualToContext::TptlLessThanOrEqualToContext(RelationalOperatorContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlLessThanOrEqualToContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlLessThanOrEqualTo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlGreaterThanOrEqualToContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlGreaterThanOrEqualToContext::GreaterThanOrEqualTo() {
  return getToken(TimedPropositionalTemporalLogicParser::GreaterThanOrEqualTo, 0);
}

TimedPropositionalTemporalLogicParser::TptlGreaterThanOrEqualToContext::TptlGreaterThanOrEqualToContext(RelationalOperatorContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlGreaterThanOrEqualToContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlGreaterThanOrEqualTo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlGreaterThanContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlGreaterThanContext::GreaterThan() {
  return getToken(TimedPropositionalTemporalLogicParser::GreaterThan, 0);
}

TimedPropositionalTemporalLogicParser::TptlGreaterThanContext::TptlGreaterThanContext(RelationalOperatorContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlGreaterThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlGreaterThan(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlLessThanContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlLessThanContext::LessThan() {
  return getToken(TimedPropositionalTemporalLogicParser::LessThan, 0);
}

TimedPropositionalTemporalLogicParser::TptlLessThanContext::TptlLessThanContext(RelationalOperatorContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlLessThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlLessThan(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlEqualToContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::TptlEqualToContext::EqualTo() {
  return getToken(TimedPropositionalTemporalLogicParser::EqualTo, 0);
}

TimedPropositionalTemporalLogicParser::TptlEqualToContext::TptlEqualToContext(RelationalOperatorContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::TptlEqualToContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlEqualTo(this);
  else
    return visitor->visitChildren(this);
}
TimedPropositionalTemporalLogicParser::RelationalOperatorContext* TimedPropositionalTemporalLogicParser::relationalOperator() {
  RelationalOperatorContext *_localctx = _tracker.createInstance<RelationalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 6, TimedPropositionalTemporalLogicParser::RuleRelationalOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedPropositionalTemporalLogicParser::LessThanOrEqualTo: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::TptlLessThanOrEqualToContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(66);
        match(TimedPropositionalTemporalLogicParser::LessThanOrEqualTo);
        break;
      }

      case TimedPropositionalTemporalLogicParser::LessThan: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::TptlLessThanContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(67);
        match(TimedPropositionalTemporalLogicParser::LessThan);
        break;
      }

      case TimedPropositionalTemporalLogicParser::GreaterThanOrEqualTo: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::TptlGreaterThanOrEqualToContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(68);
        match(TimedPropositionalTemporalLogicParser::GreaterThanOrEqualTo);
        break;
      }

      case TimedPropositionalTemporalLogicParser::GreaterThan: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::TptlGreaterThanContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(69);
        match(TimedPropositionalTemporalLogicParser::GreaterThan);
        break;
      }

      case TimedPropositionalTemporalLogicParser::EqualTo: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::TptlEqualToContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(70);
        match(TimedPropositionalTemporalLogicParser::EqualTo);
        break;
      }

      case TimedPropositionalTemporalLogicParser::NotEqualTo: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::TptlNotEqualToContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(71);
        match(TimedPropositionalTemporalLogicParser::NotEqualTo);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropositionContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::PropositionContext::Identifier() {
  return getToken(TimedPropositionalTemporalLogicParser::Identifier, 0);
}


size_t TimedPropositionalTemporalLogicParser::PropositionContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleProposition;
}


std::any TimedPropositionalTemporalLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

TimedPropositionalTemporalLogicParser::PropositionContext* TimedPropositionalTemporalLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 8, TimedPropositionalTemporalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(TimedPropositionalTemporalLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedPropositionalTemporalLogicParser::ExpressionContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleExpression;
}

void TimedPropositionalTemporalLogicParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticMinusContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::ExpressionContext *> TimedPropositionalTemporalLogicParser::ArithmeticMinusContext::expression() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::ExpressionContext>();
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::ArithmeticMinusContext::expression(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticMinusContext::SubtractionOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::SubtractionOperator, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticMinusContext::ArithmeticMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTimesContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::ExpressionContext *> TimedPropositionalTemporalLogicParser::ArithmeticTimesContext::expression() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::ExpressionContext>();
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::ArithmeticTimesContext::expression(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticTimesContext::MultiplicationOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::MultiplicationOperator, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticTimesContext::ArithmeticTimesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext::LeftParenthesis() {
  return getToken(TimedPropositionalTemporalLogicParser::LeftParenthesis, 0);
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext::expression() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::ExpressionContext>(0);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext::RightParenthesis() {
  return getToken(TimedPropositionalTemporalLogicParser::RightParenthesis, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext::ArithmeticParenthesesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticDivideContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::ExpressionContext *> TimedPropositionalTemporalLogicParser::ArithmeticDivideContext::expression() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::ExpressionContext>();
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::ArithmeticDivideContext::expression(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticDivideContext::DivisionOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::DivisionOperator, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticDivideContext::ArithmeticDivideContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTermContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::TermContext* TimedPropositionalTemporalLogicParser::ArithmeticTermContext::term() {
  return getRuleContext<TimedPropositionalTemporalLogicParser::TermContext>(0);
}

TimedPropositionalTemporalLogicParser::ArithmeticTermContext::ArithmeticTermContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticPlusContext ------------------------------------------------------------------

std::vector<TimedPropositionalTemporalLogicParser::ExpressionContext *> TimedPropositionalTemporalLogicParser::ArithmeticPlusContext::expression() {
  return getRuleContexts<TimedPropositionalTemporalLogicParser::ExpressionContext>();
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::ArithmeticPlusContext::expression(size_t i) {
  return getRuleContext<TimedPropositionalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticPlusContext::AdditionOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::AdditionOperator, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticPlusContext::ArithmeticPlusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticPlus(this);
  else
    return visitor->visitChildren(this);
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::expression() {
   return expression(0);
}

TimedPropositionalTemporalLogicParser::ExpressionContext* TimedPropositionalTemporalLogicParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TimedPropositionalTemporalLogicParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  TimedPropositionalTemporalLogicParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, TimedPropositionalTemporalLogicParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedPropositionalTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ArithmeticParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(77);
        match(TimedPropositionalTemporalLogicParser::LeftParenthesis);
        setState(78);
        expression(0);
        setState(79);
        match(TimedPropositionalTemporalLogicParser::RightParenthesis);
        break;
      }

      case TimedPropositionalTemporalLogicParser::Scalar:
      case TimedPropositionalTemporalLogicParser::Identifier:
      case TimedPropositionalTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<ArithmeticTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(81);
        term();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(96);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(84);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(85);
          match(TimedPropositionalTemporalLogicParser::MultiplicationOperator);
          setState(86);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(87);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(88);
          match(TimedPropositionalTemporalLogicParser::DivisionOperator);
          setState(89);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(90);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(91);
          match(TimedPropositionalTemporalLogicParser::AdditionOperator);
          setState(92);
          expression(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(93);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(94);
          match(TimedPropositionalTemporalLogicParser::SubtractionOperator);
          setState(95);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

TimedPropositionalTemporalLogicParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedPropositionalTemporalLogicParser::TermContext::getRuleIndex() const {
  return TimedPropositionalTemporalLogicParser::RuleTerm;
}

void TimedPropositionalTemporalLogicParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticConstantContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticConstantContext::Scalar() {
  return getToken(TimedPropositionalTemporalLogicParser::Scalar, 0);
}

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticConstantContext::SubtractionOperator() {
  return getToken(TimedPropositionalTemporalLogicParser::SubtractionOperator, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticConstantContext::ArithmeticConstantContext(TermContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticVariableContext ------------------------------------------------------------------

tree::TerminalNode* TimedPropositionalTemporalLogicParser::ArithmeticVariableContext::Identifier() {
  return getToken(TimedPropositionalTemporalLogicParser::Identifier, 0);
}

TimedPropositionalTemporalLogicParser::ArithmeticVariableContext::ArithmeticVariableContext(TermContext *ctx) { copyFrom(ctx); }


std::any TimedPropositionalTemporalLogicParser::ArithmeticVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedPropositionalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticVariable(this);
  else
    return visitor->visitChildren(this);
}
TimedPropositionalTemporalLogicParser::TermContext* TimedPropositionalTemporalLogicParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 12, TimedPropositionalTemporalLogicParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedPropositionalTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::ArithmeticVariableContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(101);
        match(TimedPropositionalTemporalLogicParser::Identifier);
        break;
      }

      case TimedPropositionalTemporalLogicParser::Scalar:
      case TimedPropositionalTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<TimedPropositionalTemporalLogicParser::ArithmeticConstantContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(103);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TimedPropositionalTemporalLogicParser::SubtractionOperator) {
          setState(102);
          match(TimedPropositionalTemporalLogicParser::SubtractionOperator);
        }
        setState(105);
        match(TimedPropositionalTemporalLogicParser::Scalar);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TimedPropositionalTemporalLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);
    case 5: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TimedPropositionalTemporalLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool TimedPropositionalTemporalLogicParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 4);
    case 7: return precpred(_ctx, 3);
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void TimedPropositionalTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(timedpropositionaltemporallogicparserParserOnceFlag, timedpropositionaltemporallogicparserParserInitialize);
}
