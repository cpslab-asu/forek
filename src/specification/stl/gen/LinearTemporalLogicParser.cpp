
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/LinearTemporalLogicParser.g4 by ANTLR 4.11.1


#include "LinearTemporalLogicParserVisitor.h"

#include "LinearTemporalLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct LinearTemporalLogicParserStaticData final {
  LinearTemporalLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LinearTemporalLogicParserStaticData(const LinearTemporalLogicParserStaticData&) = delete;
  LinearTemporalLogicParserStaticData(LinearTemporalLogicParserStaticData&&) = delete;
  LinearTemporalLogicParserStaticData& operator=(const LinearTemporalLogicParserStaticData&) = delete;
  LinearTemporalLogicParserStaticData& operator=(LinearTemporalLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lineartemporallogicparserParserOnceFlag;
LinearTemporalLogicParserStaticData *lineartemporallogicparserParserStaticData = nullptr;

void lineartemporallogicparserParserInitialize() {
  assert(lineartemporallogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<LinearTemporalLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "proposition"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "'true'", "'false'", "'@'", 
      "'&'", "'''", "'*'", "'|'", "'^'", "':'", "','", "'$'", "'.'", "'='", 
      "'!'", "'`'", "'#'", "'-'", "'%'", "'+'", "'\\u003F'", "'\"'", "';'", 
      "'~'", "'_'", "'/'", "'\\'", "'{'", "'}'", "'['", "']'", "'<'", "'>'", 
      "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "EventuallyOperator", "AlwaysOperator", "NextOperator", "UntilOperator", 
      "ReleaseOperator", "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "At", "Ampersand", 
      "Apostrophe", "Asterick", "Bar", "Caret", "Colon", "Comma", "DollarSign", 
      "Dot", "Equal", "ExclamationMark", "GraveAccent", "Hash", "Minus", 
      "PercentSign", "Plus", "QuestionMark", "QuotationMark", "Semicolon", 
      "Tilde", "Underscore", "Slash", "BackSlash", "LeftBrace", "RightBrace", 
      "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", "LeftParenthesis", 
      "RightParenthesis", "BlockComment", "LineComment", "Infinity", "Scalar", 
      "Integer", "DecimalInteger", "BinaryInteger", "OctalInteger", "HexInteger", 
      "Floating", "PointFloat", "ExponentFloat", "Identifier", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,58,53,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,26,8,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,46,8,1,10,1,
  	12,1,49,9,1,1,2,1,2,1,2,0,1,2,3,0,2,4,0,0,62,0,6,1,0,0,0,2,25,1,0,0,0,
  	4,50,1,0,0,0,6,7,3,2,1,0,7,8,5,0,0,1,8,1,1,0,0,0,9,10,6,1,-1,0,10,11,
  	5,43,0,0,11,12,3,2,1,0,12,13,5,44,0,0,13,26,1,0,0,0,14,26,5,11,0,0,15,
  	26,5,12,0,0,16,17,5,1,0,0,17,26,3,2,1,11,18,19,5,2,0,0,19,26,3,2,1,10,
  	20,21,5,3,0,0,21,26,3,2,1,9,22,23,5,6,0,0,23,26,3,2,1,6,24,26,3,4,2,0,
  	25,9,1,0,0,0,25,14,1,0,0,0,25,15,1,0,0,0,25,16,1,0,0,0,25,18,1,0,0,0,
  	25,20,1,0,0,0,25,22,1,0,0,0,25,24,1,0,0,0,26,47,1,0,0,0,27,28,10,8,0,
  	0,28,29,5,4,0,0,29,46,3,2,1,9,30,31,10,7,0,0,31,32,5,5,0,0,32,46,3,2,
  	1,8,33,34,10,5,0,0,34,35,5,7,0,0,35,46,3,2,1,6,36,37,10,4,0,0,37,38,5,
  	8,0,0,38,46,3,2,1,5,39,40,10,3,0,0,40,41,5,9,0,0,41,46,3,2,1,4,42,43,
  	10,2,0,0,43,44,5,10,0,0,44,46,3,2,1,3,45,27,1,0,0,0,45,30,1,0,0,0,45,
  	33,1,0,0,0,45,36,1,0,0,0,45,39,1,0,0,0,45,42,1,0,0,0,46,49,1,0,0,0,47,
  	45,1,0,0,0,47,48,1,0,0,0,48,3,1,0,0,0,49,47,1,0,0,0,50,51,5,57,0,0,51,
  	5,1,0,0,0,3,25,45,47
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lineartemporallogicparserParserStaticData = staticData.release();
}

}

LinearTemporalLogicParser::LinearTemporalLogicParser(TokenStream *input) : LinearTemporalLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LinearTemporalLogicParser::LinearTemporalLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LinearTemporalLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lineartemporallogicparserParserStaticData->atn, lineartemporallogicparserParserStaticData->decisionToDFA, lineartemporallogicparserParserStaticData->sharedContextCache, options);
}

