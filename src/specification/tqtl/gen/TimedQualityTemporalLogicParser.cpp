
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedQualityTemporalLogicParser.g4 by ANTLR 4.11.1


#include "TimedQualityTemporalLogicParserVisitor.h"

#include "TimedQualityTemporalLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct TimedQualityTemporalLogicParserStaticData final {
  TimedQualityTemporalLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TimedQualityTemporalLogicParserStaticData(const TimedQualityTemporalLogicParserStaticData&) = delete;
  TimedQualityTemporalLogicParserStaticData(TimedQualityTemporalLogicParserStaticData&&) = delete;
  TimedQualityTemporalLogicParserStaticData& operator=(const TimedQualityTemporalLogicParserStaticData&) = delete;
  TimedQualityTemporalLogicParserStaticData& operator=(TimedQualityTemporalLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag timedqualitytemporallogicparserParserOnceFlag;
TimedQualityTemporalLogicParserStaticData *timedqualitytemporallogicparserParserStaticData = nullptr;

void timedqualitytemporallogicparserParserInitialize() {
  assert(timedqualitytemporallogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<TimedQualityTemporalLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "objectQualifier", "argumentList", "timeConstraint", 
      "relationalOperator", "proposition", "expression", "term"
    },
    std::vector<std::string>{
      "", "", "", "", "'<='", "'>='", "'=='", "'!='", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "'true'", "'false'", "','", 
      "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "ExistsQuantifier", "ForallQuantifier", "FreezeTime", "LessThanOrEqualTo", 
      "GreaterThanOrEqualTo", "EqualTo", "NotEqualTo", "OnceOperator", "HistoricallyOperator", 
      "PreviousOperator", "SinceOperator", "TriggerOperator", "EventuallyOperator", 
      "AlwaysOperator", "NextOperator", "UntilOperator", "ReleaseOperator", 
      "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "Comma", "LeftBrace", 
      "RightBrace", "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", 
      "LeftParenthesis", "RightParenthesis", "BlockComment", "LineComment", 
      "Infinity", "Scalar", "Integer", "DecimalInteger", "BinaryInteger", 
      "OctalInteger", "HexInteger", "Floating", "PointFloat", "ExponentFloat", 
      "Identifier", "Whitespace", "AdditionOperator", "SubtractionOperator", 
      "MultiplicationOperator", "DivisionOperator", "ModuloOperator"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,52,147,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,3,1,51,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,77,8,1,10,1,12,1,80,9,1,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,96,8,2,1,3,
  	1,3,1,3,1,3,3,3,102,8,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,
  	7,1,7,1,7,3,7,118,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,5,7,135,8,7,10,7,12,7,138,9,7,1,8,1,8,3,8,142,8,8,1,8,3,8,
  	145,8,8,1,8,0,2,2,14,9,0,2,4,6,8,10,12,14,16,0,1,2,0,4,7,30,31,168,0,
  	18,1,0,0,0,2,50,1,0,0,0,4,95,1,0,0,0,6,101,1,0,0,0,8,103,1,0,0,0,10,107,
  	1,0,0,0,12,109,1,0,0,0,14,117,1,0,0,0,16,144,1,0,0,0,18,19,3,2,1,0,19,
  	20,5,0,0,1,20,1,1,0,0,0,21,22,6,1,-1,0,22,23,5,32,0,0,23,24,3,2,1,0,24,
  	25,5,33,0,0,25,51,1,0,0,0,26,51,5,23,0,0,27,51,5,24,0,0,28,29,5,13,0,
  	0,29,51,3,2,1,19,30,31,5,14,0,0,31,51,3,2,1,18,32,33,5,15,0,0,33,51,3,
  	2,1,17,34,35,5,8,0,0,35,51,3,2,1,14,36,37,5,9,0,0,37,51,3,2,1,13,38,39,
  	5,10,0,0,39,51,3,2,1,12,40,41,3,4,2,0,41,42,3,2,1,9,42,51,1,0,0,0,43,
  	44,5,3,0,0,44,45,5,46,0,0,45,51,3,2,1,8,46,47,5,18,0,0,47,51,3,2,1,7,
  	48,51,3,8,4,0,49,51,3,12,6,0,50,21,1,0,0,0,50,26,1,0,0,0,50,27,1,0,0,
  	0,50,28,1,0,0,0,50,30,1,0,0,0,50,32,1,0,0,0,50,34,1,0,0,0,50,36,1,0,0,
  	0,50,38,1,0,0,0,50,40,1,0,0,0,50,43,1,0,0,0,50,46,1,0,0,0,50,48,1,0,0,
  	0,50,49,1,0,0,0,51,78,1,0,0,0,52,53,10,16,0,0,53,54,5,16,0,0,54,77,3,
  	2,1,17,55,56,10,15,0,0,56,57,5,17,0,0,57,77,3,2,1,16,58,59,10,11,0,0,
  	59,60,5,11,0,0,60,77,3,2,1,12,61,62,10,10,0,0,62,63,5,12,0,0,63,77,3,
  	2,1,11,64,65,10,6,0,0,65,66,5,19,0,0,66,77,3,2,1,7,67,68,10,5,0,0,68,
  	69,5,20,0,0,69,77,3,2,1,6,70,71,10,4,0,0,71,72,5,21,0,0,72,77,3,2,1,5,
  	73,74,10,3,0,0,74,75,5,22,0,0,75,77,3,2,1,4,76,52,1,0,0,0,76,55,1,0,0,
  	0,76,58,1,0,0,0,76,61,1,0,0,0,76,64,1,0,0,0,76,67,1,0,0,0,76,70,1,0,0,
  	0,76,73,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,3,1,0,0,
  	0,80,78,1,0,0,0,81,82,5,1,0,0,82,83,5,32,0,0,83,84,3,6,3,0,84,85,5,33,
  	0,0,85,86,5,3,0,0,86,87,5,46,0,0,87,96,1,0,0,0,88,89,5,2,0,0,89,90,5,
  	32,0,0,90,91,3,6,3,0,91,92,5,33,0,0,92,93,5,3,0,0,93,94,5,46,0,0,94,96,
  	1,0,0,0,95,81,1,0,0,0,95,88,1,0,0,0,96,5,1,0,0,0,97,98,5,46,0,0,98,99,
  	5,25,0,0,99,102,3,6,3,0,100,102,5,46,0,0,101,97,1,0,0,0,101,100,1,0,0,
  	0,102,7,1,0,0,0,103,104,3,14,7,0,104,105,3,10,5,0,105,106,3,14,7,0,106,
  	9,1,0,0,0,107,108,7,0,0,0,108,11,1,0,0,0,109,110,5,46,0,0,110,13,1,0,
  	0,0,111,112,6,7,-1,0,112,113,5,32,0,0,113,114,3,14,7,0,114,115,5,33,0,
  	0,115,118,1,0,0,0,116,118,3,16,8,0,117,111,1,0,0,0,117,116,1,0,0,0,118,
  	136,1,0,0,0,119,120,10,5,0,0,120,121,5,50,0,0,121,135,3,14,7,6,122,123,
  	10,4,0,0,123,124,5,51,0,0,124,135,3,14,7,5,125,126,10,3,0,0,126,127,5,
  	52,0,0,127,135,3,14,7,4,128,129,10,2,0,0,129,130,5,48,0,0,130,135,3,14,
  	7,3,131,132,10,1,0,0,132,133,5,49,0,0,133,135,3,14,7,2,134,119,1,0,0,
  	0,134,122,1,0,0,0,134,125,1,0,0,0,134,128,1,0,0,0,134,131,1,0,0,0,135,
  	138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,15,1,0,0,0,138,136,1,
  	0,0,0,139,145,5,46,0,0,140,142,5,49,0,0,141,140,1,0,0,0,141,142,1,0,0,
  	0,142,143,1,0,0,0,143,145,5,37,0,0,144,139,1,0,0,0,144,141,1,0,0,0,145,
  	17,1,0,0,0,10,50,76,78,95,101,117,134,136,141,144
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  timedqualitytemporallogicparserParserStaticData = staticData.release();
}

}

TimedQualityTemporalLogicParser::TimedQualityTemporalLogicParser(TokenStream *input) : TimedQualityTemporalLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TimedQualityTemporalLogicParser::TimedQualityTemporalLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TimedQualityTemporalLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *timedqualitytemporallogicparserParserStaticData->atn, timedqualitytemporallogicparserParserStaticData->decisionToDFA, timedqualitytemporallogicparserParserStaticData->sharedContextCache, options);
}

