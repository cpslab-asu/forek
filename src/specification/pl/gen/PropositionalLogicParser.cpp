
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1


#include "PropositionalLogicParserVisitor.h"

#include "PropositionalLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct PropositionalLogicParserStaticData final {
  PropositionalLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PropositionalLogicParserStaticData(const PropositionalLogicParserStaticData&) = delete;
  PropositionalLogicParserStaticData(PropositionalLogicParserStaticData&&) = delete;
  PropositionalLogicParserStaticData& operator=(const PropositionalLogicParserStaticData&) = delete;
  PropositionalLogicParserStaticData& operator=(PropositionalLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag propositionallogicparserParserOnceFlag;
PropositionalLogicParserStaticData *propositionallogicparserParserStaticData = nullptr;

void propositionallogicparserParserInitialize() {
  assert(propositionallogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<PropositionalLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "proposition"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "'True'", "'False'", "'@'", "'&'", "'''", 
      "'*'", "'|'", "'^'", "':'", "','", "'$'", "'.'", "'='", "'!'", "'`'", 
      "'#'", "'-'", "'%'", "'+'", "'\\u003F'", "'\"'", "';'", "'~'", "'_'", 
      "'/'", "'\\'", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
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
  	4,1,52,39,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,3,1,18,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,
  	1,32,8,1,10,1,12,1,35,9,1,1,2,1,2,1,2,0,1,2,3,0,2,4,0,0,41,0,6,1,0,0,
  	0,2,17,1,0,0,0,4,36,1,0,0,0,6,7,3,2,1,0,7,8,5,0,0,1,8,1,1,0,0,0,9,10,
  	6,1,-1,0,10,11,5,38,0,0,11,12,3,2,1,0,12,13,5,39,0,0,13,18,1,0,0,0,14,
  	15,5,1,0,0,15,18,3,2,1,6,16,18,3,4,2,0,17,9,1,0,0,0,17,14,1,0,0,0,17,
  	16,1,0,0,0,18,33,1,0,0,0,19,20,10,5,0,0,20,21,5,2,0,0,21,32,3,2,1,6,22,
  	23,10,4,0,0,23,24,5,3,0,0,24,32,3,2,1,5,25,26,10,3,0,0,26,27,5,4,0,0,
  	27,32,3,2,1,4,28,29,10,2,0,0,29,30,5,5,0,0,30,32,3,2,1,3,31,19,1,0,0,
  	0,31,22,1,0,0,0,31,25,1,0,0,0,31,28,1,0,0,0,32,35,1,0,0,0,33,31,1,0,0,
  	0,33,34,1,0,0,0,34,3,1,0,0,0,35,33,1,0,0,0,36,37,5,51,0,0,37,5,1,0,0,
  	0,3,17,31,33
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  propositionallogicparserParserStaticData = staticData.release();
}

}

PropositionalLogicParser::PropositionalLogicParser(TokenStream *input) : PropositionalLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PropositionalLogicParser::PropositionalLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PropositionalLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *propositionallogicparserParserStaticData->atn, propositionallogicparserParserStaticData->decisionToDFA, propositionallogicparserParserStaticData->sharedContextCache, options);
}

PropositionalLogicParser::~PropositionalLogicParser() {
  delete _interpreter;
}

const atn::ATN& PropositionalLogicParser::getATN() const {
  return *propositionallogicparserParserStaticData->atn;
}

std::string PropositionalLogicParser::getGrammarFileName() const {
  return "PropositionalLogicParser.g4";
}