LinearTemporalLogicParser::~LinearTemporalLogicParser() {
  delete _interpreter;
}

const atn::ATN& LinearTemporalLogicParser::getATN() const {
  return *lineartemporallogicparserParserStaticData->atn;
}

std::string LinearTemporalLogicParser::getGrammarFileName() const {
  return "LinearTemporalLogicParser.g4";
}

const std::vector<std::string>& LinearTemporalLogicParser::getRuleNames() const {
  return lineartemporallogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& LinearTemporalLogicParser::getVocabulary() const {
  return lineartemporallogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LinearTemporalLogicParser::getSerializedATN() const {
  return lineartemporallogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

LinearTemporalLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::StartContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* LinearTemporalLogicParser::StartContext::EOF() {
  return getToken(LinearTemporalLogicParser::EOF, 0);
}


size_t LinearTemporalLogicParser::StartContext::getRuleIndex() const {
  return LinearTemporalLogicParser::RuleStart;
}


std::any LinearTemporalLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

LinearTemporalLogicParser::StartContext* LinearTemporalLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, LinearTemporalLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(6);
    formula(0);
    setState(7);
    match(LinearTemporalLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

LinearTemporalLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LinearTemporalLogicParser::FormulaContext::getRuleIndex() const {
  return LinearTemporalLogicParser::RuleFormula;
}

void LinearTemporalLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::PlNegationContext::NegationOperator() {
  return getToken(LinearTemporalLogicParser::NegationOperator, 0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::PlNegationContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

LinearTemporalLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlAtomContext ------------------------------------------------------------------

LinearTemporalLogicParser::PropositionContext* LinearTemporalLogicParser::PlAtomContext::proposition() {
  return getRuleContext<LinearTemporalLogicParser::PropositionContext>(0);
}

LinearTemporalLogicParser::PlAtomContext::PlAtomContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlUntilContext ------------------------------------------------------------------

std::vector<LinearTemporalLogicParser::FormulaContext *> LinearTemporalLogicParser::LtlUntilContext::formula() {
  return getRuleContexts<LinearTemporalLogicParser::FormulaContext>();
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::LtlUntilContext::formula(size_t i) {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* LinearTemporalLogicParser::LtlUntilContext::UntilOperator() {
  return getToken(LinearTemporalLogicParser::UntilOperator, 0);
}

LinearTemporalLogicParser::LtlUntilContext::LtlUntilContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::LtlUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<LinearTemporalLogicParser::FormulaContext *> LinearTemporalLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<LinearTemporalLogicParser::FormulaContext>();
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* LinearTemporalLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(LinearTemporalLogicParser::ImplicationOperator, 0);
}

LinearTemporalLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<LinearTemporalLogicParser::FormulaContext *> LinearTemporalLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<LinearTemporalLogicParser::FormulaContext>();
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* LinearTemporalLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(LinearTemporalLogicParser::ConjunctionOperator, 0);
}

LinearTemporalLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlFalseContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::PlFalseContext::False() {
  return getToken(LinearTemporalLogicParser::False, 0);
}

LinearTemporalLogicParser::PlFalseContext::PlFalseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::LtlAlwaysContext::AlwaysOperator() {
  return getToken(LinearTemporalLogicParser::AlwaysOperator, 0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::LtlAlwaysContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

LinearTemporalLogicParser::LtlAlwaysContext::LtlAlwaysContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::LtlAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::LtlParenthesesContext::LeftParenthesis() {
  return getToken(LinearTemporalLogicParser::LeftParenthesis, 0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::LtlParenthesesContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* LinearTemporalLogicParser::LtlParenthesesContext::RightParenthesis() {
  return getToken(LinearTemporalLogicParser::RightParenthesis, 0);
}

LinearTemporalLogicParser::LtlParenthesesContext::LtlParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::LtlParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<LinearTemporalLogicParser::FormulaContext *> LinearTemporalLogicParser::PlIffContext::formula() {
  return getRuleContexts<LinearTemporalLogicParser::FormulaContext>();
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* LinearTemporalLogicParser::PlIffContext::IffOperator() {
  return getToken(LinearTemporalLogicParser::IffOperator, 0);
}

LinearTemporalLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlTrueContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::PlTrueContext::True() {
  return getToken(LinearTemporalLogicParser::True, 0);
}

LinearTemporalLogicParser::PlTrueContext::PlTrueContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<LinearTemporalLogicParser::FormulaContext *> LinearTemporalLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<LinearTemporalLogicParser::FormulaContext>();
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* LinearTemporalLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(LinearTemporalLogicParser::DisjunctionOperator, 0);
}

LinearTemporalLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlReleaseContext ------------------------------------------------------------------

std::vector<LinearTemporalLogicParser::FormulaContext *> LinearTemporalLogicParser::LtlReleaseContext::formula() {
  return getRuleContexts<LinearTemporalLogicParser::FormulaContext>();
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::LtlReleaseContext::formula(size_t i) {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* LinearTemporalLogicParser::LtlReleaseContext::ReleaseOperator() {
  return getToken(LinearTemporalLogicParser::ReleaseOperator, 0);
}

LinearTemporalLogicParser::LtlReleaseContext::LtlReleaseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::LtlReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::LtlEventuallyContext::EventuallyOperator() {
  return getToken(LinearTemporalLogicParser::EventuallyOperator, 0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::LtlEventuallyContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

LinearTemporalLogicParser::LtlEventuallyContext::LtlEventuallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::LtlEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlNextContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::LtlNextContext::NextOperator() {
  return getToken(LinearTemporalLogicParser::NextOperator, 0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::LtlNextContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

LinearTemporalLogicParser::LtlNextContext::LtlNextContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::LtlNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlNext(this);
  else
    return visitor->visitChildren(this);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::formula() {
   return formula(0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LinearTemporalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  LinearTemporalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, LinearTemporalLogicParser::RuleFormula, precedence);

    

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
    setState(25);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LinearTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<LtlParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(10);
        match(LinearTemporalLogicParser::LeftParenthesis);
        setState(11);
        formula(0);
        setState(12);
        match(LinearTemporalLogicParser::RightParenthesis);
        break;
      }

      case LinearTemporalLogicParser::True: {
        _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(14);
        match(LinearTemporalLogicParser::True);
        break;
      }

      case LinearTemporalLogicParser::False: {
        _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(15);
        match(LinearTemporalLogicParser::False);
        break;
      }

      case LinearTemporalLogicParser::EventuallyOperator: {
        _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        match(LinearTemporalLogicParser::EventuallyOperator);
        setState(17);
        formula(11);
        break;
      }

      case LinearTemporalLogicParser::AlwaysOperator: {
        _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(18);
        match(LinearTemporalLogicParser::AlwaysOperator);
        setState(19);
        formula(10);
        break;
      }

      case LinearTemporalLogicParser::NextOperator: {
        _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(20);
        match(LinearTemporalLogicParser::NextOperator);
        setState(21);
        formula(9);
        break;
      }

      case LinearTemporalLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(22);
        match(LinearTemporalLogicParser::NegationOperator);
        setState(23);
        formula(6);
        break;
      }

      case LinearTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<PlAtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(24);
        proposition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(47);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(45);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(27);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(28);
          match(LinearTemporalLogicParser::UntilOperator);
          setState(29);
          formula(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(30);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(31);
          match(LinearTemporalLogicParser::ReleaseOperator);
          setState(32);
          formula(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(33);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(34);
          match(LinearTemporalLogicParser::ConjunctionOperator);
          setState(35);
          formula(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
          match(LinearTemporalLogicParser::DisjunctionOperator);
          setState(38);
          formula(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(39);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(40);
          match(LinearTemporalLogicParser::ImplicationOperator);
          setState(41);
          formula(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(42);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(43);
          match(LinearTemporalLogicParser::IffOperator);
          setState(44);
          formula(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(49);
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

//----------------- PropositionContext ------------------------------------------------------------------

LinearTemporalLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LinearTemporalLogicParser::PropositionContext::Identifier() {
  return getToken(LinearTemporalLogicParser::Identifier, 0);
}


size_t LinearTemporalLogicParser::PropositionContext::getRuleIndex() const {
  return LinearTemporalLogicParser::RuleProposition;
}


std::any LinearTemporalLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

LinearTemporalLogicParser::PropositionContext* LinearTemporalLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 4, LinearTemporalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(LinearTemporalLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LinearTemporalLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LinearTemporalLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
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

void LinearTemporalLogicParser::initialize() {
  ::antlr4::internal::call_once(lineartemporallogicparserParserOnceFlag, lineartemporallogicparserParserInitialize);
}
