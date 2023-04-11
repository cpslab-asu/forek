
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/MetricTemporalLogicParser.g4 by ANTLR 4.11.1


#include "MetricTemporalLogicParserVisitor.h"

#include "MetricTemporalLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct MetricTemporalLogicParserStaticData final {
  MetricTemporalLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MetricTemporalLogicParserStaticData(const MetricTemporalLogicParserStaticData&) = delete;
  MetricTemporalLogicParserStaticData(MetricTemporalLogicParserStaticData&&) = delete;
  MetricTemporalLogicParserStaticData& operator=(const MetricTemporalLogicParserStaticData&) = delete;
  MetricTemporalLogicParserStaticData& operator=(MetricTemporalLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag metrictemporallogicparserParserOnceFlag;
MetricTemporalLogicParserStaticData *metrictemporallogicparserParserStaticData = nullptr;

void metrictemporallogicparserParserInitialize() {
  assert(metrictemporallogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<MetricTemporalLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "interval", "proposition"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "'true'", "'false'", "','", 
      "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "EventuallyOperator", "AlwaysOperator", "NextOperator", "UntilOperator", 
      "ReleaseOperator", "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "Comma", "LeftBrace", 
      "RightBrace", "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", 
      "LeftParenthesis", "RightParenthesis", "BlockComment", "LineComment", 
      "Infinity", "Scalar", "Integer", "DecimalInteger", "BinaryInteger", 
      "OctalInteger", "HexInteger", "Floating", "PointFloat", "ExponentFloat", 
      "Identifier", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,76,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,3,1,21,8,1,1,1,1,1,1,1,3,1,26,8,1,1,1,1,1,1,1,3,1,
  	31,8,1,1,1,1,1,1,1,1,1,3,1,37,8,1,1,1,1,1,1,1,3,1,42,8,1,1,1,1,1,1,1,
  	1,1,3,1,48,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,
  	1,63,8,1,10,1,12,1,66,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,0,1,2,4,
  	0,2,4,6,0,3,2,0,16,16,20,20,1,0,24,25,2,0,17,17,21,21,89,0,8,1,0,0,0,
  	2,36,1,0,0,0,4,67,1,0,0,0,6,73,1,0,0,0,8,9,3,2,1,0,9,10,5,0,0,1,10,1,
  	1,0,0,0,11,12,6,1,-1,0,12,13,5,20,0,0,13,14,3,2,1,0,14,15,5,21,0,0,15,
  	37,1,0,0,0,16,37,5,11,0,0,17,37,5,12,0,0,18,20,5,1,0,0,19,21,3,4,2,0,
  	20,19,1,0,0,0,20,21,1,0,0,0,21,22,1,0,0,0,22,37,3,2,1,11,23,25,5,2,0,
  	0,24,26,3,4,2,0,25,24,1,0,0,0,25,26,1,0,0,0,26,27,1,0,0,0,27,37,3,2,1,
  	10,28,30,5,3,0,0,29,31,3,4,2,0,30,29,1,0,0,0,30,31,1,0,0,0,31,32,1,0,
  	0,0,32,37,3,2,1,9,33,34,5,6,0,0,34,37,3,2,1,6,35,37,3,6,3,0,36,11,1,0,
  	0,0,36,16,1,0,0,0,36,17,1,0,0,0,36,18,1,0,0,0,36,23,1,0,0,0,36,28,1,0,
  	0,0,36,33,1,0,0,0,36,35,1,0,0,0,37,64,1,0,0,0,38,39,10,8,0,0,39,41,5,
  	4,0,0,40,42,3,4,2,0,41,40,1,0,0,0,41,42,1,0,0,0,42,43,1,0,0,0,43,63,3,
  	2,1,9,44,45,10,7,0,0,45,47,5,5,0,0,46,48,3,4,2,0,47,46,1,0,0,0,47,48,
  	1,0,0,0,48,49,1,0,0,0,49,63,3,2,1,8,50,51,10,5,0,0,51,52,5,7,0,0,52,63,
  	3,2,1,6,53,54,10,4,0,0,54,55,5,8,0,0,55,63,3,2,1,5,56,57,10,3,0,0,57,
  	58,5,9,0,0,58,63,3,2,1,4,59,60,10,2,0,0,60,61,5,10,0,0,61,63,3,2,1,3,
  	62,38,1,0,0,0,62,44,1,0,0,0,62,50,1,0,0,0,62,53,1,0,0,0,62,56,1,0,0,0,
  	62,59,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,3,1,0,0,0,
  	66,64,1,0,0,0,67,68,7,0,0,0,68,69,7,1,0,0,69,70,5,13,0,0,70,71,7,1,0,
  	0,71,72,7,2,0,0,72,5,1,0,0,0,73,74,5,34,0,0,74,7,1,0,0,0,8,20,25,30,36,
  	41,47,62,64
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  metrictemporallogicparserParserStaticData = staticData.release();
}

}

MetricTemporalLogicParser::MetricTemporalLogicParser(TokenStream *input) : MetricTemporalLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MetricTemporalLogicParser::MetricTemporalLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MetricTemporalLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *metrictemporallogicparserParserStaticData->atn, metrictemporallogicparserParserStaticData->decisionToDFA, metrictemporallogicparserParserStaticData->sharedContextCache, options);
}

