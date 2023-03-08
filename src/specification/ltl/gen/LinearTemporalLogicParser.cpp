
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
      "formula", "start", "proposition"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "'True'", "'False'", "'@'", 
      "'&'", "'''", "'*'", "'|'", "'^'", "':'", "','", "'$'", "'.'", "'='", 
      "'!'", "'`'", "'#'", "'-'", "'%'", "'+'", "'\\u003F'", "'\"'", "';'", 
      "'~'", "'_'", "'/'", "'\\'", "'{'", "'}'", "'['", "']'", "'<'", "'>'", 
      "'('", "')'"
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
      "RightParenthesis", "BlockComment", "LineComment", "Scalar", "Integer", 
      "DecimalInteger", "BinaryInteger", "OctalInteger", "HexInteger", "Floating", 
      "PointFloat", "ExponentFloat", "Identifier", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,57,51,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,0,3,0,21,8,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,41,8,0,10,0,12,0,44,9,0,1,1,1,1,
  	1,1,1,2,1,2,1,2,0,1,0,3,0,2,4,0,0,58,0,20,1,0,0,0,2,45,1,0,0,0,4,48,1,
  	0,0,0,6,7,6,0,-1,0,7,8,5,43,0,0,8,9,3,0,0,0,9,10,5,44,0,0,10,21,1,0,0,
  	0,11,12,5,1,0,0,12,21,3,0,0,11,13,14,5,2,0,0,14,21,3,0,0,10,15,16,5,3,
  	0,0,16,21,3,0,0,9,17,18,5,6,0,0,18,21,3,0,0,6,19,21,3,4,2,0,20,6,1,0,
  	0,0,20,11,1,0,0,0,20,13,1,0,0,0,20,15,1,0,0,0,20,17,1,0,0,0,20,19,1,0,
  	0,0,21,42,1,0,0,0,22,23,10,8,0,0,23,24,5,4,0,0,24,41,3,0,0,9,25,26,10,
  	7,0,0,26,27,5,5,0,0,27,41,3,0,0,8,28,29,10,5,0,0,29,30,5,7,0,0,30,41,
  	3,0,0,6,31,32,10,4,0,0,32,33,5,8,0,0,33,41,3,0,0,5,34,35,10,3,0,0,35,
  	36,5,9,0,0,36,41,3,0,0,4,37,38,10,2,0,0,38,39,5,10,0,0,39,41,3,0,0,3,
  	40,22,1,0,0,0,40,25,1,0,0,0,40,28,1,0,0,0,40,31,1,0,0,0,40,34,1,0,0,0,
  	40,37,1,0,0,0,41,44,1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,1,1,0,0,0,
  	44,42,1,0,0,0,45,46,3,0,0,0,46,47,5,0,0,1,47,3,1,0,0,0,48,49,5,56,0,0,
  	49,5,1,0,0,0,3,20,40,42
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
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* LinearTemporalLogicParser::ParenthesesContext::LeftParenthesis() {
  return getToken(LinearTemporalLogicParser::LeftParenthesis, 0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::ParenthesesContext::formula() {
  return getRuleContext<LinearTemporalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* LinearTemporalLogicParser::ParenthesesContext::RightParenthesis() {
  return getToken(LinearTemporalLogicParser::RightParenthesis, 0);
}

LinearTemporalLogicParser::ParenthesesContext::ParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any LinearTemporalLogicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LinearTemporalLogicParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
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

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::formula() {
   return formula(0);
}

LinearTemporalLogicParser::FormulaContext* LinearTemporalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LinearTemporalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  LinearTemporalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, LinearTemporalLogicParser::RuleFormula, precedence);

    

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
    setState(20);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LinearTemporalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(7);
        match(LinearTemporalLogicParser::LeftParenthesis);
        setState(8);
        formula(0);
        setState(9);
        match(LinearTemporalLogicParser::RightParenthesis);
        break;
      }

      case LinearTemporalLogicParser::EventuallyOperator: {
        _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(11);
        match(LinearTemporalLogicParser::EventuallyOperator);
        setState(12);
        formula(11);
        break;
      }

      case LinearTemporalLogicParser::AlwaysOperator: {
        _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(13);
        match(LinearTemporalLogicParser::AlwaysOperator);
        setState(14);
        formula(10);
        break;
      }

      case LinearTemporalLogicParser::NextOperator: {
        _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(15);
        match(LinearTemporalLogicParser::NextOperator);
        setState(16);
        formula(9);
        break;
      }

      case LinearTemporalLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(17);
        match(LinearTemporalLogicParser::NegationOperator);
        setState(18);
        formula(6);
        break;
      }

      case LinearTemporalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<PlAtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(19);
        proposition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(42);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(40);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(22);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(23);
          match(LinearTemporalLogicParser::UntilOperator);
          setState(24);
          formula(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(25);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(26);
          match(LinearTemporalLogicParser::ReleaseOperator);
          setState(27);
          formula(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(28);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(29);
          match(LinearTemporalLogicParser::ConjunctionOperator);
          setState(30);
          formula(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(31);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(32);
          match(LinearTemporalLogicParser::DisjunctionOperator);
          setState(33);
          formula(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(34);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(35);
          match(LinearTemporalLogicParser::ImplicationOperator);
          setState(36);
          formula(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(37);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(38);
          match(LinearTemporalLogicParser::IffOperator);
          setState(39);
          formula(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(44);
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
  enterRule(_localctx, 2, LinearTemporalLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    formula(0);
    setState(46);
    match(LinearTemporalLogicParser::EOF);
   
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
    setState(48);
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
    case 0: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);

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
