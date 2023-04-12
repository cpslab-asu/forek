
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicParser.g4 by ANTLR 4.11.1


#include "SpatioTemporalPerceptionLogicParserVisitor.h"

#include "SpatioTemporalPerceptionLogicParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct SpatioTemporalPerceptionLogicParserStaticData final {
  SpatioTemporalPerceptionLogicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SpatioTemporalPerceptionLogicParserStaticData(const SpatioTemporalPerceptionLogicParserStaticData&) = delete;
  SpatioTemporalPerceptionLogicParserStaticData(SpatioTemporalPerceptionLogicParserStaticData&&) = delete;
  SpatioTemporalPerceptionLogicParserStaticData& operator=(const SpatioTemporalPerceptionLogicParserStaticData&) = delete;
  SpatioTemporalPerceptionLogicParserStaticData& operator=(SpatioTemporalPerceptionLogicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag spatiotemporalperceptionlogicparserParserOnceFlag;
SpatioTemporalPerceptionLogicParserStaticData *spatiotemporalperceptionlogicparserParserStaticData = nullptr;

void spatiotemporalperceptionlogicparserParserInitialize() {
  assert(spatiotemporalperceptionlogicparserParserStaticData == nullptr);
  auto staticData = std::make_unique<SpatioTemporalPerceptionLogicParserStaticData>(
    std::vector<std::string>{
      "start", "formula", "spatialFormula", "spatialTerm", "fnComparison", 
      "expression", "functionCall", "objectQualifier", "argumentList", "timeConstraint", 
      "relationalOperator", "proposition", "term", "interval"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'BBOX'", "'AREA'", "", "", "", "'<='", "'>='", 
      "'=='", "'!='", "", "", "", "", "", "", "", "", "", "", "'true'", 
      "'false'", "','", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", 
      "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "SpatialExists", "SpatialForall", "InteriorOperator", "ClosureOperator", 
      "BoundingBoxFunction", "AreaFunction", "ExistsQuantifier", "ForallQuantifier", 
      "FreezeTime", "LessThanOrEqualTo", "GreaterThanOrEqualTo", "EqualTo", 
      "NotEqualTo", "EventuallyOperator", "AlwaysOperator", "NextOperator", 
      "UntilOperator", "ReleaseOperator", "NegationOperator", "ConjunctionOperator", 
      "DisjunctionOperator", "ImplicationOperator", "IffOperator", "True", 
      "False", "Comma", "LeftBrace", "RightBrace", "LeftBracket", "RightBracket", 
      "LeftChevron", "RightChevron", "LeftParenthesis", "RightParenthesis", 
      "BlockComment", "LineComment", "Infinity", "Scalar", "Integer", "DecimalInteger", 
      "BinaryInteger", "OctalInteger", "HexInteger", "Floating", "PointFloat", 
      "ExponentFloat", "Identifier", "Whitespace", "AdditionOperator", "SubtractionOperator", 
      "MultiplicationOperator", "DivisionOperator", "ModulusOperator"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,53,230,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,60,8,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,80,8,
  	1,10,1,12,1,83,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,92,8,2,1,2,1,2,1,2,
  	3,2,97,8,2,1,2,1,2,1,2,3,2,102,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,
  	2,112,8,2,1,2,1,2,1,2,3,2,117,8,2,1,2,1,2,1,2,1,2,3,2,123,8,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,5,2,132,8,2,10,2,12,2,135,9,2,1,3,1,3,1,3,1,3,1,3,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,153,8,5,1,5,3,5,156,8,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,173,
  	8,5,10,5,12,5,176,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,188,
  	8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,204,8,
  	7,1,8,1,8,1,8,1,8,3,8,210,8,8,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,3,12,222,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,0,3,2,4,10,14,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,0,4,2,0,10,13,31,32,2,0,29,29,33,33,
  	1,0,37,38,2,0,30,30,34,34,262,0,28,1,0,0,0,2,59,1,0,0,0,4,111,1,0,0,0,
  	6,136,1,0,0,0,8,141,1,0,0,0,10,155,1,0,0,0,12,187,1,0,0,0,14,203,1,0,
  	0,0,16,209,1,0,0,0,18,211,1,0,0,0,20,215,1,0,0,0,22,217,1,0,0,0,24,221,
  	1,0,0,0,26,223,1,0,0,0,28,29,3,2,1,0,29,30,5,0,0,1,30,1,1,0,0,0,31,32,
  	6,1,-1,0,32,33,5,33,0,0,33,34,3,2,1,0,34,35,5,34,0,0,35,60,1,0,0,0,36,
  	60,5,24,0,0,37,60,5,25,0,0,38,39,5,14,0,0,39,60,3,2,1,17,40,41,5,15,0,
  	0,41,60,3,2,1,16,42,43,5,16,0,0,43,60,3,2,1,15,44,45,3,14,7,0,45,46,3,
  	2,1,12,46,60,1,0,0,0,47,48,5,9,0,0,48,49,5,47,0,0,49,60,3,2,1,11,50,51,
  	5,1,0,0,51,60,3,4,2,0,52,53,5,2,0,0,53,60,3,4,2,0,54,55,5,19,0,0,55,60,
  	3,2,1,8,56,60,3,8,4,0,57,60,3,18,9,0,58,60,3,22,11,0,59,31,1,0,0,0,59,
  	36,1,0,0,0,59,37,1,0,0,0,59,38,1,0,0,0,59,40,1,0,0,0,59,42,1,0,0,0,59,
  	44,1,0,0,0,59,47,1,0,0,0,59,50,1,0,0,0,59,52,1,0,0,0,59,54,1,0,0,0,59,
  	56,1,0,0,0,59,57,1,0,0,0,59,58,1,0,0,0,60,81,1,0,0,0,61,62,10,14,0,0,
  	62,63,5,17,0,0,63,80,3,2,1,15,64,65,10,13,0,0,65,66,5,18,0,0,66,80,3,
  	2,1,14,67,68,10,7,0,0,68,69,5,20,0,0,69,80,3,2,1,8,70,71,10,6,0,0,71,
  	72,5,21,0,0,72,80,3,2,1,7,73,74,10,5,0,0,74,75,5,22,0,0,75,80,3,2,1,6,
  	76,77,10,4,0,0,77,78,5,23,0,0,78,80,3,2,1,5,79,61,1,0,0,0,79,64,1,0,0,
  	0,79,67,1,0,0,0,79,70,1,0,0,0,79,73,1,0,0,0,79,76,1,0,0,0,80,83,1,0,0,
  	0,81,79,1,0,0,0,81,82,1,0,0,0,82,3,1,0,0,0,83,81,1,0,0,0,84,85,6,2,-1,
  	0,85,86,5,33,0,0,86,87,3,4,2,0,87,88,5,34,0,0,88,112,1,0,0,0,89,91,5,
  	14,0,0,90,92,3,26,13,0,91,90,1,0,0,0,91,92,1,0,0,0,92,93,1,0,0,0,93,112,
  	3,4,2,11,94,96,5,15,0,0,95,97,3,26,13,0,96,95,1,0,0,0,96,97,1,0,0,0,97,
  	98,1,0,0,0,98,112,3,4,2,10,99,101,5,16,0,0,100,102,3,26,13,0,101,100,
  	1,0,0,0,101,102,1,0,0,0,102,103,1,0,0,0,103,112,3,4,2,9,104,105,5,19,
  	0,0,105,112,3,4,2,6,106,107,5,3,0,0,107,112,3,4,2,3,108,109,5,4,0,0,109,
  	112,3,4,2,2,110,112,3,6,3,0,111,84,1,0,0,0,111,89,1,0,0,0,111,94,1,0,
  	0,0,111,99,1,0,0,0,111,104,1,0,0,0,111,106,1,0,0,0,111,108,1,0,0,0,111,
  	110,1,0,0,0,112,133,1,0,0,0,113,114,10,8,0,0,114,116,5,17,0,0,115,117,
  	3,26,13,0,116,115,1,0,0,0,116,117,1,0,0,0,117,118,1,0,0,0,118,132,3,4,
  	2,9,119,120,10,7,0,0,120,122,5,18,0,0,121,123,3,26,13,0,122,121,1,0,0,
  	0,122,123,1,0,0,0,123,124,1,0,0,0,124,132,3,4,2,8,125,126,10,5,0,0,126,
  	127,5,20,0,0,127,132,3,4,2,6,128,129,10,4,0,0,129,130,5,21,0,0,130,132,
  	3,4,2,5,131,113,1,0,0,0,131,119,1,0,0,0,131,125,1,0,0,0,131,128,1,0,0,
  	0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,5,1,0,0,0,135,133,
  	1,0,0,0,136,137,5,5,0,0,137,138,5,33,0,0,138,139,5,47,0,0,139,140,5,34,
  	0,0,140,7,1,0,0,0,141,142,3,10,5,0,142,143,3,20,10,0,143,144,3,10,5,0,
  	144,9,1,0,0,0,145,146,6,5,-1,0,146,147,5,33,0,0,147,148,3,10,5,0,148,
  	149,5,34,0,0,149,156,1,0,0,0,150,156,3,12,6,0,151,153,5,50,0,0,152,151,
  	1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,156,3,24,12,0,155,145,1,0,
  	0,0,155,150,1,0,0,0,155,152,1,0,0,0,156,174,1,0,0,0,157,158,10,5,0,0,
  	158,159,5,51,0,0,159,173,3,10,5,6,160,161,10,4,0,0,161,162,5,52,0,0,162,
  	173,3,10,5,5,163,164,10,3,0,0,164,165,5,53,0,0,165,173,3,10,5,4,166,167,
  	10,2,0,0,167,168,5,49,0,0,168,173,3,10,5,3,169,170,10,1,0,0,170,171,5,
  	50,0,0,171,173,3,10,5,2,172,157,1,0,0,0,172,160,1,0,0,0,172,163,1,0,0,
  	0,172,166,1,0,0,0,172,169,1,0,0,0,173,176,1,0,0,0,174,172,1,0,0,0,174,
  	175,1,0,0,0,175,11,1,0,0,0,176,174,1,0,0,0,177,178,5,6,0,0,178,179,5,
  	33,0,0,179,180,3,4,2,0,180,181,5,34,0,0,181,188,1,0,0,0,182,183,5,47,
  	0,0,183,184,5,33,0,0,184,185,3,16,8,0,185,186,5,34,0,0,186,188,1,0,0,
  	0,187,177,1,0,0,0,187,182,1,0,0,0,188,13,1,0,0,0,189,190,5,7,0,0,190,
  	191,5,33,0,0,191,192,3,16,8,0,192,193,5,34,0,0,193,194,5,9,0,0,194,195,
  	5,47,0,0,195,204,1,0,0,0,196,197,5,8,0,0,197,198,5,33,0,0,198,199,3,16,
  	8,0,199,200,5,34,0,0,200,201,5,9,0,0,201,202,5,47,0,0,202,204,1,0,0,0,
  	203,189,1,0,0,0,203,196,1,0,0,0,204,15,1,0,0,0,205,206,5,47,0,0,206,207,
  	5,26,0,0,207,210,3,16,8,0,208,210,5,47,0,0,209,205,1,0,0,0,209,208,1,
  	0,0,0,210,17,1,0,0,0,211,212,3,10,5,0,212,213,3,20,10,0,213,214,3,10,
  	5,0,214,19,1,0,0,0,215,216,7,0,0,0,216,21,1,0,0,0,217,218,5,47,0,0,218,
  	23,1,0,0,0,219,222,5,47,0,0,220,222,5,38,0,0,221,219,1,0,0,0,221,220,
  	1,0,0,0,222,25,1,0,0,0,223,224,7,1,0,0,224,225,7,2,0,0,225,226,5,26,0,
  	0,226,227,7,2,0,0,227,228,7,3,0,0,228,27,1,0,0,0,19,59,79,81,91,96,101,
  	111,116,122,131,133,152,155,172,174,187,203,209,221
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  spatiotemporalperceptionlogicparserParserStaticData = staticData.release();
}

}

SpatioTemporalPerceptionLogicParser::SpatioTemporalPerceptionLogicParser(TokenStream *input) : SpatioTemporalPerceptionLogicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SpatioTemporalPerceptionLogicParser::SpatioTemporalPerceptionLogicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SpatioTemporalPerceptionLogicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *spatiotemporalperceptionlogicparserParserStaticData->atn, spatiotemporalperceptionlogicparserParserStaticData->decisionToDFA, spatiotemporalperceptionlogicparserParserStaticData->sharedContextCache, options);
}