MetricTemporalLogicParser::~MetricTemporalLogicParser() {
  delete _interpreter;
}

const atn::ATN& MetricTemporalLogicParser::getATN() const {
  return *metrictemporallogicparserParserStaticData->atn;
}

std::string MetricTemporalLogicParser::getGrammarFileName() const {
  return "MetricTemporalLogicParser.g4";
}

const std::vector<std::string>& MetricTemporalLogicParser::getRuleNames() const {
  return metrictemporallogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& MetricTemporalLogicParser::getVocabulary() const {
  return metrictemporallogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MetricTemporalLogicParser::getSerializedATN() const {
  return metrictemporallogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

MetricTemporalLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::StartContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* MetricTemporalLogicParser::StartContext::EOF() {
  return getToken(MetricTemporalLogicParser::EOF, 0);
}


size_t MetricTemporalLogicParser::StartContext::getRuleIndex() const {
  return MetricTemporalLogicParser::RuleStart;
}


std::any MetricTemporalLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

MetricTemporalLogicParser::StartContext* MetricTemporalLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, MetricTemporalLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    formula(0);
    setState(9);
    match(MetricTemporalLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

MetricTemporalLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MetricTemporalLogicParser::FormulaContext::getRuleIndex() const {
  return MetricTemporalLogicParser::RuleFormula;
}

void MetricTemporalLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::PlNegationContext::NegationOperator() {
  return getToken(MetricTemporalLogicParser::NegationOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PlNegationContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::ParenthesesContext::LeftParenthesis() {
  return getToken(MetricTemporalLogicParser::LeftParenthesis, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::ParenthesesContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* MetricTemporalLogicParser::ParenthesesContext::RightParenthesis() {
  return getToken(MetricTemporalLogicParser::RightParenthesis, 0);
}

MetricTemporalLogicParser::ParenthesesContext::ParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlUntilContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::LtlUntilContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::LtlUntilContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::LtlUntilContext::UntilOperator() {
  return getToken(MetricTemporalLogicParser::UntilOperator, 0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::LtlUntilContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::LtlUntilContext::LtlUntilContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::LtlUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(MetricTemporalLogicParser::ImplicationOperator, 0);
}

MetricTemporalLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(MetricTemporalLogicParser::ConjunctionOperator, 0);
}

MetricTemporalLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlFalseContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::PlFalseContext::False() {
  return getToken(MetricTemporalLogicParser::False, 0);
}

MetricTemporalLogicParser::PlFalseContext::PlFalseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::LtlAlwaysContext::AlwaysOperator() {
  return getToken(MetricTemporalLogicParser::AlwaysOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::LtlAlwaysContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::LtlAlwaysContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::LtlAlwaysContext::LtlAlwaysContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::LtlAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::PlIffContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::PlIffContext::IffOperator() {
  return getToken(MetricTemporalLogicParser::IffOperator, 0);
}

MetricTemporalLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlTrueContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::PlTrueContext::True() {
  return getToken(MetricTemporalLogicParser::True, 0);
}

MetricTemporalLogicParser::PlTrueContext::PlTrueContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(MetricTemporalLogicParser::DisjunctionOperator, 0);
}

MetricTemporalLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlPropositionContext ------------------------------------------------------------------

MetricTemporalLogicParser::PropositionContext* MetricTemporalLogicParser::PlPropositionContext::proposition() {
  return getRuleContext<MetricTemporalLogicParser::PropositionContext>(0);
}

MetricTemporalLogicParser::PlPropositionContext::PlPropositionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PlPropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlProposition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlReleaseContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::LtlReleaseContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::LtlReleaseContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::LtlReleaseContext::ReleaseOperator() {
  return getToken(MetricTemporalLogicParser::ReleaseOperator, 0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::LtlReleaseContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::LtlReleaseContext::LtlReleaseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::LtlReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::LtlEventuallyContext::EventuallyOperator() {
  return getToken(MetricTemporalLogicParser::EventuallyOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::LtlEventuallyContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::LtlEventuallyContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::LtlEventuallyContext::LtlEventuallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::LtlEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlNextContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::LtlNextContext::NextOperator() {
  return getToken(MetricTemporalLogicParser::NextOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::LtlNextContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::LtlNextContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::LtlNextContext::LtlNextContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::LtlNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlNext(this);
  else
    return visitor->visitChildren(this);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::formula() {
   return formula(0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MetricTemporalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  MetricTemporalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, MetricTemporalLogicParser::RuleFormula, precedence);

    

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
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MetricTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(12);
        match(MetricTemporalLogicParser::LeftParenthesis);
        setState(13);
        formula(0);
        setState(14);
        match(MetricTemporalLogicParser::RightParenthesis);
        break;
      }

      case MetricTemporalLogicParser::True: {
        _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        match(MetricTemporalLogicParser::True);
        break;
      }

      case MetricTemporalLogicParser::False: {
        _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(17);
        match(MetricTemporalLogicParser::False);
        break;
      }

      case MetricTemporalLogicParser::EventuallyOperator: {
        _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(18);
        match(MetricTemporalLogicParser::EventuallyOperator);
        setState(20);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(19);
          interval();
          break;
        }

        default:
          break;
        }
        setState(22);
        formula(11);
        break;
      }

      case MetricTemporalLogicParser::AlwaysOperator: {
        _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(23);
        match(MetricTemporalLogicParser::AlwaysOperator);
        setState(25);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(24);
          interval();
          break;
        }

        default:
          break;
        }
        setState(27);
        formula(10);
        break;
      }

      case MetricTemporalLogicParser::NextOperator: {
        _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(28);
        match(MetricTemporalLogicParser::NextOperator);
        setState(30);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          setState(29);
          interval();
          break;
        }

        default:
          break;
        }
        setState(32);
        formula(9);
        break;
      }

      case MetricTemporalLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(33);
        match(MetricTemporalLogicParser::NegationOperator);
        setState(34);
        formula(6);
        break;
      }

      case MetricTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(35);
        proposition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(64);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(62);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(38);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(39);
          match(MetricTemporalLogicParser::UntilOperator);
          setState(41);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
          case 1: {
            setState(40);
            interval();
            break;
          }

          default:
            break;
          }
          setState(43);
          formula(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(44);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(45);
          match(MetricTemporalLogicParser::ReleaseOperator);
          setState(47);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
          case 1: {
            setState(46);
            interval();
            break;
          }

          default:
            break;
          }
          setState(49);
          formula(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(50);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(51);
          match(MetricTemporalLogicParser::ConjunctionOperator);
          setState(52);
          formula(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(53);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(54);
          match(MetricTemporalLogicParser::DisjunctionOperator);
          setState(55);
          formula(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(56);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(57);
          match(MetricTemporalLogicParser::ImplicationOperator);
          setState(58);
          formula(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(59);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(60);
          match(MetricTemporalLogicParser::IffOperator);
          setState(61);
          formula(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(66);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IntervalContext ------------------------------------------------------------------

MetricTemporalLogicParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::Comma() {
  return getToken(MetricTemporalLogicParser::Comma, 0);
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::LeftParenthesis() {
  return getToken(MetricTemporalLogicParser::LeftParenthesis, 0);
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::LeftBracket() {
  return getToken(MetricTemporalLogicParser::LeftBracket, 0);
}

std::vector<tree::TerminalNode *> MetricTemporalLogicParser::IntervalContext::Scalar() {
  return getTokens(MetricTemporalLogicParser::Scalar);
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::Scalar(size_t i) {
  return getToken(MetricTemporalLogicParser::Scalar, i);
}

std::vector<tree::TerminalNode *> MetricTemporalLogicParser::IntervalContext::Infinity() {
  return getTokens(MetricTemporalLogicParser::Infinity);
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::Infinity(size_t i) {
  return getToken(MetricTemporalLogicParser::Infinity, i);
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::RightParenthesis() {
  return getToken(MetricTemporalLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* MetricTemporalLogicParser::IntervalContext::RightBracket() {
  return getToken(MetricTemporalLogicParser::RightBracket, 0);
}


size_t MetricTemporalLogicParser::IntervalContext::getRuleIndex() const {
  return MetricTemporalLogicParser::RuleInterval;
}


std::any MetricTemporalLogicParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 4, MetricTemporalLogicParser::RuleInterval);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::LeftBracket

    || _la == MetricTemporalLogicParser::LeftParenthesis)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(68);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::Infinity

    || _la == MetricTemporalLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(69);
    match(MetricTemporalLogicParser::Comma);
    setState(70);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::Infinity

    || _la == MetricTemporalLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(71);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::RightBracket

    || _la == MetricTemporalLogicParser::RightParenthesis)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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

MetricTemporalLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MetricTemporalLogicParser::PropositionContext::Identifier() {
  return getToken(MetricTemporalLogicParser::Identifier, 0);
}


size_t MetricTemporalLogicParser::PropositionContext::getRuleIndex() const {
  return MetricTemporalLogicParser::RuleProposition;
}


std::any MetricTemporalLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

MetricTemporalLogicParser::PropositionContext* MetricTemporalLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 6, MetricTemporalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(MetricTemporalLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MetricTemporalLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MetricTemporalLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void MetricTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(metrictemporallogicparserParserOnceFlag, metrictemporallogicparserParserInitialize);
}