const std::vector<std::string>& PropositionalLogicParser::getRuleNames() const {
  return propositionallogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& PropositionalLogicParser::getVocabulary() const {
  return propositionallogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PropositionalLogicParser::getSerializedATN() const {
  return propositionallogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

PropositionalLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::StartContext::formula() {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* PropositionalLogicParser::StartContext::EOF() {
  return getToken(PropositionalLogicParser::EOF, 0);
}


size_t PropositionalLogicParser::StartContext::getRuleIndex() const {
  return PropositionalLogicParser::RuleStart;
}


std::any PropositionalLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

PropositionalLogicParser::StartContext* PropositionalLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, PropositionalLogicParser::RuleStart);

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
    match(PropositionalLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

PropositionalLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PropositionalLogicParser::FormulaContext::getRuleIndex() const {
  return PropositionalLogicParser::RuleFormula;
}

void PropositionalLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* PropositionalLogicParser::PlNegationContext::NegationOperator() {
  return getToken(PropositionalLogicParser::NegationOperator, 0);
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::PlNegationContext::formula() {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(0);
}

PropositionalLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* PropositionalLogicParser::ParenthesesContext::LeftParenthesis() {
  return getToken(PropositionalLogicParser::LeftParenthesis, 0);
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::ParenthesesContext::formula() {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(0);
}

tree::TerminalNode* PropositionalLogicParser::ParenthesesContext::RightParenthesis() {
  return getToken(PropositionalLogicParser::RightParenthesis, 0);
}

PropositionalLogicParser::ParenthesesContext::ParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<PropositionalLogicParser::FormulaContext *> PropositionalLogicParser::PlIffContext::formula() {
  return getRuleContexts<PropositionalLogicParser::FormulaContext>();
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* PropositionalLogicParser::PlIffContext::IffOperator() {
  return getToken(PropositionalLogicParser::IffOperator, 0);
}

PropositionalLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlAtomContext ------------------------------------------------------------------

PropositionalLogicParser::PropositionContext* PropositionalLogicParser::PlAtomContext::proposition() {
  return getRuleContext<PropositionalLogicParser::PropositionContext>(0);
}

PropositionalLogicParser::PlAtomContext::PlAtomContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::PlAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<PropositionalLogicParser::FormulaContext *> PropositionalLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<PropositionalLogicParser::FormulaContext>();
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* PropositionalLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(PropositionalLogicParser::DisjunctionOperator, 0);
}

PropositionalLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<PropositionalLogicParser::FormulaContext *> PropositionalLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<PropositionalLogicParser::FormulaContext>();
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* PropositionalLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(PropositionalLogicParser::ImplicationOperator, 0);
}

PropositionalLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<PropositionalLogicParser::FormulaContext *> PropositionalLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<PropositionalLogicParser::FormulaContext>();
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<PropositionalLogicParser::FormulaContext>(i);
}

tree::TerminalNode* PropositionalLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(PropositionalLogicParser::ConjunctionOperator, 0);
}

PropositionalLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any PropositionalLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::formula() {
   return formula(0);
}

PropositionalLogicParser::FormulaContext* PropositionalLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PropositionalLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  PropositionalLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, PropositionalLogicParser::RuleFormula, precedence);

    

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
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PropositionalLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(10);
        match(PropositionalLogicParser::LeftParenthesis);
        setState(11);
        formula(0);
        setState(12);
        match(PropositionalLogicParser::RightParenthesis);
        break;
      }

      case PropositionalLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(14);
        match(PropositionalLogicParser::NegationOperator);
        setState(15);
        formula(6);
        break;
      }

      case PropositionalLogicParser::Identifier: {
        _localctx = _tracker.createInstance<PlAtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        proposition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(31);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(19);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(20);
          match(PropositionalLogicParser::ConjunctionOperator);
          setState(21);
          formula(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(22);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(23);
          match(PropositionalLogicParser::DisjunctionOperator);
          setState(24);
          formula(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(25);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(26);
          match(PropositionalLogicParser::ImplicationOperator);
          setState(27);
          formula(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(28);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(29);
          match(PropositionalLogicParser::IffOperator);
          setState(30);
          formula(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(35);
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

PropositionalLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PropositionalLogicParser::PropositionContext::Identifier() {
  return getToken(PropositionalLogicParser::Identifier, 0);
}


size_t PropositionalLogicParser::PropositionContext::getRuleIndex() const {
  return PropositionalLogicParser::RuleProposition;
}


std::any PropositionalLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

PropositionalLogicParser::PropositionContext* PropositionalLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 4, PropositionalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(PropositionalLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PropositionalLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PropositionalLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void PropositionalLogicParser::initialize() {
  ::antlr4::internal::call_once(propositionallogicparserParserOnceFlag, propositionallogicparserParserInitialize);
}