SpatioTemporalPerceptionLogicParser::~SpatioTemporalPerceptionLogicParser() {
  delete _interpreter;
}

const atn::ATN& SpatioTemporalPerceptionLogicParser::getATN() const {
  return *spatiotemporalperceptionlogicparserParserStaticData->atn;
}

std::string SpatioTemporalPerceptionLogicParser::getGrammarFileName() const {
  return "SpatioTemporalPerceptionLogicParser.g4";
}

const std::vector<std::string>& SpatioTemporalPerceptionLogicParser::getRuleNames() const {
  return spatiotemporalperceptionlogicparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SpatioTemporalPerceptionLogicParser::getVocabulary() const {
  return spatiotemporalperceptionlogicparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SpatioTemporalPerceptionLogicParser::getSerializedATN() const {
  return spatiotemporalperceptionlogicparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::StartContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StartContext::EOF() {
  return getToken(SpatioTemporalPerceptionLogicParser::EOF, 0);
}


size_t SpatioTemporalPerceptionLogicParser::StartContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleStart;
}


std::any SpatioTemporalPerceptionLogicParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::StartContext* SpatioTemporalPerceptionLogicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, SpatioTemporalPerceptionLogicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    formula(0);
    setState(29);
    match(SpatioTemporalPerceptionLogicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpatioTemporalPerceptionLogicParser::FormulaContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleFormula;
}

void SpatioTemporalPerceptionLogicParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlNegationContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlNegationContext::NegationOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::NegationOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PlNegationContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::PlNegationContext::PlNegationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ParenthesesContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::ParenthesesContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ParenthesesContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::ParenthesesContext::ParenthesesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TqtlObjectQualifierContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::ObjectQualifierContext* SpatioTemporalPerceptionLogicParser::TqtlObjectQualifierContext::objectQualifier() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ObjectQualifierContext>(0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::TqtlObjectQualifierContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::TqtlObjectQualifierContext::TqtlObjectQualifierContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::TqtlObjectQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitTqtlObjectQualifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlUntilContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::LtlUntilContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::LtlUntilContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::LtlUntilContext::UntilOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::UntilOperator, 0);
}

SpatioTemporalPerceptionLogicParser::LtlUntilContext::LtlUntilContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::LtlUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlImplicationContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::PlImplicationContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PlImplicationContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlImplicationContext::ImplicationOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ImplicationOperator, 0);
}

