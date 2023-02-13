
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1


#include "PropositionalLogicParserVisitor.h"

#include "PropositionalLogicParser.h"


using namespace antlrcpp;

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
      "plFormula", "proposition"
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
  	4,1,52,36,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,
  	15,8,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,29,8,0,10,
  	0,12,0,32,9,0,1,1,1,1,1,1,0,1,0,2,0,2,0,0,41,0,14,1,0,0,0,2,33,1,0,0,
  	0,4,5,6,0,-1,0,5,6,5,38,0,0,6,7,3,0,0,0,7,8,5,39,0,0,8,15,1,0,0,0,9,10,
  	5,1,0,0,10,15,3,0,0,8,11,15,5,6,0,0,12,15,5,7,0,0,13,15,3,2,1,0,14,4,
  	1,0,0,0,14,9,1,0,0,0,14,11,1,0,0,0,14,12,1,0,0,0,14,13,1,0,0,0,15,30,
  	1,0,0,0,16,17,10,7,0,0,17,18,5,2,0,0,18,29,3,0,0,8,19,20,10,6,0,0,20,
  	21,5,3,0,0,21,29,3,0,0,7,22,23,10,5,0,0,23,24,5,4,0,0,24,29,3,0,0,6,25,
  	26,10,4,0,0,26,27,5,5,0,0,27,29,3,0,0,5,28,16,1,0,0,0,28,19,1,0,0,0,28,
  	22,1,0,0,0,28,25,1,0,0,0,29,32,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,31,
  	1,1,0,0,0,32,30,1,0,0,0,33,34,5,51,0,0,34,3,1,0,0,0,3,14,28,30
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


//----------------- PlFormulaContext ------------------------------------------------------------------

PropositionalLogicParser::PlFormulaContext::PlFormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::LeftParenthesis() {
  return getToken(PropositionalLogicParser::LeftParenthesis, 0);
}

std::vector<PropositionalLogicParser::PlFormulaContext *> PropositionalLogicParser::PlFormulaContext::plFormula() {
  return getRuleContexts<PropositionalLogicParser::PlFormulaContext>();
}

PropositionalLogicParser::PlFormulaContext* PropositionalLogicParser::PlFormulaContext::plFormula(size_t i) {
  return getRuleContext<PropositionalLogicParser::PlFormulaContext>(i);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::RightParenthesis() {
  return getToken(PropositionalLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::NegationOperator() {
  return getToken(PropositionalLogicParser::NegationOperator, 0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::True() {
  return getToken(PropositionalLogicParser::True, 0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::False() {
  return getToken(PropositionalLogicParser::False, 0);
}

PropositionalLogicParser::PropositionContext* PropositionalLogicParser::PlFormulaContext::proposition() {
  return getRuleContext<PropositionalLogicParser::PropositionContext>(0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::ConjunctionOperator() {
  return getToken(PropositionalLogicParser::ConjunctionOperator, 0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::DisjunctionOperator() {
  return getToken(PropositionalLogicParser::DisjunctionOperator, 0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::ImplicationOperator() {
  return getToken(PropositionalLogicParser::ImplicationOperator, 0);
}

tree::TerminalNode* PropositionalLogicParser::PlFormulaContext::IffOperator() {
  return getToken(PropositionalLogicParser::IffOperator, 0);
}


size_t PropositionalLogicParser::PlFormulaContext::getRuleIndex() const {
  return PropositionalLogicParser::RulePlFormula;
}


std::any PropositionalLogicParser::PlFormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PropositionalLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFormula(this);
  else
    return visitor->visitChildren(this);
}


PropositionalLogicParser::PlFormulaContext* PropositionalLogicParser::plFormula() {
   return plFormula(0);
}

PropositionalLogicParser::PlFormulaContext* PropositionalLogicParser::plFormula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PropositionalLogicParser::PlFormulaContext *_localctx = _tracker.createInstance<PlFormulaContext>(_ctx, parentState);
  PropositionalLogicParser::PlFormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, PropositionalLogicParser::RulePlFormula, precedence);

    

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
    setState(14);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PropositionalLogicParser::LeftParenthesis: {
        setState(5);
        match(PropositionalLogicParser::LeftParenthesis);
        setState(6);
        plFormula(0);
        setState(7);
        match(PropositionalLogicParser::RightParenthesis);
        break;
      }

      case PropositionalLogicParser::NegationOperator: {
        setState(9);
        match(PropositionalLogicParser::NegationOperator);
        setState(10);
        plFormula(8);
        break;
      }

      case PropositionalLogicParser::True: {
        setState(11);
        match(PropositionalLogicParser::True);
        break;
      }

      case PropositionalLogicParser::False: {
        setState(12);
        match(PropositionalLogicParser::False);
        break;
      }

      case PropositionalLogicParser::Identifier: {
        setState(13);
        proposition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(30);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(28);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PlFormulaContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlFormula);
          setState(16);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(17);
          match(PropositionalLogicParser::ConjunctionOperator);
          setState(18);
          plFormula(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PlFormulaContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlFormula);
          setState(19);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(20);
          match(PropositionalLogicParser::DisjunctionOperator);
          setState(21);
          plFormula(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PlFormulaContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlFormula);
          setState(22);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(23);
          match(PropositionalLogicParser::ImplicationOperator);
          setState(24);
          plFormula(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PlFormulaContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlFormula);
          setState(25);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(26);
          match(PropositionalLogicParser::IffOperator);
          setState(27);
          plFormula(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(32);
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
  enterRule(_localctx, 2, PropositionalLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
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
    case 0: return plFormulaSempred(antlrcpp::downCast<PlFormulaContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PropositionalLogicParser::plFormulaSempred(PlFormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void PropositionalLogicParser::initialize() {
  ::antlr4::internal::call_once(propositionallogicparserParserOnceFlag, propositionallogicparserParserInitialize);
}
