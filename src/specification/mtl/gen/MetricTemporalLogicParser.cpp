
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
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'true'", 
      "'false'", "','", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", 
      "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "OnceOperator", "HistoricallyOperator", "PreviousOperator", "SinceOperator", 
      "TriggerOperator", "EventuallyOperator", "AlwaysOperator", "NextOperator", 
      "UntilOperator", "ReleaseOperator", "NegationOperator", "ConjunctionOperator", 
      "DisjunctionOperator", "ImplicationOperator", "IffOperator", "True", 
      "False", "Comma", "LeftBrace", "RightBrace", "LeftBracket", "RightBracket", 
      "LeftChevron", "RightChevron", "LeftParenthesis", "RightParenthesis", 
      "BlockComment", "LineComment", "Infinity", "Scalar", "Integer", "DecimalInteger", 
      "BinaryInteger", "OctalInteger", "HexInteger", "Floating", "PointFloat", 
      "ExponentFloat", "Identifier", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,40,103,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,3,1,21,8,1,1,1,1,1,1,1,3,1,26,8,1,1,1,1,1,1,1,3,
  	1,31,8,1,1,1,1,1,1,1,3,1,36,8,1,1,1,1,1,1,1,3,1,41,8,1,1,1,1,1,1,1,3,
  	1,46,8,1,1,1,1,1,1,1,1,1,3,1,52,8,1,1,1,1,1,1,1,3,1,57,8,1,1,1,1,1,1,
  	1,1,1,3,1,63,8,1,1,1,1,1,1,1,1,1,3,1,69,8,1,1,1,1,1,1,1,1,1,3,1,75,8,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,90,8,1,10,1,
  	12,1,93,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,0,1,2,4,0,2,4,6,0,3,2,
  	0,21,21,25,25,1,0,29,30,2,0,22,22,26,26,126,0,8,1,0,0,0,2,51,1,0,0,0,
  	4,94,1,0,0,0,6,100,1,0,0,0,8,9,3,2,1,0,9,10,5,0,0,1,10,1,1,0,0,0,11,12,
  	6,1,-1,0,12,13,5,25,0,0,13,14,3,2,1,0,14,15,5,26,0,0,15,52,1,0,0,0,16,
  	52,5,16,0,0,17,52,5,17,0,0,18,20,5,6,0,0,19,21,3,4,2,0,20,19,1,0,0,0,
  	20,21,1,0,0,0,21,22,1,0,0,0,22,52,3,2,1,16,23,25,5,7,0,0,24,26,3,4,2,
  	0,25,24,1,0,0,0,25,26,1,0,0,0,26,27,1,0,0,0,27,52,3,2,1,15,28,30,5,8,
  	0,0,29,31,3,4,2,0,30,29,1,0,0,0,30,31,1,0,0,0,31,32,1,0,0,0,32,52,3,2,
  	1,14,33,35,5,1,0,0,34,36,3,4,2,0,35,34,1,0,0,0,35,36,1,0,0,0,36,37,1,
  	0,0,0,37,52,3,2,1,11,38,40,5,2,0,0,39,41,3,4,2,0,40,39,1,0,0,0,40,41,
  	1,0,0,0,41,42,1,0,0,0,42,52,3,2,1,10,43,45,5,3,0,0,44,46,3,4,2,0,45,44,
  	1,0,0,0,45,46,1,0,0,0,46,47,1,0,0,0,47,52,3,2,1,9,48,49,5,11,0,0,49,52,
  	3,2,1,6,50,52,3,6,3,0,51,11,1,0,0,0,51,16,1,0,0,0,51,17,1,0,0,0,51,18,
  	1,0,0,0,51,23,1,0,0,0,51,28,1,0,0,0,51,33,1,0,0,0,51,38,1,0,0,0,51,43,
  	1,0,0,0,51,48,1,0,0,0,51,50,1,0,0,0,52,91,1,0,0,0,53,54,10,13,0,0,54,
  	56,5,9,0,0,55,57,3,4,2,0,56,55,1,0,0,0,56,57,1,0,0,0,57,58,1,0,0,0,58,
  	90,3,2,1,14,59,60,10,12,0,0,60,62,5,10,0,0,61,63,3,4,2,0,62,61,1,0,0,
  	0,62,63,1,0,0,0,63,64,1,0,0,0,64,90,3,2,1,13,65,66,10,8,0,0,66,68,5,4,
  	0,0,67,69,3,4,2,0,68,67,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,90,3,2,
  	1,9,71,72,10,7,0,0,72,74,5,5,0,0,73,75,3,4,2,0,74,73,1,0,0,0,74,75,1,
  	0,0,0,75,76,1,0,0,0,76,90,3,2,1,8,77,78,10,5,0,0,78,79,5,12,0,0,79,90,
  	3,2,1,6,80,81,10,4,0,0,81,82,5,13,0,0,82,90,3,2,1,5,83,84,10,3,0,0,84,
  	85,5,14,0,0,85,90,3,2,1,4,86,87,10,2,0,0,87,88,5,15,0,0,88,90,3,2,1,3,
  	89,53,1,0,0,0,89,59,1,0,0,0,89,65,1,0,0,0,89,71,1,0,0,0,89,77,1,0,0,0,
  	89,80,1,0,0,0,89,83,1,0,0,0,89,86,1,0,0,0,90,93,1,0,0,0,91,89,1,0,0,0,
  	91,92,1,0,0,0,92,3,1,0,0,0,93,91,1,0,0,0,94,95,7,0,0,0,95,96,7,1,0,0,
  	96,97,5,18,0,0,97,98,7,1,0,0,98,99,7,2,0,0,99,5,1,0,0,0,100,101,5,39,
  	0,0,101,7,1,0,0,0,13,20,25,30,35,40,45,51,56,62,68,74,89,91
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
//----------------- PtltlOnceContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::PtltlOnceContext::OnceOperator() {
  return getToken(MetricTemporalLogicParser::OnceOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PtltlOnceContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::PtltlOnceContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::PtltlOnceContext::PtltlOnceContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PtltlOnceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlOnce(this);
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
//----------------- PtltlHistoricallyContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::PtltlHistoricallyContext::HistoricallyOperator() {
  return getToken(MetricTemporalLogicParser::HistoricallyOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PtltlHistoricallyContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::PtltlHistoricallyContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::PtltlHistoricallyContext::PtltlHistoricallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PtltlHistoricallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlHistorically(this);
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
//----------------- PtltlPreviousContext ------------------------------------------------------------------

tree::TerminalNode* MetricTemporalLogicParser::PtltlPreviousContext::PreviousOperator() {
  return getToken(MetricTemporalLogicParser::PreviousOperator, 0);
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PtltlPreviousContext::formula() {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::PtltlPreviousContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::PtltlPreviousContext::PtltlPreviousContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PtltlPreviousContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlPrevious(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlSinceContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::PtltlSinceContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PtltlSinceContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::PtltlSinceContext::SinceOperator() {
  return getToken(MetricTemporalLogicParser::SinceOperator, 0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::PtltlSinceContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::PtltlSinceContext::PtltlSinceContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PtltlSinceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlSince(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlTriggerContext ------------------------------------------------------------------

std::vector<MetricTemporalLogicParser::FormulaContext *> MetricTemporalLogicParser::PtltlTriggerContext::formula() {
  return getRuleContexts<MetricTemporalLogicParser::FormulaContext>();
}

MetricTemporalLogicParser::FormulaContext* MetricTemporalLogicParser::PtltlTriggerContext::formula(size_t i) {
  return getRuleContext<MetricTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* MetricTemporalLogicParser::PtltlTriggerContext::TriggerOperator() {
  return getToken(MetricTemporalLogicParser::TriggerOperator, 0);
}

MetricTemporalLogicParser::IntervalContext* MetricTemporalLogicParser::PtltlTriggerContext::interval() {
  return getRuleContext<MetricTemporalLogicParser::IntervalContext>(0);
}

MetricTemporalLogicParser::PtltlTriggerContext::PtltlTriggerContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MetricTemporalLogicParser::PtltlTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MetricTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlTrigger(this);
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
    setState(51);
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
        formula(16);
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
        formula(15);
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
        formula(14);
        break;
      }

      case MetricTemporalLogicParser::OnceOperator: {
        _localctx = _tracker.createInstance<PtltlOnceContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(33);
        match(MetricTemporalLogicParser::OnceOperator);
        setState(35);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(34);
          interval();
          break;
        }

        default:
          break;
        }
        setState(37);
        formula(11);
        break;
      }

      case MetricTemporalLogicParser::HistoricallyOperator: {
        _localctx = _tracker.createInstance<PtltlHistoricallyContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(38);
        match(MetricTemporalLogicParser::HistoricallyOperator);
        setState(40);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(39);
          interval();
          break;
        }

        default:
          break;
        }
        setState(42);
        formula(10);
        break;
      }

      case MetricTemporalLogicParser::PreviousOperator: {
        _localctx = _tracker.createInstance<PtltlPreviousContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(43);
        match(MetricTemporalLogicParser::PreviousOperator);
        setState(45);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(44);
          interval();
          break;
        }

        default:
          break;
        }
        setState(47);
        formula(9);
        break;
      }

      case MetricTemporalLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(48);
        match(MetricTemporalLogicParser::NegationOperator);
        setState(49);
        formula(6);
        break;
      }

      case MetricTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(50);
        proposition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(91);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(89);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(53);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(54);
          match(MetricTemporalLogicParser::UntilOperator);
          setState(56);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
          case 1: {
            setState(55);
            interval();
            break;
          }

          default:
            break;
          }
          setState(58);
          formula(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(59);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(60);
          match(MetricTemporalLogicParser::ReleaseOperator);
          setState(62);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
          case 1: {
            setState(61);
            interval();
            break;
          }

          default:
            break;
          }
          setState(64);
          formula(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PtltlSinceContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(65);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(66);
          match(MetricTemporalLogicParser::SinceOperator);
          setState(68);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
          case 1: {
            setState(67);
            interval();
            break;
          }

          default:
            break;
          }
          setState(70);
          formula(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PtltlTriggerContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(71);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(72);
          match(MetricTemporalLogicParser::TriggerOperator);
          setState(74);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
          case 1: {
            setState(73);
            interval();
            break;
          }

          default:
            break;
          }
          setState(76);
          formula(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(77);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(78);
          match(MetricTemporalLogicParser::ConjunctionOperator);
          setState(79);
          formula(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(80);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(81);
          match(MetricTemporalLogicParser::DisjunctionOperator);
          setState(82);
          formula(5);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(83);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(84);
          match(MetricTemporalLogicParser::ImplicationOperator);
          setState(85);
          formula(4);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(86);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(87);
          match(MetricTemporalLogicParser::IffOperator);
          setState(88);
          formula(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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
    setState(94);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::LeftBracket

    || _la == MetricTemporalLogicParser::LeftParenthesis)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(95);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::Infinity

    || _la == MetricTemporalLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(96);
    match(MetricTemporalLogicParser::Comma);
    setState(97);
    _la = _input->LA(1);
    if (!(_la == MetricTemporalLogicParser::Infinity

    || _la == MetricTemporalLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(98);
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
    setState(100);
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
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void MetricTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(metrictemporallogicparserParserOnceFlag, metrictemporallogicparserParserInitialize);
}