TimedQualityTemporalLogicParser::~TimedQualityTemporalLogicParser() {
  delete _interpreter;
}

const atn::ATN& TimedQualityTemporalLogicParser::getATN() const {
  return *timedqualitytemporallogicparserParserStaticData->atn;
}

std::string TimedQualityTemporalLogicParser::getGrammarFileName() const {
  return "TimedQualityTemporalLogicParser.g4";
}

const std::vector<std::string>& TimedQualityTemporalLogicParser::getRuleNames() const {
  return timedqualitytemporallogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& TimedQualityTemporalLogicParser::getVocabulary() const {
  return timedqualitytemporallogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TimedQualityTemporalLogicParser::getSerializedATN() const {
  return timedqualitytemporallogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::StartContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::StartContext::EOF() {
  return getToken(TimedQualityTemporalLogicParser::EOF, 0);
}


size_t TimedQualityTemporalLogicParser::StartContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleStart;
}


std::any TimedQualityTemporalLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::StartContext* TimedQualityTemporalLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, TimedQualityTemporalLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    formula(0);
    setState(19);
    match(TimedQualityTemporalLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedQualityTemporalLogicParser::FormulaContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleFormula;
}

void TimedQualityTemporalLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::PlNegationContext::NegationOperator() {
  return getToken(TimedQualityTemporalLogicParser::NegationOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PlNegationContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::ParenthesesContext::LeftParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::LeftParenthesis, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::ParenthesesContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ParenthesesContext::RightParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::RightParenthesis, 0);
}

TimedQualityTemporalLogicParser::ParenthesesContext::ParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TqtlObjectQualifierContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::ObjectQualifierContext* TimedQualityTemporalLogicParser::TqtlObjectQualifierContext::objectQualifier() {
  return getRuleContext<TimedQualityTemporalLogicParser::ObjectQualifierContext>(0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::TqtlObjectQualifierContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::TqtlObjectQualifierContext::TqtlObjectQualifierContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::TqtlObjectQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTqtlObjectQualifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlOnceContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::PtltlOnceContext::OnceOperator() {
  return getToken(TimedQualityTemporalLogicParser::OnceOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PtltlOnceContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::PtltlOnceContext::PtltlOnceContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PtltlOnceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlOnce(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlUntilContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::LtlUntilContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::LtlUntilContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::LtlUntilContext::UntilOperator() {
  return getToken(TimedQualityTemporalLogicParser::UntilOperator, 0);
}

TimedQualityTemporalLogicParser::LtlUntilContext::LtlUntilContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::LtlUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(TimedQualityTemporalLogicParser::ImplicationOperator, 0);
}

TimedQualityTemporalLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(TimedQualityTemporalLogicParser::ConjunctionOperator, 0);
}

TimedQualityTemporalLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlFalseContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::PlFalseContext::False() {
  return getToken(TimedQualityTemporalLogicParser::False, 0);
}

TimedQualityTemporalLogicParser::PlFalseContext::PlFalseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlHistoricallyContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::PtltlHistoricallyContext::HistoricallyOperator() {
  return getToken(TimedQualityTemporalLogicParser::HistoricallyOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PtltlHistoricallyContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::PtltlHistoricallyContext::PtltlHistoricallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PtltlHistoricallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlHistorically(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::LtlAlwaysContext::AlwaysOperator() {
  return getToken(TimedQualityTemporalLogicParser::AlwaysOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::LtlAlwaysContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::LtlAlwaysContext::LtlAlwaysContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::LtlAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlTimeConstraintContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::TimeConstraintContext* TimedQualityTemporalLogicParser::TptlTimeConstraintContext::timeConstraint() {
  return getRuleContext<TimedQualityTemporalLogicParser::TimeConstraintContext>(0);
}

TimedQualityTemporalLogicParser::TptlTimeConstraintContext::TptlTimeConstraintContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::TptlTimeConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlTimeConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::PlIffContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PlIffContext::IffOperator() {
  return getToken(TimedQualityTemporalLogicParser::IffOperator, 0);
}

TimedQualityTemporalLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlTrueContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::PlTrueContext::True() {
  return getToken(TimedQualityTemporalLogicParser::True, 0);
}

TimedQualityTemporalLogicParser::PlTrueContext::PlTrueContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(TimedQualityTemporalLogicParser::DisjunctionOperator, 0);
}

TimedQualityTemporalLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlFreezeTimeContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::TptlFreezeTimeContext::FreezeTime() {
  return getToken(TimedQualityTemporalLogicParser::FreezeTime, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TptlFreezeTimeContext::Identifier() {
  return getToken(TimedQualityTemporalLogicParser::Identifier, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::TptlFreezeTimeContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::TptlFreezeTimeContext::TptlFreezeTimeContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::TptlFreezeTimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlFreezeTime(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlPropositionContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::PropositionContext* TimedQualityTemporalLogicParser::PlPropositionContext::proposition() {
  return getRuleContext<TimedQualityTemporalLogicParser::PropositionContext>(0);
}

TimedQualityTemporalLogicParser::PlPropositionContext::PlPropositionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PlPropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlProposition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlReleaseContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::LtlReleaseContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::LtlReleaseContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::LtlReleaseContext::ReleaseOperator() {
  return getToken(TimedQualityTemporalLogicParser::ReleaseOperator, 0);
}

TimedQualityTemporalLogicParser::LtlReleaseContext::LtlReleaseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::LtlReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlPreviousContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::PtltlPreviousContext::PreviousOperator() {
  return getToken(TimedQualityTemporalLogicParser::PreviousOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PtltlPreviousContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::PtltlPreviousContext::PtltlPreviousContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PtltlPreviousContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlPrevious(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlSinceContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::PtltlSinceContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PtltlSinceContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PtltlSinceContext::SinceOperator() {
  return getToken(TimedQualityTemporalLogicParser::SinceOperator, 0);
}

TimedQualityTemporalLogicParser::PtltlSinceContext::PtltlSinceContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PtltlSinceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlSince(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PtltlTriggerContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::FormulaContext *> TimedQualityTemporalLogicParser::PtltlTriggerContext::formula() {
  return getRuleContexts<TimedQualityTemporalLogicParser::FormulaContext>();
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::PtltlTriggerContext::formula(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PtltlTriggerContext::TriggerOperator() {
  return getToken(TimedQualityTemporalLogicParser::TriggerOperator, 0);
}

TimedQualityTemporalLogicParser::PtltlTriggerContext::PtltlTriggerContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::PtltlTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlTrigger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::LtlEventuallyContext::EventuallyOperator() {
  return getToken(TimedQualityTemporalLogicParser::EventuallyOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::LtlEventuallyContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::LtlEventuallyContext::LtlEventuallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::LtlEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlNextContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::LtlNextContext::NextOperator() {
  return getToken(TimedQualityTemporalLogicParser::NextOperator, 0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::LtlNextContext::formula() {
  return getRuleContext<TimedQualityTemporalLogicParser::FormulaContext>(0);
}

TimedQualityTemporalLogicParser::LtlNextContext::LtlNextContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::LtlNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlNext(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::formula() {
   return formula(0);
}

TimedQualityTemporalLogicParser::FormulaContext* TimedQualityTemporalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TimedQualityTemporalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  TimedQualityTemporalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, TimedQualityTemporalLogicParser::RuleFormula, precedence);

    

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
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(22);
      match(TimedQualityTemporalLogicParser::LeftParenthesis);
      setState(23);
      formula(0);
      setState(24);
      match(TimedQualityTemporalLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(26);
      match(TimedQualityTemporalLogicParser::True);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(27);
      match(TimedQualityTemporalLogicParser::False);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(28);
      match(TimedQualityTemporalLogicParser::EventuallyOperator);
      setState(29);
      formula(19);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(30);
      match(TimedQualityTemporalLogicParser::AlwaysOperator);
      setState(31);
      formula(18);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(TimedQualityTemporalLogicParser::NextOperator);
      setState(33);
      formula(17);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PtltlOnceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(34);
      match(TimedQualityTemporalLogicParser::OnceOperator);
      setState(35);
      formula(14);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PtltlHistoricallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      match(TimedQualityTemporalLogicParser::HistoricallyOperator);
      setState(37);
      formula(13);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PtltlPreviousContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(38);
      match(TimedQualityTemporalLogicParser::PreviousOperator);
      setState(39);
      formula(12);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<TqtlObjectQualifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      objectQualifier();
      setState(41);
      formula(9);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<TptlFreezeTimeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      match(TimedQualityTemporalLogicParser::FreezeTime);
      setState(44);
      match(TimedQualityTemporalLogicParser::Identifier);
      setState(45);
      formula(8);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(46);
      match(TimedQualityTemporalLogicParser::NegationOperator);
      setState(47);
      formula(7);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<TptlTimeConstraintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(48);
      timeConstraint();
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(49);
      proposition();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(78);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(76);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(52);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(53);
          match(TimedQualityTemporalLogicParser::UntilOperator);
          setState(54);
          formula(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(55);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(56);
          match(TimedQualityTemporalLogicParser::ReleaseOperator);
          setState(57);
          formula(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PtltlSinceContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(58);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(59);
          match(TimedQualityTemporalLogicParser::SinceOperator);
          setState(60);
          formula(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PtltlTriggerContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(61);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(62);
          match(TimedQualityTemporalLogicParser::TriggerOperator);
          setState(63);
          formula(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(64);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(65);
          match(TimedQualityTemporalLogicParser::ConjunctionOperator);
          setState(66);
          formula(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(67);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(68);
          match(TimedQualityTemporalLogicParser::DisjunctionOperator);
          setState(69);
          formula(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(70);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(71);
          match(TimedQualityTemporalLogicParser::ImplicationOperator);
          setState(72);
          formula(5);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(73);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(74);
          match(TimedQualityTemporalLogicParser::IffOperator);
          setState(75);
          formula(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(80);
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

//----------------- ObjectQualifierContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::ObjectQualifierContext::ObjectQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedQualityTemporalLogicParser::ObjectQualifierContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleObjectQualifier;
}

void TimedQualityTemporalLogicParser::ObjectQualifierContext::copyFrom(ObjectQualifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TqtlExistsQualifierContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::ExistsQuantifier() {
  return getToken(TimedQualityTemporalLogicParser::ExistsQuantifier, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::LeftParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::LeftParenthesis, 0);
}

TimedQualityTemporalLogicParser::ArgumentListContext* TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::argumentList() {
  return getRuleContext<TimedQualityTemporalLogicParser::ArgumentListContext>(0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::RightParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::FreezeTime() {
  return getToken(TimedQualityTemporalLogicParser::FreezeTime, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::Identifier() {
  return getToken(TimedQualityTemporalLogicParser::Identifier, 0);
}

TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::TqtlExistsQualifierContext(ObjectQualifierContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::TqtlExistsQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTqtlExistsQualifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TqtlForallQualifierContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlForallQualifierContext::ForallQuantifier() {
  return getToken(TimedQualityTemporalLogicParser::ForallQuantifier, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlForallQualifierContext::LeftParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::LeftParenthesis, 0);
}

TimedQualityTemporalLogicParser::ArgumentListContext* TimedQualityTemporalLogicParser::TqtlForallQualifierContext::argumentList() {
  return getRuleContext<TimedQualityTemporalLogicParser::ArgumentListContext>(0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlForallQualifierContext::RightParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlForallQualifierContext::FreezeTime() {
  return getToken(TimedQualityTemporalLogicParser::FreezeTime, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::TqtlForallQualifierContext::Identifier() {
  return getToken(TimedQualityTemporalLogicParser::Identifier, 0);
}

TimedQualityTemporalLogicParser::TqtlForallQualifierContext::TqtlForallQualifierContext(ObjectQualifierContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::TqtlForallQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTqtlForallQualifier(this);
  else
    return visitor->visitChildren(this);
}
TimedQualityTemporalLogicParser::ObjectQualifierContext* TimedQualityTemporalLogicParser::objectQualifier() {
  ObjectQualifierContext *_localctx = _tracker.createInstance<ObjectQualifierContext>(_ctx, getState());
  enterRule(_localctx, 4, TimedQualityTemporalLogicParser::RuleObjectQualifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedQualityTemporalLogicParser::ExistsQuantifier: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::TqtlExistsQualifierContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(81);
        match(TimedQualityTemporalLogicParser::ExistsQuantifier);
        setState(82);
        match(TimedQualityTemporalLogicParser::LeftParenthesis);
        setState(83);
        argumentList();
        setState(84);
        match(TimedQualityTemporalLogicParser::RightParenthesis);
        setState(85);
        match(TimedQualityTemporalLogicParser::FreezeTime);
        setState(86);
        match(TimedQualityTemporalLogicParser::Identifier);
        break;
      }

      case TimedQualityTemporalLogicParser::ForallQuantifier: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::TqtlForallQualifierContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(88);
        match(TimedQualityTemporalLogicParser::ForallQuantifier);
        setState(89);
        match(TimedQualityTemporalLogicParser::LeftParenthesis);
        setState(90);
        argumentList();
        setState(91);
        match(TimedQualityTemporalLogicParser::RightParenthesis);
        setState(92);
        match(TimedQualityTemporalLogicParser::FreezeTime);
        setState(93);
        match(TimedQualityTemporalLogicParser::Identifier);
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

//----------------- ArgumentListContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArgumentListContext::Identifier() {
  return getToken(TimedQualityTemporalLogicParser::Identifier, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArgumentListContext::Comma() {
  return getToken(TimedQualityTemporalLogicParser::Comma, 0);
}

TimedQualityTemporalLogicParser::ArgumentListContext* TimedQualityTemporalLogicParser::ArgumentListContext::argumentList() {
  return getRuleContext<TimedQualityTemporalLogicParser::ArgumentListContext>(0);
}


size_t TimedQualityTemporalLogicParser::ArgumentListContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleArgumentList;
}


std::any TimedQualityTemporalLogicParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::ArgumentListContext* TimedQualityTemporalLogicParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 6, TimedQualityTemporalLogicParser::RuleArgumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(97);
      match(TimedQualityTemporalLogicParser::Identifier);
      setState(98);
      match(TimedQualityTemporalLogicParser::Comma);
      setState(99);
      argumentList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      match(TimedQualityTemporalLogicParser::Identifier);
      break;
    }

    default:
      break;
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

TimedQualityTemporalLogicParser::TimeConstraintContext::TimeConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::TimeConstraintContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::TimeConstraintContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

TimedQualityTemporalLogicParser::RelationalOperatorContext* TimedQualityTemporalLogicParser::TimeConstraintContext::relationalOperator() {
  return getRuleContext<TimedQualityTemporalLogicParser::RelationalOperatorContext>(0);
}


size_t TimedQualityTemporalLogicParser::TimeConstraintContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleTimeConstraint;
}


std::any TimedQualityTemporalLogicParser::TimeConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitTimeConstraint(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::TimeConstraintContext* TimedQualityTemporalLogicParser::timeConstraint() {
  TimeConstraintContext *_localctx = _tracker.createInstance<TimeConstraintContext>(_ctx, getState());
  enterRule(_localctx, 8, TimedQualityTemporalLogicParser::RuleTimeConstraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    expression(0);
    setState(104);
    relationalOperator();
    setState(105);
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

TimedQualityTemporalLogicParser::RelationalOperatorContext::RelationalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TimedQualityTemporalLogicParser::RelationalOperatorContext::LessThanOrEqualTo() {
  return getToken(TimedQualityTemporalLogicParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::RelationalOperatorContext::GreaterThanOrEqualTo() {
  return getToken(TimedQualityTemporalLogicParser::GreaterThanOrEqualTo, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::RelationalOperatorContext::LeftChevron() {
  return getToken(TimedQualityTemporalLogicParser::LeftChevron, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::RelationalOperatorContext::RightChevron() {
  return getToken(TimedQualityTemporalLogicParser::RightChevron, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::RelationalOperatorContext::EqualTo() {
  return getToken(TimedQualityTemporalLogicParser::EqualTo, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::RelationalOperatorContext::NotEqualTo() {
  return getToken(TimedQualityTemporalLogicParser::NotEqualTo, 0);
}


size_t TimedQualityTemporalLogicParser::RelationalOperatorContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleRelationalOperator;
}


std::any TimedQualityTemporalLogicParser::RelationalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitRelationalOperator(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::RelationalOperatorContext* TimedQualityTemporalLogicParser::relationalOperator() {
  RelationalOperatorContext *_localctx = _tracker.createInstance<RelationalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, TimedQualityTemporalLogicParser::RuleRelationalOperator);
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
    setState(107);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221225712) != 0)) {
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

TimedQualityTemporalLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TimedQualityTemporalLogicParser::PropositionContext::Identifier() {
  return getToken(TimedQualityTemporalLogicParser::Identifier, 0);
}


size_t TimedQualityTemporalLogicParser::PropositionContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleProposition;
}


std::any TimedQualityTemporalLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::PropositionContext* TimedQualityTemporalLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 12, TimedQualityTemporalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(TimedQualityTemporalLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedQualityTemporalLogicParser::ExpressionContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleExpression;
}

void TimedQualityTemporalLogicParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticMinusContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::ArithmeticMinusContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticMinusContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticMinusContext::SubtractionOperator() {
  return getToken(TimedQualityTemporalLogicParser::SubtractionOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticMinusContext::ArithmeticMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTimesContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::ArithmeticTimesContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticTimesContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticTimesContext::MultiplicationOperator() {
  return getToken(TimedQualityTemporalLogicParser::MultiplicationOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticTimesContext::ArithmeticTimesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticParenthesesContext::LeftParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::LeftParenthesis, 0);
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticParenthesesContext::expression() {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticParenthesesContext::RightParenthesis() {
  return getToken(TimedQualityTemporalLogicParser::RightParenthesis, 0);
}

TimedQualityTemporalLogicParser::ArithmeticParenthesesContext::ArithmeticParenthesesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticDivideContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::ArithmeticDivideContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticDivideContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticDivideContext::DivisionOperator() {
  return getToken(TimedQualityTemporalLogicParser::DivisionOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticDivideContext::ArithmeticDivideContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTermContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::TermContext* TimedQualityTemporalLogicParser::ArithmeticTermContext::term() {
  return getRuleContext<TimedQualityTemporalLogicParser::TermContext>(0);
}

TimedQualityTemporalLogicParser::ArithmeticTermContext::ArithmeticTermContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticPlusContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::ArithmeticPlusContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticPlusContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticPlusContext::AdditionOperator() {
  return getToken(TimedQualityTemporalLogicParser::AdditionOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticPlusContext::ArithmeticPlusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticModuloContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::ArithmeticModuloContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticModuloContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticModuloContext::ModuloOperator() {
  return getToken(TimedQualityTemporalLogicParser::ModuloOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticModuloContext::ArithmeticModuloContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticModuloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticModulo(this);
  else
    return visitor->visitChildren(this);
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::expression() {
   return expression(0);
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TimedQualityTemporalLogicParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  TimedQualityTemporalLogicParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, TimedQualityTemporalLogicParser::RuleExpression, precedence);

    

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
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedQualityTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ArithmeticParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(112);
        match(TimedQualityTemporalLogicParser::LeftParenthesis);
        setState(113);
        expression(0);
        setState(114);
        match(TimedQualityTemporalLogicParser::RightParenthesis);
        break;
      }

      case TimedQualityTemporalLogicParser::Scalar:
      case TimedQualityTemporalLogicParser::Identifier:
      case TimedQualityTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<ArithmeticTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(116);
        term();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(136);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(134);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(119);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(120);
          match(TimedQualityTemporalLogicParser::MultiplicationOperator);
          setState(121);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(122);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(123);
          match(TimedQualityTemporalLogicParser::DivisionOperator);
          setState(124);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticModuloContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(125);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(126);
          match(TimedQualityTemporalLogicParser::ModuloOperator);
          setState(127);
          expression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(128);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(129);
          match(TimedQualityTemporalLogicParser::AdditionOperator);
          setState(130);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArithmeticMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(131);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(132);
          match(TimedQualityTemporalLogicParser::SubtractionOperator);
          setState(133);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(138);
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

//----------------- TermContext ------------------------------------------------------------------

TimedQualityTemporalLogicParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TimedQualityTemporalLogicParser::TermContext::getRuleIndex() const {
  return TimedQualityTemporalLogicParser::RuleTerm;
}

void TimedQualityTemporalLogicParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticConstantContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticConstantContext::Scalar() {
  return getToken(TimedQualityTemporalLogicParser::Scalar, 0);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticConstantContext::SubtractionOperator() {
  return getToken(TimedQualityTemporalLogicParser::SubtractionOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticConstantContext::ArithmeticConstantContext(TermContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticVariableContext ------------------------------------------------------------------

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticVariableContext::Identifier() {
  return getToken(TimedQualityTemporalLogicParser::Identifier, 0);
}

TimedQualityTemporalLogicParser::ArithmeticVariableContext::ArithmeticVariableContext(TermContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticVariable(this);
  else
    return visitor->visitChildren(this);
}
TimedQualityTemporalLogicParser::TermContext* TimedQualityTemporalLogicParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 16, TimedQualityTemporalLogicParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedQualityTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::ArithmeticVariableContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(139);
        match(TimedQualityTemporalLogicParser::Identifier);
        break;
      }

      case TimedQualityTemporalLogicParser::Scalar:
      case TimedQualityTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::ArithmeticConstantContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(141);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TimedQualityTemporalLogicParser::SubtractionOperator) {
          setState(140);
          match(TimedQualityTemporalLogicParser::SubtractionOperator);
        }
        setState(143);
        match(TimedQualityTemporalLogicParser::Scalar);
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

bool TimedQualityTemporalLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);
    case 7: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TimedQualityTemporalLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);
    case 6: return precpred(_ctx, 4);
    case 7: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool TimedQualityTemporalLogicParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 5);
    case 9: return precpred(_ctx, 4);
    case 10: return precpred(_ctx, 3);
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void TimedQualityTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(timedqualitytemporallogicparserParserOnceFlag, timedqualitytemporallogicparserParserInitialize);
}