SpatioTemporalPerceptionLogicParser::PlImplicationContext::PlImplicationContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlImplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlConjunctionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::PlConjunctionContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PlConjunctionContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlConjunctionContext::ConjunctionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ConjunctionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::PlConjunctionContext::PlConjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlConjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlFalseContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlFalseContext::False() {
  return getToken(SpatioTemporalPerceptionLogicParser::False, 0);
}

SpatioTemporalPerceptionLogicParser::PlFalseContext::PlFalseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialExistsContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialExistsContext::SpatialExists() {
  return getToken(SpatioTemporalPerceptionLogicParser::SpatialExists, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialExistsContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialExistsContext::StplSpatialExistsContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialExistsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialExists(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::LtlAlwaysContext::AlwaysOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::AlwaysOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::LtlAlwaysContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::LtlAlwaysContext::LtlAlwaysContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::LtlAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlTimeConstraintContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::TimeConstraintContext* SpatioTemporalPerceptionLogicParser::TptlTimeConstraintContext::timeConstraint() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::TimeConstraintContext>(0);
}

SpatioTemporalPerceptionLogicParser::TptlTimeConstraintContext::TptlTimeConstraintContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::TptlTimeConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlTimeConstraint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlIffContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::PlIffContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PlIffContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlIffContext::IffOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::IffOperator, 0);
}

