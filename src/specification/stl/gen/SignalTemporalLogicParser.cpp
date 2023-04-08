
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SignalTemporalLogicParser.g4 by ANTLR 4.11.1


#include "SignalTemporalLogicParserVisitor.h"

#include "SignalTemporalLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct SignalTemporalLogicParserStaticData final {
  SignalTemporalLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SignalTemporalLogicParserStaticData(const SignalTemporalLogicParserStaticData&) = delete;
  SignalTemporalLogicParserStaticData(SignalTemporalLogicParserStaticData&&) = delete;
  SignalTemporalLogicParserStaticData& operator=(const SignalTemporalLogicParserStaticData&) = delete;
  SignalTemporalLogicParserStaticData& operator=(SignalTemporalLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag signaltemporallogicparserParserOnceFlag;
SignalTemporalLogicParserStaticData *signaltemporallogicparserParserStaticData = nullptr;

void signaltemporallogicparserParserInitialize() {
  assert(signaltemporallogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<SignalTemporalLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "predicate", "relationalOperator", "interval", 
      "proposition", "expression", "term"
    },
    std::vector<std::string>{
      "", "'<='", "'>='", "'=='", "'!='", "", "", "", "", "", "", "", "", 
      "", "", "'true'", "'false'", "','", "'{'", "'}'", "'['", "']'", "'<'", 
      "'>'", "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "LessThanOrEqualTo", "GreaterThanOrEqualTo", "EqualTo", "NotEqualTo", 
      "EventuallyOperator", "AlwaysOperator", "NextOperator", "UntilOperator", 
      "ReleaseOperator", "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
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
  	4,1,44,126,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,29,8,1,1,1,
  	1,1,1,1,3,1,34,8,1,1,1,1,1,1,1,3,1,39,8,1,1,1,1,1,1,1,1,1,1,1,3,1,46,
  	8,1,1,1,1,1,1,1,3,1,51,8,1,1,1,1,1,1,1,1,1,3,1,57,8,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,72,8,1,10,1,12,1,75,9,1,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,3,6,97,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,5,6,114,8,6,10,6,12,6,117,9,6,1,7,1,7,3,7,121,8,7,1,7,3,7,124,8,
  	7,1,7,0,2,2,12,8,0,2,4,6,8,10,12,14,0,4,2,0,1,4,22,23,2,0,20,20,24,24,
  	1,0,28,29,2,0,21,21,25,25,144,0,16,1,0,0,0,2,45,1,0,0,0,4,76,1,0,0,0,
  	6,80,1,0,0,0,8,82,1,0,0,0,10,88,1,0,0,0,12,96,1,0,0,0,14,123,1,0,0,0,
  	16,17,3,2,1,0,17,18,5,0,0,1,18,1,1,0,0,0,19,20,6,1,-1,0,20,21,5,24,0,
  	0,21,22,3,2,1,0,22,23,5,25,0,0,23,46,1,0,0,0,24,46,5,15,0,0,25,46,5,16,
  	0,0,26,28,5,5,0,0,27,29,3,8,4,0,28,27,1,0,0,0,28,29,1,0,0,0,29,30,1,0,
  	0,0,30,46,3,2,1,12,31,33,5,6,0,0,32,34,3,8,4,0,33,32,1,0,0,0,33,34,1,
  	0,0,0,34,35,1,0,0,0,35,46,3,2,1,11,36,38,5,7,0,0,37,39,3,8,4,0,38,37,
  	1,0,0,0,38,39,1,0,0,0,39,40,1,0,0,0,40,46,3,2,1,10,41,42,5,10,0,0,42,
  	46,3,2,1,7,43,46,3,4,2,0,44,46,3,10,5,0,45,19,1,0,0,0,45,24,1,0,0,0,45,
  	25,1,0,0,0,45,26,1,0,0,0,45,31,1,0,0,0,45,36,1,0,0,0,45,41,1,0,0,0,45,
  	43,1,0,0,0,45,44,1,0,0,0,46,73,1,0,0,0,47,48,10,9,0,0,48,50,5,8,0,0,49,
  	51,3,8,4,0,50,49,1,0,0,0,50,51,1,0,0,0,51,52,1,0,0,0,52,72,3,2,1,10,53,
  	54,10,8,0,0,54,56,5,9,0,0,55,57,3,8,4,0,56,55,1,0,0,0,56,57,1,0,0,0,57,
  	58,1,0,0,0,58,72,3,2,1,9,59,60,10,6,0,0,60,61,5,11,0,0,61,72,3,2,1,7,
  	62,63,10,5,0,0,63,64,5,12,0,0,64,72,3,2,1,6,65,66,10,4,0,0,66,67,5,13,
  	0,0,67,72,3,2,1,5,68,69,10,3,0,0,69,70,5,14,0,0,70,72,3,2,1,4,71,47,1,
  	0,0,0,71,53,1,0,0,0,71,59,1,0,0,0,71,62,1,0,0,0,71,65,1,0,0,0,71,68,1,
  	0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,3,1,0,0,0,75,73,1,
  	0,0,0,76,77,3,12,6,0,77,78,3,6,3,0,78,79,3,12,6,0,79,5,1,0,0,0,80,81,
  	7,0,0,0,81,7,1,0,0,0,82,83,7,1,0,0,83,84,7,2,0,0,84,85,5,17,0,0,85,86,
  	7,2,0,0,86,87,7,3,0,0,87,9,1,0,0,0,88,89,5,38,0,0,89,11,1,0,0,0,90,91,
  	6,6,-1,0,91,92,5,24,0,0,92,93,3,12,6,0,93,94,5,25,0,0,94,97,1,0,0,0,95,
  	97,3,14,7,0,96,90,1,0,0,0,96,95,1,0,0,0,97,115,1,0,0,0,98,99,10,5,0,0,
  	99,100,5,42,0,0,100,114,3,12,6,6,101,102,10,4,0,0,102,103,5,43,0,0,103,
  	114,3,12,6,5,104,105,10,3,0,0,105,106,5,44,0,0,106,114,3,12,6,4,107,108,
  	10,2,0,0,108,109,5,40,0,0,109,114,3,12,6,3,110,111,10,1,0,0,111,112,5,
  	41,0,0,112,114,3,12,6,2,113,98,1,0,0,0,113,101,1,0,0,0,113,104,1,0,0,
  	0,113,107,1,0,0,0,113,110,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,
  	116,1,0,0,0,116,13,1,0,0,0,117,115,1,0,0,0,118,124,5,38,0,0,119,121,5,
  	41,0,0,120,119,1,0,0,0,120,121,1,0,0,0,121,122,1,0,0,0,122,124,5,29,0,
  	0,123,118,1,0,0,0,123,120,1,0,0,0,124,15,1,0,0,0,13,28,33,38,45,50,56,
  	71,73,96,113,115,120,123
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  signaltemporallogicparserParserStaticData = staticData.release();
}

}

SignalTemporalLogicParser::SignalTemporalLogicParser(TokenStream *input) : SignalTemporalLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SignalTemporalLogicParser::SignalTemporalLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SignalTemporalLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *signaltemporallogicparserParserStaticData->atn, signaltemporallogicparserParserStaticData->decisionToDFA, signaltemporallogicparserParserStaticData->sharedContextCache, options);
}

