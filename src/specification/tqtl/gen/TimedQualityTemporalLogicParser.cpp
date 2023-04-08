
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
      "", "", "", "", "", "'true'", "'false'", "','", "'{'", "'}'", "'['", 
      "']'", "'<'", "'>'", "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "ExistsQuantifier", "ForallQuantifier", "FreezeTime", "LessThanOrEqualTo", 
      "GreaterThanOrEqualTo", "EqualTo", "NotEqualTo", "EventuallyOperator", 
      "AlwaysOperator", "NextOperator", "UntilOperator", "ReleaseOperator", 
      "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "Comma", "LeftBrace", 
      "RightBrace", "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", 
      "LeftParenthesis", "RightParenthesis", "BlockComment", "LineComment", 
      "Infinity", "Scalar", "Integer", "DecimalInteger", "BinaryInteger", 
      "OctalInteger", "HexInteger", "Floating", "PointFloat", "ExponentFloat", 
      "Identifier", "Whitespace", "AdditionOperator", "SubtractionOperator", 
      "MultiplicationOperator", "DivisionOperator", "ModulusOperator"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,47,135,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,45,8,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,65,
  	8,1,10,1,12,1,68,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,3,2,84,8,2,1,3,1,3,1,3,1,3,3,3,90,8,3,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,106,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,123,8,7,10,7,12,7,126,9,7,1,8,1,
  	8,3,8,130,8,8,1,8,3,8,133,8,8,1,8,0,2,2,14,9,0,2,4,6,8,10,12,14,16,0,
  	1,2,0,4,7,25,26,151,0,18,1,0,0,0,2,44,1,0,0,0,4,83,1,0,0,0,6,89,1,0,0,
  	0,8,91,1,0,0,0,10,95,1,0,0,0,12,97,1,0,0,0,14,105,1,0,0,0,16,132,1,0,
  	0,0,18,19,3,2,1,0,19,20,5,0,0,1,20,1,1,0,0,0,21,22,6,1,-1,0,22,23,5,27,
  	0,0,23,24,3,2,1,0,24,25,5,28,0,0,25,45,1,0,0,0,26,45,5,18,0,0,27,45,5,
  	19,0,0,28,29,5,8,0,0,29,45,3,2,1,14,30,31,5,9,0,0,31,45,3,2,1,13,32,33,
  	5,10,0,0,33,45,3,2,1,12,34,35,3,4,2,0,35,36,3,2,1,9,36,45,1,0,0,0,37,
  	38,5,3,0,0,38,39,5,41,0,0,39,45,3,2,1,8,40,41,5,13,0,0,41,45,3,2,1,7,
  	42,45,3,8,4,0,43,45,3,12,6,0,44,21,1,0,0,0,44,26,1,0,0,0,44,27,1,0,0,
  	0,44,28,1,0,0,0,44,30,1,0,0,0,44,32,1,0,0,0,44,34,1,0,0,0,44,37,1,0,0,
  	0,44,40,1,0,0,0,44,42,1,0,0,0,44,43,1,0,0,0,45,66,1,0,0,0,46,47,10,11,
  	0,0,47,48,5,11,0,0,48,65,3,2,1,12,49,50,10,10,0,0,50,51,5,12,0,0,51,65,
  	3,2,1,11,52,53,10,6,0,0,53,54,5,14,0,0,54,65,3,2,1,7,55,56,10,5,0,0,56,
  	57,5,15,0,0,57,65,3,2,1,6,58,59,10,4,0,0,59,60,5,16,0,0,60,65,3,2,1,5,
  	61,62,10,3,0,0,62,63,5,17,0,0,63,65,3,2,1,4,64,46,1,0,0,0,64,49,1,0,0,
  	0,64,52,1,0,0,0,64,55,1,0,0,0,64,58,1,0,0,0,64,61,1,0,0,0,65,68,1,0,0,
  	0,66,64,1,0,0,0,66,67,1,0,0,0,67,3,1,0,0,0,68,66,1,0,0,0,69,70,5,1,0,
  	0,70,71,5,27,0,0,71,72,3,6,3,0,72,73,5,28,0,0,73,74,5,3,0,0,74,75,5,41,
  	0,0,75,84,1,0,0,0,76,77,5,2,0,0,77,78,5,27,0,0,78,79,3,6,3,0,79,80,5,
  	28,0,0,80,81,5,3,0,0,81,82,5,41,0,0,82,84,1,0,0,0,83,69,1,0,0,0,83,76,
  	1,0,0,0,84,5,1,0,0,0,85,86,5,41,0,0,86,87,5,20,0,0,87,90,3,6,3,0,88,90,
  	5,41,0,0,89,85,1,0,0,0,89,88,1,0,0,0,90,7,1,0,0,0,91,92,3,14,7,0,92,93,
  	3,10,5,0,93,94,3,14,7,0,94,9,1,0,0,0,95,96,7,0,0,0,96,11,1,0,0,0,97,98,
  	5,41,0,0,98,13,1,0,0,0,99,100,6,7,-1,0,100,101,5,27,0,0,101,102,3,14,
  	7,0,102,103,5,28,0,0,103,106,1,0,0,0,104,106,3,16,8,0,105,99,1,0,0,0,
  	105,104,1,0,0,0,106,124,1,0,0,0,107,108,10,5,0,0,108,109,5,45,0,0,109,
  	123,3,14,7,6,110,111,10,4,0,0,111,112,5,46,0,0,112,123,3,14,7,5,113,114,
  	10,3,0,0,114,115,5,47,0,0,115,123,3,14,7,4,116,117,10,2,0,0,117,118,5,
  	43,0,0,118,123,3,14,7,3,119,120,10,1,0,0,120,121,5,44,0,0,121,123,3,14,
  	7,2,122,107,1,0,0,0,122,110,1,0,0,0,122,113,1,0,0,0,122,116,1,0,0,0,122,
  	119,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,125,1,0,0,0,125,15,1,
  	0,0,0,126,124,1,0,0,0,127,133,5,41,0,0,128,130,5,44,0,0,129,128,1,0,0,
  	0,129,130,1,0,0,0,130,131,1,0,0,0,131,133,5,32,0,0,132,127,1,0,0,0,132,
  	129,1,0,0,0,133,17,1,0,0,0,10,44,64,66,83,89,105,122,124,129,132
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
    setState(44);
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
      formula(14);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(30);
      match(TimedQualityTemporalLogicParser::AlwaysOperator);
      setState(31);
      formula(13);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(TimedQualityTemporalLogicParser::NextOperator);
      setState(33);
      formula(12);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<TqtlObjectQualifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(34);
      objectQualifier();
      setState(35);
      formula(9);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<TptlFreezeTimeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(37);
      match(TimedQualityTemporalLogicParser::FreezeTime);
      setState(38);
      match(TimedQualityTemporalLogicParser::Identifier);
      setState(39);
      formula(8);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      match(TimedQualityTemporalLogicParser::NegationOperator);
      setState(41);
      formula(7);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<TptlTimeConstraintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(42);
      timeConstraint();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      proposition();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(66);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(64);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(46);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(47);
          match(TimedQualityTemporalLogicParser::UntilOperator);
          setState(48);
          formula(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(49);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(50);
          match(TimedQualityTemporalLogicParser::ReleaseOperator);
          setState(51);
          formula(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(52);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(53);
          match(TimedQualityTemporalLogicParser::ConjunctionOperator);
          setState(54);
          formula(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(55);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(56);
          match(TimedQualityTemporalLogicParser::DisjunctionOperator);
          setState(57);
          formula(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(58);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(59);
          match(TimedQualityTemporalLogicParser::ImplicationOperator);
          setState(60);
          formula(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(61);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(62);
          match(TimedQualityTemporalLogicParser::IffOperator);
          setState(63);
          formula(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(68);
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
    setState(83);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedQualityTemporalLogicParser::ExistsQuantifier: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::TqtlExistsQualifierContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(69);
        match(TimedQualityTemporalLogicParser::ExistsQuantifier);
        setState(70);
        match(TimedQualityTemporalLogicParser::LeftParenthesis);
        setState(71);
        argumentList();
        setState(72);
        match(TimedQualityTemporalLogicParser::RightParenthesis);
        setState(73);
        match(TimedQualityTemporalLogicParser::FreezeTime);
        setState(74);
        match(TimedQualityTemporalLogicParser::Identifier);
        break;
      }

      case TimedQualityTemporalLogicParser::ForallQuantifier: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::TqtlForallQualifierContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(76);
        match(TimedQualityTemporalLogicParser::ForallQuantifier);
        setState(77);
        match(TimedQualityTemporalLogicParser::LeftParenthesis);
        setState(78);
        argumentList();
        setState(79);
        match(TimedQualityTemporalLogicParser::RightParenthesis);
        setState(80);
        match(TimedQualityTemporalLogicParser::FreezeTime);
        setState(81);
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
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(85);
      match(TimedQualityTemporalLogicParser::Identifier);
      setState(86);
      match(TimedQualityTemporalLogicParser::Comma);
      setState(87);
      argumentList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(88);
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
    setState(91);
    expression(0);
    setState(92);
    relationalOperator();
    setState(93);
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
    setState(95);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100663536) != 0)) {
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
    setState(97);
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
//----------------- ArithmeticModulusContext ------------------------------------------------------------------

std::vector<TimedQualityTemporalLogicParser::ExpressionContext *> TimedQualityTemporalLogicParser::ArithmeticModulusContext::expression() {
  return getRuleContexts<TimedQualityTemporalLogicParser::ExpressionContext>();
}

TimedQualityTemporalLogicParser::ExpressionContext* TimedQualityTemporalLogicParser::ArithmeticModulusContext::expression(size_t i) {
  return getRuleContext<TimedQualityTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* TimedQualityTemporalLogicParser::ArithmeticModulusContext::ModulusOperator() {
  return getToken(TimedQualityTemporalLogicParser::ModulusOperator, 0);
}

TimedQualityTemporalLogicParser::ArithmeticModulusContext::ArithmeticModulusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any TimedQualityTemporalLogicParser::ArithmeticModulusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TimedQualityTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticModulus(this);
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
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedQualityTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ArithmeticParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(100);
        match(TimedQualityTemporalLogicParser::LeftParenthesis);
        setState(101);
        expression(0);
        setState(102);
        match(TimedQualityTemporalLogicParser::RightParenthesis);
        break;
      }

      case TimedQualityTemporalLogicParser::Scalar:
      case TimedQualityTemporalLogicParser::Identifier:
      case TimedQualityTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<ArithmeticTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(104);
        term();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(122);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(107);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(108);
          match(TimedQualityTemporalLogicParser::MultiplicationOperator);
          setState(109);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(110);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(111);
          match(TimedQualityTemporalLogicParser::DivisionOperator);
          setState(112);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticModulusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(113);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(114);
          match(TimedQualityTemporalLogicParser::ModulusOperator);
          setState(115);
          expression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(116);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(117);
          match(TimedQualityTemporalLogicParser::AdditionOperator);
          setState(118);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArithmeticMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(119);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(120);
          match(TimedQualityTemporalLogicParser::SubtractionOperator);
          setState(121);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(126);
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
    setState(132);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TimedQualityTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::ArithmeticVariableContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(127);
        match(TimedQualityTemporalLogicParser::Identifier);
        break;
      }

      case TimedQualityTemporalLogicParser::Scalar:
      case TimedQualityTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<TimedQualityTemporalLogicParser::ArithmeticConstantContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(129);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TimedQualityTemporalLogicParser::SubtractionOperator) {
          setState(128);
          match(TimedQualityTemporalLogicParser::SubtractionOperator);
        }
        setState(131);
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
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool TimedQualityTemporalLogicParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void TimedQualityTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(timedqualitytemporallogicparserParserOnceFlag, timedqualitytemporallogicparserParserInitialize);
}