SpatioTemporalPerceptionLogicParser::PlIffContext::PlIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlTrueContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlTrueContext::True() {
  return getToken(SpatioTemporalPerceptionLogicParser::True, 0);
}

SpatioTemporalPerceptionLogicParser::PlTrueContext::PlTrueContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlDisjunctionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::PlDisjunctionContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PlDisjunctionContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PlDisjunctionContext::DisjunctionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::DisjunctionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::PlDisjunctionContext::PlDisjunctionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlDisjunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TptlFreezeTimeContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext::FreezeTime() {
  return getToken(SpatioTemporalPerceptionLogicParser::FreezeTime, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext::TptlFreezeTimeContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitTptlFreezeTime(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlPropositionContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::PropositionContext* SpatioTemporalPerceptionLogicParser::PlPropositionContext::proposition() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::PropositionContext>(0);
}

SpatioTemporalPerceptionLogicParser::PlPropositionContext::PlPropositionContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PlPropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPlProposition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlReleaseContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::LtlReleaseContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::LtlReleaseContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::LtlReleaseContext::ReleaseOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ReleaseOperator, 0);
}

SpatioTemporalPerceptionLogicParser::LtlReleaseContext::LtlReleaseContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::LtlReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFunctionComparisonContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FnComparisonContext* SpatioTemporalPerceptionLogicParser::StplFunctionComparisonContext::fnComparison() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnComparisonContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplFunctionComparisonContext::StplFunctionComparisonContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFunctionComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFunctionComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::LtlEventuallyContext::EventuallyOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::EventuallyOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::LtlEventuallyContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::LtlEventuallyContext::LtlEventuallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::LtlEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtlNextContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::LtlNextContext::NextOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::NextOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::LtlNextContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::LtlNextContext::LtlNextContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::LtlNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitLtlNext(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialForallContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialForallContext::SpatialForall() {
  return getToken(SpatioTemporalPerceptionLogicParser::SpatialForall, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialForallContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialForallContext::StplSpatialForallContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialForallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialForall(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::formula() {
   return formula(0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SpatioTemporalPerceptionLogicParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  SpatioTemporalPerceptionLogicParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, SpatioTemporalPerceptionLogicParser::RuleFormula, precedence);

    

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
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(32);
      match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
      setState(33);
      formula(0);
      setState(34);
      match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      match(SpatioTemporalPerceptionLogicParser::True);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(37);
      match(SpatioTemporalPerceptionLogicParser::False);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(38);
      match(SpatioTemporalPerceptionLogicParser::EventuallyOperator);
      setState(39);
      formula(17);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      match(SpatioTemporalPerceptionLogicParser::AlwaysOperator);
      setState(41);
      formula(16);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(42);
      match(SpatioTemporalPerceptionLogicParser::NextOperator);
      setState(43);
      formula(15);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<TqtlObjectQualifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      objectQualifier();
      setState(45);
      formula(12);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<TptlFreezeTimeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(47);
      match(SpatioTemporalPerceptionLogicParser::FreezeTime);
      setState(48);
      match(SpatioTemporalPerceptionLogicParser::Identifier);
      setState(49);
      formula(11);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StplSpatialExistsContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(50);
      match(SpatioTemporalPerceptionLogicParser::SpatialExists);
      setState(51);
      spatialFormula(0);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<StplSpatialForallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      match(SpatioTemporalPerceptionLogicParser::SpatialForall);
      setState(53);
      spatialFormula(0);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(54);
      match(SpatioTemporalPerceptionLogicParser::NegationOperator);
      setState(55);
      formula(8);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<StplFunctionComparisonContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(56);
      fnComparison();
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<TptlTimeConstraintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(57);
      timeConstraint();
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      proposition();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(81);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(79);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(61);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(62);
          match(SpatioTemporalPerceptionLogicParser::UntilOperator);
          setState(63);
          formula(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(64);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(65);
          match(SpatioTemporalPerceptionLogicParser::ReleaseOperator);
          setState(66);
          formula(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(67);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(68);
          match(SpatioTemporalPerceptionLogicParser::ConjunctionOperator);
          setState(69);
          formula(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(70);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(71);
          match(SpatioTemporalPerceptionLogicParser::DisjunctionOperator);
          setState(72);
          formula(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(73);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(74);
          match(SpatioTemporalPerceptionLogicParser::ImplicationOperator);
          setState(75);
          formula(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(76);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(77);
          match(SpatioTemporalPerceptionLogicParser::IffOperator);
          setState(78);
          formula(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(83);
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

//----------------- SpatialFormulaContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext::SpatialFormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpatioTemporalPerceptionLogicParser::SpatialFormulaContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleSpatialFormula;
}

void SpatioTemporalPerceptionLogicParser::SpatialFormulaContext::copyFrom(SpatialFormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StplComplementContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplComplementContext::NegationOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::NegationOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplComplementContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplComplementContext::StplComplementContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplComplementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplComplement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialTermContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::SpatialTermContext* SpatioTemporalPerceptionLogicParser::StplSpatialTermContext::spatialTerm() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialTermContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialTermContext::StplSpatialTermContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialAlwaysContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext::AlwaysOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::AlwaysOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::IntervalContext* SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext::interval() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::IntervalContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext::StplSpatialAlwaysContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialAlways(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialUntilContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *> SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext::spatialFormula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>();
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext::spatialFormula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext::UntilOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::UntilOperator, 0);
}

SpatioTemporalPerceptionLogicParser::IntervalContext* SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext::interval() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::IntervalContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext::StplSpatialUntilContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplInteriorContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplInteriorContext::InteriorOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::InteriorOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplInteriorContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplInteriorContext::StplInteriorContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplInteriorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplInterior(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialReleaseContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *> SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext::spatialFormula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>();
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext::spatialFormula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext::ReleaseOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ReleaseOperator, 0);
}

SpatioTemporalPerceptionLogicParser::IntervalContext* SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext::interval() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::IntervalContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext::StplSpatialReleaseContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialRelease(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialEventuallyContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext::EventuallyOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::EventuallyOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::IntervalContext* SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext::interval() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::IntervalContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext::StplSpatialEventuallyContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialEventually(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialNextContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialNextContext::NextOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::NextOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialNextContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::IntervalContext* SpatioTemporalPerceptionLogicParser::StplSpatialNextContext::interval() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::IntervalContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialNextContext::StplSpatialNextContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialNextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialNext(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SpatialParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::SpatialParenthesesContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::SpatialParenthesesContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::SpatialParenthesesContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialParenthesesContext::SpatialParenthesesContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::SpatialParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitSpatialParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplClosureContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplClosureContext::ClosureOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ClosureOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplClosureContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplClosureContext::StplClosureContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplClosureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplClosure(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplIntersectionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *> SpatioTemporalPerceptionLogicParser::StplIntersectionContext::spatialFormula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>();
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplIntersectionContext::spatialFormula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplIntersectionContext::ConjunctionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ConjunctionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplIntersectionContext::StplIntersectionContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplIntersectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplIntersection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplUnionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *> SpatioTemporalPerceptionLogicParser::StplUnionContext::spatialFormula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>();
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplUnionContext::spatialFormula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplUnionContext::DisjunctionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::DisjunctionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplUnionContext::StplUnionContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplUnionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplUnion(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::spatialFormula() {
   return spatialFormula(0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::spatialFormula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *_localctx = _tracker.createInstance<SpatialFormulaContext>(_ctx, parentState);
  SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, SpatioTemporalPerceptionLogicParser::RuleSpatialFormula, precedence);

    

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
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<SpatialParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(85);
        match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
        setState(86);
        spatialFormula(0);
        setState(87);
        match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::EventuallyOperator: {
        _localctx = _tracker.createInstance<StplSpatialEventuallyContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(89);
        match(SpatioTemporalPerceptionLogicParser::EventuallyOperator);
        setState(91);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(90);
          interval();
          break;
        }

        default:
          break;
        }
        setState(93);
        spatialFormula(11);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::AlwaysOperator: {
        _localctx = _tracker.createInstance<StplSpatialAlwaysContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(94);
        match(SpatioTemporalPerceptionLogicParser::AlwaysOperator);
        setState(96);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(95);
          interval();
          break;
        }

        default:
          break;
        }
        setState(98);
        spatialFormula(10);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::NextOperator: {
        _localctx = _tracker.createInstance<StplSpatialNextContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(99);
        match(SpatioTemporalPerceptionLogicParser::NextOperator);
        setState(101);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(100);
          interval();
          break;
        }

        default:
          break;
        }
        setState(103);
        spatialFormula(9);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<StplComplementContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(104);
        match(SpatioTemporalPerceptionLogicParser::NegationOperator);
        setState(105);
        spatialFormula(6);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::InteriorOperator: {
        _localctx = _tracker.createInstance<StplInteriorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(106);
        match(SpatioTemporalPerceptionLogicParser::InteriorOperator);
        setState(107);
        spatialFormula(3);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::ClosureOperator: {
        _localctx = _tracker.createInstance<StplClosureContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(108);
        match(SpatioTemporalPerceptionLogicParser::ClosureOperator);
        setState(109);
        spatialFormula(2);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::BoundingBoxFunction: {
        _localctx = _tracker.createInstance<StplSpatialTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(110);
        spatialTerm();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(133);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(131);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<StplSpatialUntilContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(113);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(114);
          match(SpatioTemporalPerceptionLogicParser::UntilOperator);
          setState(116);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
          case 1: {
            setState(115);
            interval();
            break;
          }

          default:
            break;
          }
          setState(118);
          spatialFormula(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<StplSpatialReleaseContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(119);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(120);
          match(SpatioTemporalPerceptionLogicParser::ReleaseOperator);
          setState(122);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
          case 1: {
            setState(121);
            interval();
            break;
          }

          default:
            break;
          }
          setState(124);
          spatialFormula(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<StplIntersectionContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(125);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(126);
          match(SpatioTemporalPerceptionLogicParser::ConjunctionOperator);
          setState(127);
          spatialFormula(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<StplUnionContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(128);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(129);
          match(SpatioTemporalPerceptionLogicParser::DisjunctionOperator);
          setState(130);
          spatialFormula(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(135);
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

//----------------- SpatialTermContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::SpatialTermContext::SpatialTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::SpatialTermContext::BoundingBoxFunction() {
  return getToken(SpatioTemporalPerceptionLogicParser::BoundingBoxFunction, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::SpatialTermContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::SpatialTermContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::SpatialTermContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}


size_t SpatioTemporalPerceptionLogicParser::SpatialTermContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleSpatialTerm;
}


std::any SpatioTemporalPerceptionLogicParser::SpatialTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitSpatialTerm(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::SpatialTermContext* SpatioTemporalPerceptionLogicParser::spatialTerm() {
  SpatialTermContext *_localctx = _tracker.createInstance<SpatialTermContext>(_ctx, getState());
  enterRule(_localctx, 6, SpatioTemporalPerceptionLogicParser::RuleSpatialTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(SpatioTemporalPerceptionLogicParser::BoundingBoxFunction);
    setState(137);
    match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
    setState(138);
    match(SpatioTemporalPerceptionLogicParser::Identifier);
    setState(139);
    match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnComparisonContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FnComparisonContext::FnComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::FnComparisonContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::FnComparisonContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

SpatioTemporalPerceptionLogicParser::RelationalOperatorContext* SpatioTemporalPerceptionLogicParser::FnComparisonContext::relationalOperator() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::RelationalOperatorContext>(0);
}


size_t SpatioTemporalPerceptionLogicParser::FnComparisonContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleFnComparison;
}


std::any SpatioTemporalPerceptionLogicParser::FnComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitFnComparison(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::FnComparisonContext* SpatioTemporalPerceptionLogicParser::fnComparison() {
  FnComparisonContext *_localctx = _tracker.createInstance<FnComparisonContext>(_ctx, getState());
  enterRule(_localctx, 8, SpatioTemporalPerceptionLogicParser::RuleFnComparison);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    expression(0);
    setState(142);
    relationalOperator();
    setState(143);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpatioTemporalPerceptionLogicParser::ExpressionContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleExpression;
}

void SpatioTemporalPerceptionLogicParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticMinusContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext::SubtractionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::SubtractionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext::ArithmeticMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTimesContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext::MultiplicationOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::MultiplicationOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext::ArithmeticTimesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext::expression() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext::ArithmeticParenthesesContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticDivideContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext::DivisionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::DivisionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext::ArithmeticDivideContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticModulusContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::ArithmeticModulusContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticModulusContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticModulusContext::ModulusOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ModulusOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticModulusContext::ArithmeticModulusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticModulusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticModulus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticTermContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::TermContext* SpatioTemporalPerceptionLogicParser::ArithmeticTermContext::term() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::TermContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticTermContext::SubtractionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::SubtractionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticTermContext::ArithmeticTermContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticPlusContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext::AdditionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::AdditionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext::ArithmeticPlusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFunctionCallContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FunctionCallContext* SpatioTemporalPerceptionLogicParser::StplFunctionCallContext::functionCall() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FunctionCallContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplFunctionCallContext::StplFunctionCallContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::expression() {
   return expression(0);
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SpatioTemporalPerceptionLogicParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SpatioTemporalPerceptionLogicParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, SpatioTemporalPerceptionLogicParser::RuleExpression, precedence);

    size_t _la = 0;

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
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ArithmeticParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(146);
      match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
      setState(147);
      expression(0);
      setState(148);
      match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StplFunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(150);
      functionCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ArithmeticTermContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SpatioTemporalPerceptionLogicParser::SubtractionOperator) {
        setState(151);
        match(SpatioTemporalPerceptionLogicParser::SubtractionOperator);
      }
      setState(154);
      term();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(174);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(172);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(157);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(158);
          match(SpatioTemporalPerceptionLogicParser::MultiplicationOperator);
          setState(159);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(160);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(161);
          match(SpatioTemporalPerceptionLogicParser::DivisionOperator);
          setState(162);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticModulusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(163);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(164);
          match(SpatioTemporalPerceptionLogicParser::ModulusOperator);
          setState(165);
          expression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(166);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(167);
          match(SpatioTemporalPerceptionLogicParser::AdditionOperator);
          setState(168);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArithmeticMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(169);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(170);
          match(SpatioTemporalPerceptionLogicParser::SubtractionOperator);
          setState(171);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(176);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FunctionCallContext::AreaFunction() {
  return getToken(SpatioTemporalPerceptionLogicParser::AreaFunction, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FunctionCallContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::FunctionCallContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FunctionCallContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FunctionCallContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

SpatioTemporalPerceptionLogicParser::ArgumentListContext* SpatioTemporalPerceptionLogicParser::FunctionCallContext::argumentList() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ArgumentListContext>(0);
}


size_t SpatioTemporalPerceptionLogicParser::FunctionCallContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleFunctionCall;
}


std::any SpatioTemporalPerceptionLogicParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::FunctionCallContext* SpatioTemporalPerceptionLogicParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 12, SpatioTemporalPerceptionLogicParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::AreaFunction: {
        enterOuterAlt(_localctx, 1);
        setState(177);
        match(SpatioTemporalPerceptionLogicParser::AreaFunction);
        setState(178);
        match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
        setState(179);
        spatialFormula(0);
        setState(180);
        match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(182);
        match(SpatioTemporalPerceptionLogicParser::Identifier);
        setState(183);
        match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
        setState(184);
        argumentList();
        setState(185);
        match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
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

//----------------- ObjectQualifierContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::ObjectQualifierContext::ObjectQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpatioTemporalPerceptionLogicParser::ObjectQualifierContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleObjectQualifier;
}

void SpatioTemporalPerceptionLogicParser::ObjectQualifierContext::copyFrom(ObjectQualifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TqtlExistsQualifierContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::ExistsQuantifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::ExistsQuantifier, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::ArgumentListContext* SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::argumentList() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ArgumentListContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::FreezeTime() {
  return getToken(SpatioTemporalPerceptionLogicParser::FreezeTime, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::TqtlExistsQualifierContext(ObjectQualifierContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitTqtlExistsQualifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TqtlForallQualifierContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::ForallQuantifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::ForallQuantifier, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::ArgumentListContext* SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::argumentList() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ArgumentListContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::FreezeTime() {
  return getToken(SpatioTemporalPerceptionLogicParser::FreezeTime, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::TqtlForallQualifierContext(ObjectQualifierContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitTqtlForallQualifier(this);
  else
    return visitor->visitChildren(this);
}
SpatioTemporalPerceptionLogicParser::ObjectQualifierContext* SpatioTemporalPerceptionLogicParser::objectQualifier() {
  ObjectQualifierContext *_localctx = _tracker.createInstance<ObjectQualifierContext>(_ctx, getState());
  enterRule(_localctx, 14, SpatioTemporalPerceptionLogicParser::RuleObjectQualifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::ExistsQuantifier: {
        _localctx = _tracker.createInstance<SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(189);
        match(SpatioTemporalPerceptionLogicParser::ExistsQuantifier);
        setState(190);
        match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
        setState(191);
        argumentList();
        setState(192);
        match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
        setState(193);
        match(SpatioTemporalPerceptionLogicParser::FreezeTime);
        setState(194);
        match(SpatioTemporalPerceptionLogicParser::Identifier);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::ForallQuantifier: {
        _localctx = _tracker.createInstance<SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(196);
        match(SpatioTemporalPerceptionLogicParser::ForallQuantifier);
        setState(197);
        match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
        setState(198);
        argumentList();
        setState(199);
        match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
        setState(200);
        match(SpatioTemporalPerceptionLogicParser::FreezeTime);
        setState(201);
        match(SpatioTemporalPerceptionLogicParser::Identifier);
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

SpatioTemporalPerceptionLogicParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArgumentListContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArgumentListContext::Comma() {
  return getToken(SpatioTemporalPerceptionLogicParser::Comma, 0);
}

SpatioTemporalPerceptionLogicParser::ArgumentListContext* SpatioTemporalPerceptionLogicParser::ArgumentListContext::argumentList() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ArgumentListContext>(0);
}


size_t SpatioTemporalPerceptionLogicParser::ArgumentListContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleArgumentList;
}


std::any SpatioTemporalPerceptionLogicParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::ArgumentListContext* SpatioTemporalPerceptionLogicParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 16, SpatioTemporalPerceptionLogicParser::RuleArgumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(205);
      match(SpatioTemporalPerceptionLogicParser::Identifier);
      setState(206);
      match(SpatioTemporalPerceptionLogicParser::Comma);
      setState(207);
      argumentList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(208);
      match(SpatioTemporalPerceptionLogicParser::Identifier);
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

SpatioTemporalPerceptionLogicParser::TimeConstraintContext::TimeConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::TimeConstraintContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::TimeConstraintContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

SpatioTemporalPerceptionLogicParser::RelationalOperatorContext* SpatioTemporalPerceptionLogicParser::TimeConstraintContext::relationalOperator() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::RelationalOperatorContext>(0);
}


size_t SpatioTemporalPerceptionLogicParser::TimeConstraintContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleTimeConstraint;
}


std::any SpatioTemporalPerceptionLogicParser::TimeConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitTimeConstraint(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::TimeConstraintContext* SpatioTemporalPerceptionLogicParser::timeConstraint() {
  TimeConstraintContext *_localctx = _tracker.createInstance<TimeConstraintContext>(_ctx, getState());
  enterRule(_localctx, 18, SpatioTemporalPerceptionLogicParser::RuleTimeConstraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    expression(0);
    setState(212);
    relationalOperator();
    setState(213);
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

SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::RelationalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::LessThanOrEqualTo() {
  return getToken(SpatioTemporalPerceptionLogicParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::GreaterThanOrEqualTo() {
  return getToken(SpatioTemporalPerceptionLogicParser::GreaterThanOrEqualTo, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::LeftChevron() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftChevron, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::RightChevron() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightChevron, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::EqualTo() {
  return getToken(SpatioTemporalPerceptionLogicParser::EqualTo, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::NotEqualTo() {
  return getToken(SpatioTemporalPerceptionLogicParser::NotEqualTo, 0);
}


size_t SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleRelationalOperator;
}


std::any SpatioTemporalPerceptionLogicParser::RelationalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitRelationalOperator(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::RelationalOperatorContext* SpatioTemporalPerceptionLogicParser::relationalOperator() {
  RelationalOperatorContext *_localctx = _tracker.createInstance<RelationalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 20, SpatioTemporalPerceptionLogicParser::RuleRelationalOperator);
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
    setState(215);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6442466304) != 0)) {
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

SpatioTemporalPerceptionLogicParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PropositionContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}


size_t SpatioTemporalPerceptionLogicParser::PropositionContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleProposition;
}


std::any SpatioTemporalPerceptionLogicParser::PropositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitProposition(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::PropositionContext* SpatioTemporalPerceptionLogicParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 22, SpatioTemporalPerceptionLogicParser::RuleProposition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(SpatioTemporalPerceptionLogicParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpatioTemporalPerceptionLogicParser::TermContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleTerm;
}

void SpatioTemporalPerceptionLogicParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticConstantContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext::Scalar() {
  return getToken(SpatioTemporalPerceptionLogicParser::Scalar, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext::ArithmeticConstantContext(TermContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticVariableContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext::ArithmeticVariableContext(TermContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticVariable(this);
  else
    return visitor->visitChildren(this);
}
SpatioTemporalPerceptionLogicParser::TermContext* SpatioTemporalPerceptionLogicParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 24, SpatioTemporalPerceptionLogicParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::Identifier: {
        _localctx = _tracker.createInstance<SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(219);
        match(SpatioTemporalPerceptionLogicParser::Identifier);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::Scalar: {
        _localctx = _tracker.createInstance<SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(220);
        match(SpatioTemporalPerceptionLogicParser::Scalar);
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

//----------------- IntervalContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::Comma() {
  return getToken(SpatioTemporalPerceptionLogicParser::Comma, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::LeftBracket() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftBracket, 0);
}

std::vector<tree::TerminalNode *> SpatioTemporalPerceptionLogicParser::IntervalContext::Scalar() {
  return getTokens(SpatioTemporalPerceptionLogicParser::Scalar);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::Scalar(size_t i) {
  return getToken(SpatioTemporalPerceptionLogicParser::Scalar, i);
}

std::vector<tree::TerminalNode *> SpatioTemporalPerceptionLogicParser::IntervalContext::Infinity() {
  return getTokens(SpatioTemporalPerceptionLogicParser::Infinity);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::Infinity(size_t i) {
  return getToken(SpatioTemporalPerceptionLogicParser::Infinity, i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::IntervalContext::RightBracket() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightBracket, 0);
}


size_t SpatioTemporalPerceptionLogicParser::IntervalContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleInterval;
}


std::any SpatioTemporalPerceptionLogicParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::IntervalContext* SpatioTemporalPerceptionLogicParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 26, SpatioTemporalPerceptionLogicParser::RuleInterval);
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
    setState(223);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::LeftBracket

    || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(224);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::Infinity

    || _la == SpatioTemporalPerceptionLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(225);
    match(SpatioTemporalPerceptionLogicParser::Comma);
    setState(226);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::Infinity

    || _la == SpatioTemporalPerceptionLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(227);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::RightBracket

    || _la == SpatioTemporalPerceptionLogicParser::RightParenthesis)) {
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

bool SpatioTemporalPerceptionLogicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);
    case 2: return spatialFormulaSempred(antlrcpp::downCast<SpatialFormulaContext *>(context), predicateIndex);
    case 5: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::spatialFormulaSempred(SpatialFormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 5);
    case 9: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void SpatioTemporalPerceptionLogicParser::initialize() {
  ::antlr4::internal::call_once(spatiotemporalperceptionlogicparserParserOnceFlag, spatiotemporalperceptionlogicparserParserInitialize);
}