SignalTemporalLogicParser::~SignalTemporalLogicParser() {
  delete _interpreter;
}

const atn::ATN& SignalTemporalLogicParser::getATN() const {
  return *signaltemporallogicparserParserStaticData->atn;
}

std::string SignalTemporalLogicParser::getGrammarFileName() const {
  return "SignalTemporalLogicParser.g4";
}

const std::vector<std::string>& SignalTemporalLogicParser::getRuleNames() const {
  return signaltemporallogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SignalTemporalLogicParser::getVocabulary() const {
  return signaltemporallogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SignalTemporalLogicParser::getSerializedATN() const {
  return signaltemporallogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

SignalTemporalLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::StartContext::formula() {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* SignalTemporalLogicParser::StartContext::EOF() {
  return getToken(SignalTemporalLogicParser::EOF, 0);
}


size_t SignalTemporalLogicParser::StartContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleStart;
}


std::any SignalTemporalLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::StartContext* SignalTemporalLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, SignalTemporalLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    formula(0);
    setState(17);
    match(SignalTemporalLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

SignalTemporalLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SignalTemporalLogicParser::FormulaContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleFormula;
}

void SignalTemporalLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::PlNegationContext::NegationOperator() {
  return getToken(SignalTemporalLogicParser::NegationOperator, 0);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::PlNegationContext::formula() {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(0);
}

SignalTemporalLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::ParenthesesContext::LeftParenthesis() {
  return getToken(SignalTemporalLogicParser::LeftParenthesis, 0);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::ParenthesesContext::formula() {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* SignalTemporalLogicParser::ParenthesesContext::RightParenthesis() {
  return getToken(SignalTemporalLogicParser::RightParenthesis, 0);
}

SignalTemporalLogicParser::ParenthesesContext::ParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlUntilContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::FormulaContext *> SignalTemporalLogicParser::LtlUntilContext::formula() {
  return getRuleContexts<SignalTemporalLogicParser::FormulaContext>();
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::LtlUntilContext::formula(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::LtlUntilContext::UntilOperator() {
  return getToken(SignalTemporalLogicParser::UntilOperator, 0);
}

SignalTemporalLogicParser::IntervalContext* SignalTemporalLogicParser::LtlUntilContext::interval() {
  return getRuleContext<SignalTemporalLogicParser::IntervalContext>(0);
}

SignalTemporalLogicParser::LtlUntilContext::LtlUntilContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::LtlUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::FormulaContext *> SignalTemporalLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<SignalTemporalLogicParser::FormulaContext>();
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(SignalTemporalLogicParser::ImplicationOperator, 0);
}

SignalTemporalLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::FormulaContext *> SignalTemporalLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<SignalTemporalLogicParser::FormulaContext>();
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(SignalTemporalLogicParser::ConjunctionOperator, 0);
}

SignalTemporalLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlFalseContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::PlFalseContext::False() {
  return getToken(SignalTemporalLogicParser::False, 0);
}

SignalTemporalLogicParser::PlFalseContext::PlFalseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StlPredicateContext ------------------------------------------------------------------

SignalTemporalLogicParser::PredicateContext* SignalTemporalLogicParser::StlPredicateContext::predicate() {
  return getRuleContext<SignalTemporalLogicParser::PredicateContext>(0);
}

SignalTemporalLogicParser::StlPredicateContext::StlPredicateContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::StlPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStlPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::LtlAlwaysContext::AlwaysOperator() {
  return getToken(SignalTemporalLogicParser::AlwaysOperator, 0);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::LtlAlwaysContext::formula() {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(0);
}

SignalTemporalLogicParser::IntervalContext* SignalTemporalLogicParser::LtlAlwaysContext::interval() {
  return getRuleContext<SignalTemporalLogicParser::IntervalContext>(0);
}

SignalTemporalLogicParser::LtlAlwaysContext::LtlAlwaysContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::LtlAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::FormulaContext *> SignalTemporalLogicParser::PlIffContext::formula() {
  return getRuleContexts<SignalTemporalLogicParser::FormulaContext>();
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::PlIffContext::IffOperator() {
  return getToken(SignalTemporalLogicParser::IffOperator, 0);
}

SignalTemporalLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlTrueContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::PlTrueContext::True() {
  return getToken(SignalTemporalLogicParser::True, 0);
}

SignalTemporalLogicParser::PlTrueContext::PlTrueContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::FormulaContext *> SignalTemporalLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<SignalTemporalLogicParser::FormulaContext>();
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(SignalTemporalLogicParser::DisjunctionOperator, 0);
}

SignalTemporalLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlPropositionContext ------------------------------------------------------------------

SignalTemporalLogicParser::PropositionContext* SignalTemporalLogicParser::PlPropositionContext::proposition() {
  return getRuleContext<SignalTemporalLogicParser::PropositionContext>(0);
}

SignalTemporalLogicParser::PlPropositionContext::PlPropositionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::PlPropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlProposition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlReleaseContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::FormulaContext *> SignalTemporalLogicParser::LtlReleaseContext::formula() {
  return getRuleContexts<SignalTemporalLogicParser::FormulaContext>();
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::LtlReleaseContext::formula(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::LtlReleaseContext::ReleaseOperator() {
  return getToken(SignalTemporalLogicParser::ReleaseOperator, 0);
}

SignalTemporalLogicParser::IntervalContext* SignalTemporalLogicParser::LtlReleaseContext::interval() {
  return getRuleContext<SignalTemporalLogicParser::IntervalContext>(0);
}

SignalTemporalLogicParser::LtlReleaseContext::LtlReleaseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::LtlReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::LtlEventuallyContext::EventuallyOperator() {
  return getToken(SignalTemporalLogicParser::EventuallyOperator, 0);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::LtlEventuallyContext::formula() {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(0);
}

SignalTemporalLogicParser::IntervalContext* SignalTemporalLogicParser::LtlEventuallyContext::interval() {
  return getRuleContext<SignalTemporalLogicParser::IntervalContext>(0);
}

SignalTemporalLogicParser::LtlEventuallyContext::LtlEventuallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::LtlEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlNextContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::LtlNextContext::NextOperator() {
  return getToken(SignalTemporalLogicParser::NextOperator, 0);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::LtlNextContext::formula() {
  return getRuleContext<SignalTemporalLogicParser::FormulaContext>(0);
}

SignalTemporalLogicParser::IntervalContext* SignalTemporalLogicParser::LtlNextContext::interval() {
  return getRuleContext<SignalTemporalLogicParser::IntervalContext>(0);
}

SignalTemporalLogicParser::LtlNextContext::LtlNextContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::LtlNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlNext(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::formula() {
   return formula(0);
}

SignalTemporalLogicParser::FormulaContext* SignalTemporalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SignalTemporalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  SignalTemporalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, SignalTemporalLogicParser::RuleFormula, precedence);

    

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
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(20);
      match(SignalTemporalLogicParser::LeftParenthesis);
      setState(21);
      formula(0);
      setState(22);
      match(SignalTemporalLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(24);
      match(SignalTemporalLogicParser::True);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(25);
      match(SignalTemporalLogicParser::False);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(26);
      match(SignalTemporalLogicParser::EventuallyOperator);
      setState(28);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(27);
        interval();
        break;
      }

      default:
        break;
      }
      setState(30);
      formula(12);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(31);
      match(SignalTemporalLogicParser::AlwaysOperator);
      setState(33);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(32);
        interval();
        break;
      }

      default:
        break;
      }
      setState(35);
      formula(11);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      match(SignalTemporalLogicParser::NextOperator);
      setState(38);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(37);
        interval();
        break;
      }

      default:
        break;
      }
      setState(40);
      formula(10);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(41);
      match(SignalTemporalLogicParser::NegationOperator);
      setState(42);
      formula(7);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StlPredicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      predicate();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      proposition();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(73);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(71);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(47);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(48);
          match(SignalTemporalLogicParser::UntilOperator);
          setState(50);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
          case 1: {
            setState(49);
            interval();
            break;
          }

          default:
            break;
          }
          setState(52);
          formula(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(53);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(54);
          match(SignalTemporalLogicParser::ReleaseOperator);
          setState(56);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
          case 1: {
            setState(55);
            interval();
            break;
          }

          default:
            break;
          }
          setState(58);
          formula(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(59);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(60);
          match(SignalTemporalLogicParser::ConjunctionOperator);
          setState(61);
          formula(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(62);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(63);
          match(SignalTemporalLogicParser::DisjunctionOperator);
          setState(64);
          formula(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(65);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(66);
          match(SignalTemporalLogicParser::ImplicationOperator);
          setState(67);
          formula(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(68);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(69);
          match(SignalTemporalLogicParser::IffOperator);
          setState(70);
          formula(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(75);
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

//----------------- PredicateContext ------------------------------------------------------------------

SignalTemporalLogicParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SignalTemporalLogicParser::ExpressionContext *> SignalTemporalLogicParser::PredicateContext::expression() {
  return getRuleContexts<SignalTemporalLogicParser::ExpressionContext>();
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::PredicateContext::expression(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(i);
}

SignalTemporalLogicParser::RelationalOperatorContext* SignalTemporalLogicParser::PredicateContext::relationalOperator() {
  return getRuleContext<SignalTemporalLogicParser::RelationalOperatorContext>(0);
}


size_t SignalTemporalLogicParser::PredicateContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RulePredicate;
}


std::any SignalTemporalLogicParser::PredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPredicate(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::PredicateContext* SignalTemporalLogicParser::predicate() {
  PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, getState());
  enterRule(_localctx, 4, SignalTemporalLogicParser::RulePredicate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    expression(0);
    setState(77);
    relationalOperator();
    setState(78);
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

SignalTemporalLogicParser::RelationalOperatorContext::RelationalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SignalTemporalLogicParser::RelationalOperatorContext::LessThanOrEqualTo() {
  return getToken(SignalTemporalLogicParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::RelationalOperatorContext::GreaterThanOrEqualTo() {
  return getToken(SignalTemporalLogicParser::GreaterThanOrEqualTo, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::RelationalOperatorContext::LeftChevron() {
  return getToken(SignalTemporalLogicParser::LeftChevron, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::RelationalOperatorContext::RightChevron() {
  return getToken(SignalTemporalLogicParser::RightChevron, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::RelationalOperatorContext::EqualTo() {
  return getToken(SignalTemporalLogicParser::EqualTo, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::RelationalOperatorContext::NotEqualTo() {
  return getToken(SignalTemporalLogicParser::NotEqualTo, 0);
}


size_t SignalTemporalLogicParser::RelationalOperatorContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleRelationalOperator;
}


std::any SignalTemporalLogicParser::RelationalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitRelationalOperator(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::RelationalOperatorContext* SignalTemporalLogicParser::relationalOperator() {
  RelationalOperatorContext *_localctx = _tracker.createInstance<RelationalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 6, SignalTemporalLogicParser::RuleRelationalOperator);
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
    setState(80);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12582942) != 0)) {
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

//----------------- IntervalContext ------------------------------------------------------------------

SignalTemporalLogicParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::Comma() {
  return getToken(SignalTemporalLogicParser::Comma, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::LeftParenthesis() {
  return getToken(SignalTemporalLogicParser::LeftParenthesis, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::LeftBracket() {
  return getToken(SignalTemporalLogicParser::LeftBracket, 0);
}

std::vector<tree::TerminalNode *> SignalTemporalLogicParser::IntervalContext::Scalar() {
  return getTokens(SignalTemporalLogicParser::Scalar);
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::Scalar(size_t i) {
  return getToken(SignalTemporalLogicParser::Scalar, i);
}

std::vector<tree::TerminalNode *> SignalTemporalLogicParser::IntervalContext::Infinity() {
  return getTokens(SignalTemporalLogicParser::Infinity);
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::Infinity(size_t i) {
  return getToken(SignalTemporalLogicParser::Infinity, i);
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::RightParenthesis() {
  return getToken(SignalTemporalLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::IntervalContext::RightBracket() {
  return getToken(SignalTemporalLogicParser::RightBracket, 0);
}


size_t SignalTemporalLogicParser::IntervalContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleInterval;
}


std::any SignalTemporalLogicParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::IntervalContext* SignalTemporalLogicParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 8, SignalTemporalLogicParser::RuleInterval);
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
    setState(82);
    _la = _input->LA(1);
    if (!(_la == SignalTemporalLogicParser::LeftBracket

    || _la == SignalTemporalLogicParser::LeftParenthesis)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(83);
    _la = _input->LA(1);
    if (!(_la == SignalTemporalLogicParser::Infinity

    || _la == SignalTemporalLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(84);
    match(SignalTemporalLogicParser::Comma);
    setState(85);
    _la = _input->LA(1);
    if (!(_la == SignalTemporalLogicParser::Infinity

    || _la == SignalTemporalLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(86);
    _la = _input->LA(1);
    if (!(_la == SignalTemporalLogicParser::RightBracket

    || _la == SignalTemporalLogicParser::RightParenthesis)) {
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

SignalTemporalLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SignalTemporalLogicParser::PropositionContext::Identifier() {
  return getToken(SignalTemporalLogicParser::Identifier, 0);
}


size_t SignalTemporalLogicParser::PropositionContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleProposition;
}


std::any SignalTemporalLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::PropositionContext* SignalTemporalLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 10, SignalTemporalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(SignalTemporalLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SignalTemporalLogicParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SignalTemporalLogicParser::ExpressionContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleExpression;
}

void SignalTemporalLogicParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticMinusContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::ExpressionContext *> SignalTemporalLogicParser::ArithmeticMinusContext::expression() {
  return getRuleContexts<SignalTemporalLogicParser::ExpressionContext>();
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::ArithmeticMinusContext::expression(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticMinusContext::SubtractionOperator() {
  return getToken(SignalTemporalLogicParser::SubtractionOperator, 0);
}

SignalTemporalLogicParser::ArithmeticMinusContext::ArithmeticMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTimesContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::ExpressionContext *> SignalTemporalLogicParser::ArithmeticTimesContext::expression() {
  return getRuleContexts<SignalTemporalLogicParser::ExpressionContext>();
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::ArithmeticTimesContext::expression(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticTimesContext::MultiplicationOperator() {
  return getToken(SignalTemporalLogicParser::MultiplicationOperator, 0);
}

SignalTemporalLogicParser::ArithmeticTimesContext::ArithmeticTimesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticParenthesesContext::LeftParenthesis() {
  return getToken(SignalTemporalLogicParser::LeftParenthesis, 0);
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::ArithmeticParenthesesContext::expression() {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(0);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticParenthesesContext::RightParenthesis() {
  return getToken(SignalTemporalLogicParser::RightParenthesis, 0);
}

SignalTemporalLogicParser::ArithmeticParenthesesContext::ArithmeticParenthesesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticDivideContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::ExpressionContext *> SignalTemporalLogicParser::ArithmeticDivideContext::expression() {
  return getRuleContexts<SignalTemporalLogicParser::ExpressionContext>();
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::ArithmeticDivideContext::expression(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticDivideContext::DivisionOperator() {
  return getToken(SignalTemporalLogicParser::DivisionOperator, 0);
}

SignalTemporalLogicParser::ArithmeticDivideContext::ArithmeticDivideContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticModulusContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::ExpressionContext *> SignalTemporalLogicParser::ArithmeticModulusContext::expression() {
  return getRuleContexts<SignalTemporalLogicParser::ExpressionContext>();
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::ArithmeticModulusContext::expression(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticModulusContext::ModulusOperator() {
  return getToken(SignalTemporalLogicParser::ModulusOperator, 0);
}

SignalTemporalLogicParser::ArithmeticModulusContext::ArithmeticModulusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticModulusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticModulus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTermContext ------------------------------------------------------------------

SignalTemporalLogicParser::TermContext* SignalTemporalLogicParser::ArithmeticTermContext::term() {
  return getRuleContext<SignalTemporalLogicParser::TermContext>(0);
}

SignalTemporalLogicParser::ArithmeticTermContext::ArithmeticTermContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticPlusContext ------------------------------------------------------------------

std::vector<SignalTemporalLogicParser::ExpressionContext *> SignalTemporalLogicParser::ArithmeticPlusContext::expression() {
  return getRuleContexts<SignalTemporalLogicParser::ExpressionContext>();
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::ArithmeticPlusContext::expression(size_t i) {
  return getRuleContext<SignalTemporalLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticPlusContext::AdditionOperator() {
  return getToken(SignalTemporalLogicParser::AdditionOperator, 0);
}

SignalTemporalLogicParser::ArithmeticPlusContext::ArithmeticPlusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticPlus(this);
  else
    return visitor->visitChildren(this);
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::expression() {
   return expression(0);
}

SignalTemporalLogicParser::ExpressionContext* SignalTemporalLogicParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SignalTemporalLogicParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SignalTemporalLogicParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, SignalTemporalLogicParser::RuleExpression, precedence);

    

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
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SignalTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ArithmeticParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(91);
        match(SignalTemporalLogicParser::LeftParenthesis);
        setState(92);
        expression(0);
        setState(93);
        match(SignalTemporalLogicParser::RightParenthesis);
        break;
      }

      case SignalTemporalLogicParser::Scalar:
      case SignalTemporalLogicParser::Identifier:
      case SignalTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<ArithmeticTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(95);
        term();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(115);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(113);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(98);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(99);
          match(SignalTemporalLogicParser::MultiplicationOperator);
          setState(100);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(101);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(102);
          match(SignalTemporalLogicParser::DivisionOperator);
          setState(103);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticModulusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(104);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(105);
          match(SignalTemporalLogicParser::ModulusOperator);
          setState(106);
          expression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(107);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(108);
          match(SignalTemporalLogicParser::AdditionOperator);
          setState(109);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArithmeticMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(110);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(111);
          match(SignalTemporalLogicParser::SubtractionOperator);
          setState(112);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(117);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
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

SignalTemporalLogicParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SignalTemporalLogicParser::TermContext::getRuleIndex() const {
  return SignalTemporalLogicParser::RuleTerm;
}

void SignalTemporalLogicParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticConstantContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticConstantContext::Scalar() {
  return getToken(SignalTemporalLogicParser::Scalar, 0);
}

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticConstantContext::SubtractionOperator() {
  return getToken(SignalTemporalLogicParser::SubtractionOperator, 0);
}

SignalTemporalLogicParser::ArithmeticConstantContext::ArithmeticConstantContext(TermContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticVariableContext ------------------------------------------------------------------

tree::TerminalNode* SignalTemporalLogicParser::ArithmeticVariableContext::Identifier() {
  return getToken(SignalTemporalLogicParser::Identifier, 0);
}

SignalTemporalLogicParser::ArithmeticVariableContext::ArithmeticVariableContext(TermContext *ctx) { copyFrom(ctx); }


std::any SignalTemporalLogicParser::ArithmeticVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SignalTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticVariable(this);
  else
    return visitor->visitChildren(this);
}
SignalTemporalLogicParser::TermContext* SignalTemporalLogicParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 14, SignalTemporalLogicParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SignalTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<SignalTemporalLogicParser::ArithmeticVariableContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(118);
        match(SignalTemporalLogicParser::Identifier);
        break;
      }

      case SignalTemporalLogicParser::Scalar:
      case SignalTemporalLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<SignalTemporalLogicParser::ArithmeticConstantContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(120);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SignalTemporalLogicParser::SubtractionOperator) {
          setState(119);
          match(SignalTemporalLogicParser::SubtractionOperator);
        }
        setState(122);
        match(SignalTemporalLogicParser::Scalar);
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

bool SignalTemporalLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);
    case 6: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SignalTemporalLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool SignalTemporalLogicParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
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

void SignalTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(signaltemporallogicparserParserOnceFlag, signaltemporallogicparserParserInitialize);
}
