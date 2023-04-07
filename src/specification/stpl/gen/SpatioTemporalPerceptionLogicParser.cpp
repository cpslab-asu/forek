
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
      "fnExpression", "fnInvocation", "objectQualifier", "argumentList", 
      "timeConstraint", "relationalOperator", "proposition", "expression", 
      "term", "interval"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'BB'", "", "", "", "'<='", "'>='", "'=='", "'!='", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'true'", 
      "'false'", "','", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", 
      "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "SpatialExists", "SpatialForall", "InteriorOperator", "ClosureOperator", 
      "BoundingBoxFunction", "ExistsQuantifier", "ForallQuantifier", "FreezeTime", 
      "LessThanOrEqualTo", "GreaterThanOrEqualTo", "EqualTo", "NotEqualTo", 
      "OnceOperator", "HistoricallyOperator", "PreviousOperator", "SinceOperator", 
      "TriggerOperator", "EventuallyOperator", "AlwaysOperator", "NextOperator", 
      "UntilOperator", "ReleaseOperator", "NegationOperator", "ConjunctionOperator", 
      "DisjunctionOperator", "ImplicationOperator", "IffOperator", "True", 
      "False", "Comma", "LeftBrace", "RightBrace", "LeftBracket", "RightBracket", 
      "LeftChevron", "RightChevron", "LeftParenthesis", "RightParenthesis", 
      "BlockComment", "LineComment", "Infinity", "Scalar", "Integer", "DecimalInteger", 
      "BinaryInteger", "OctalInteger", "HexInteger", "Floating", "PointFloat", 
      "ExponentFloat", "Identifier", "Whitespace", "AdditionOperator", "SubtractionOperator", 
      "MultiplicationOperator", "DivisionOperator", "ModuloOperator"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,57,261,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,3,1,68,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,94,8,1,10,1,12,
  	1,97,9,1,1,2,1,2,1,2,3,2,102,8,2,1,2,1,2,1,2,3,2,107,8,2,1,2,1,2,1,2,
  	3,2,112,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,122,8,2,1,2,1,2,1,2,3,
  	2,127,8,2,1,2,1,2,1,2,1,2,3,2,133,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,
  	142,8,2,10,2,12,2,145,9,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,3,5,163,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,5,5,180,8,5,10,5,12,5,183,9,5,1,6,1,6,1,6,1,6,1,
  	6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,204,8,7,
  	1,8,1,8,1,8,1,8,3,8,210,8,8,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,3,12,226,8,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,243,8,12,10,12,12,12,
  	246,9,12,1,13,1,13,3,13,250,8,13,1,13,3,13,253,8,13,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,0,4,2,4,10,24,15,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,0,4,2,0,9,12,35,36,2,0,33,33,37,37,1,0,41,42,2,0,34,34,38,38,301,
  	0,30,1,0,0,0,2,67,1,0,0,0,4,121,1,0,0,0,6,146,1,0,0,0,8,151,1,0,0,0,10,
  	162,1,0,0,0,12,184,1,0,0,0,14,203,1,0,0,0,16,209,1,0,0,0,18,211,1,0,0,
  	0,20,215,1,0,0,0,22,217,1,0,0,0,24,225,1,0,0,0,26,252,1,0,0,0,28,254,
  	1,0,0,0,30,31,3,2,1,0,31,32,5,0,0,1,32,1,1,0,0,0,33,34,6,1,-1,0,34,35,
  	5,37,0,0,35,36,3,2,1,0,36,37,5,38,0,0,37,68,1,0,0,0,38,68,5,28,0,0,39,
  	68,5,29,0,0,40,41,5,18,0,0,41,68,3,2,1,22,42,43,5,19,0,0,43,68,3,2,1,
  	21,44,45,5,20,0,0,45,68,3,2,1,20,46,47,5,13,0,0,47,68,3,2,1,17,48,49,
  	5,14,0,0,49,68,3,2,1,16,50,51,5,15,0,0,51,68,3,2,1,15,52,53,3,14,7,0,
  	53,54,3,2,1,12,54,68,1,0,0,0,55,56,5,8,0,0,56,57,5,51,0,0,57,68,3,2,1,
  	11,58,59,5,1,0,0,59,68,3,4,2,0,60,61,5,2,0,0,61,68,3,4,2,0,62,63,5,23,
  	0,0,63,68,3,2,1,8,64,68,3,8,4,0,65,68,3,18,9,0,66,68,3,22,11,0,67,33,
  	1,0,0,0,67,38,1,0,0,0,67,39,1,0,0,0,67,40,1,0,0,0,67,42,1,0,0,0,67,44,
  	1,0,0,0,67,46,1,0,0,0,67,48,1,0,0,0,67,50,1,0,0,0,67,52,1,0,0,0,67,55,
  	1,0,0,0,67,58,1,0,0,0,67,60,1,0,0,0,67,62,1,0,0,0,67,64,1,0,0,0,67,65,
  	1,0,0,0,67,66,1,0,0,0,68,95,1,0,0,0,69,70,10,19,0,0,70,71,5,21,0,0,71,
  	94,3,2,1,20,72,73,10,18,0,0,73,74,5,22,0,0,74,94,3,2,1,19,75,76,10,14,
  	0,0,76,77,5,16,0,0,77,94,3,2,1,15,78,79,10,13,0,0,79,80,5,17,0,0,80,94,
  	3,2,1,14,81,82,10,7,0,0,82,83,5,24,0,0,83,94,3,2,1,8,84,85,10,6,0,0,85,
  	86,5,25,0,0,86,94,3,2,1,7,87,88,10,5,0,0,88,89,5,26,0,0,89,94,3,2,1,6,
  	90,91,10,4,0,0,91,92,5,27,0,0,92,94,3,2,1,5,93,69,1,0,0,0,93,72,1,0,0,
  	0,93,75,1,0,0,0,93,78,1,0,0,0,93,81,1,0,0,0,93,84,1,0,0,0,93,87,1,0,0,
  	0,93,90,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,3,1,0,0,
  	0,97,95,1,0,0,0,98,99,6,2,-1,0,99,101,5,18,0,0,100,102,3,28,14,0,101,
  	100,1,0,0,0,101,102,1,0,0,0,102,103,1,0,0,0,103,122,3,4,2,11,104,106,
  	5,19,0,0,105,107,3,28,14,0,106,105,1,0,0,0,106,107,1,0,0,0,107,108,1,
  	0,0,0,108,122,3,4,2,10,109,111,5,20,0,0,110,112,3,28,14,0,111,110,1,0,
  	0,0,111,112,1,0,0,0,112,113,1,0,0,0,113,122,3,4,2,9,114,115,5,23,0,0,
  	115,122,3,4,2,6,116,117,5,3,0,0,117,122,3,4,2,3,118,119,5,4,0,0,119,122,
  	3,4,2,2,120,122,3,6,3,0,121,98,1,0,0,0,121,104,1,0,0,0,121,109,1,0,0,
  	0,121,114,1,0,0,0,121,116,1,0,0,0,121,118,1,0,0,0,121,120,1,0,0,0,122,
  	143,1,0,0,0,123,124,10,8,0,0,124,126,5,21,0,0,125,127,3,28,14,0,126,125,
  	1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,142,3,4,2,9,129,130,10,7,
  	0,0,130,132,5,22,0,0,131,133,3,28,14,0,132,131,1,0,0,0,132,133,1,0,0,
  	0,133,134,1,0,0,0,134,142,3,4,2,8,135,136,10,5,0,0,136,137,5,24,0,0,137,
  	142,3,4,2,6,138,139,10,4,0,0,139,140,5,25,0,0,140,142,3,4,2,5,141,123,
  	1,0,0,0,141,129,1,0,0,0,141,135,1,0,0,0,141,138,1,0,0,0,142,145,1,0,0,
  	0,143,141,1,0,0,0,143,144,1,0,0,0,144,5,1,0,0,0,145,143,1,0,0,0,146,147,
  	5,5,0,0,147,148,5,37,0,0,148,149,5,51,0,0,149,150,5,38,0,0,150,7,1,0,
  	0,0,151,152,3,10,5,0,152,153,3,20,10,0,153,154,3,10,5,0,154,9,1,0,0,0,
  	155,156,6,5,-1,0,156,157,5,37,0,0,157,158,3,10,5,0,158,159,5,38,0,0,159,
  	163,1,0,0,0,160,163,3,12,6,0,161,163,3,26,13,0,162,155,1,0,0,0,162,160,
  	1,0,0,0,162,161,1,0,0,0,163,181,1,0,0,0,164,165,10,5,0,0,165,166,5,55,
  	0,0,166,180,3,10,5,6,167,168,10,4,0,0,168,169,5,56,0,0,169,180,3,10,5,
  	5,170,171,10,3,0,0,171,172,5,57,0,0,172,180,3,10,5,4,173,174,10,2,0,0,
  	174,175,5,53,0,0,175,180,3,10,5,3,176,177,10,1,0,0,177,178,5,54,0,0,178,
  	180,3,10,5,2,179,164,1,0,0,0,179,167,1,0,0,0,179,170,1,0,0,0,179,173,
  	1,0,0,0,179,176,1,0,0,0,180,183,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,
  	0,182,11,1,0,0,0,183,181,1,0,0,0,184,185,5,51,0,0,185,186,5,37,0,0,186,
  	187,3,16,8,0,187,188,5,38,0,0,188,13,1,0,0,0,189,190,5,6,0,0,190,191,
  	5,37,0,0,191,192,3,16,8,0,192,193,5,38,0,0,193,194,5,8,0,0,194,195,5,
  	51,0,0,195,204,1,0,0,0,196,197,5,7,0,0,197,198,5,37,0,0,198,199,3,16,
  	8,0,199,200,5,38,0,0,200,201,5,8,0,0,201,202,5,51,0,0,202,204,1,0,0,0,
  	203,189,1,0,0,0,203,196,1,0,0,0,204,15,1,0,0,0,205,206,5,51,0,0,206,207,
  	5,30,0,0,207,210,3,16,8,0,208,210,5,51,0,0,209,205,1,0,0,0,209,208,1,
  	0,0,0,210,17,1,0,0,0,211,212,3,24,12,0,212,213,3,20,10,0,213,214,3,24,
  	12,0,214,19,1,0,0,0,215,216,7,0,0,0,216,21,1,0,0,0,217,218,5,51,0,0,218,
  	23,1,0,0,0,219,220,6,12,-1,0,220,221,5,37,0,0,221,222,3,24,12,0,222,223,
  	5,38,0,0,223,226,1,0,0,0,224,226,3,26,13,0,225,219,1,0,0,0,225,224,1,
  	0,0,0,226,244,1,0,0,0,227,228,10,5,0,0,228,229,5,55,0,0,229,243,3,24,
  	12,6,230,231,10,4,0,0,231,232,5,56,0,0,232,243,3,24,12,5,233,234,10,3,
  	0,0,234,235,5,57,0,0,235,243,3,24,12,4,236,237,10,2,0,0,237,238,5,53,
  	0,0,238,243,3,24,12,3,239,240,10,1,0,0,240,241,5,54,0,0,241,243,3,24,
  	12,2,242,227,1,0,0,0,242,230,1,0,0,0,242,233,1,0,0,0,242,236,1,0,0,0,
  	242,239,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,25,
  	1,0,0,0,246,244,1,0,0,0,247,253,5,51,0,0,248,250,5,54,0,0,249,248,1,0,
  	0,0,249,250,1,0,0,0,250,251,1,0,0,0,251,253,5,42,0,0,252,247,1,0,0,0,
  	252,249,1,0,0,0,253,27,1,0,0,0,254,255,7,1,0,0,255,256,7,2,0,0,256,257,
  	5,30,0,0,257,258,7,2,0,0,258,259,7,3,0,0,259,29,1,0,0,0,21,67,93,95,101,
  	106,111,121,126,132,141,143,162,179,181,203,209,225,242,244,249,252
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
    setState(30);
    formula(0);
    setState(31);
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
//----------------- PtltlPreviousContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PtltlPreviousContext::PreviousOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::PreviousOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PtltlPreviousContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::PtltlPreviousContext::PtltlPreviousContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PtltlPreviousContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlPrevious(this);
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
//----------------- PtltlTriggerContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::PtltlTriggerContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PtltlTriggerContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PtltlTriggerContext::TriggerOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::TriggerOperator, 0);
}

SpatioTemporalPerceptionLogicParser::PtltlTriggerContext::PtltlTriggerContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PtltlTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlTrigger(this);
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
//----------------- PtltlOnceContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PtltlOnceContext::OnceOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::OnceOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PtltlOnceContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::PtltlOnceContext::PtltlOnceContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PtltlOnceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlOnce(this);
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
//----------------- PtltlHistoricallyContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PtltlHistoricallyContext::HistoricallyOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::HistoricallyOperator, 0);
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PtltlHistoricallyContext::formula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::PtltlHistoricallyContext::PtltlHistoricallyContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PtltlHistoricallyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlHistorically(this);
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
//----------------- PtltlSinceContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FormulaContext *> SpatioTemporalPerceptionLogicParser::PtltlSinceContext::formula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FormulaContext>();
}

SpatioTemporalPerceptionLogicParser::FormulaContext* SpatioTemporalPerceptionLogicParser::PtltlSinceContext::formula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::PtltlSinceContext::SinceOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::SinceOperator, 0);
}

SpatioTemporalPerceptionLogicParser::PtltlSinceContext::PtltlSinceContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::PtltlSinceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitPtltlSince(this);
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
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(34);
      match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
      setState(35);
      formula(0);
      setState(36);
      match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PlTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(38);
      match(SpatioTemporalPerceptionLogicParser::True);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PlFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(39);
      match(SpatioTemporalPerceptionLogicParser::False);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LtlEventuallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      match(SpatioTemporalPerceptionLogicParser::EventuallyOperator);
      setState(41);
      formula(22);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LtlAlwaysContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(42);
      match(SpatioTemporalPerceptionLogicParser::AlwaysOperator);
      setState(43);
      formula(21);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LtlNextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      match(SpatioTemporalPerceptionLogicParser::NextOperator);
      setState(45);
      formula(20);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PtltlOnceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(46);
      match(SpatioTemporalPerceptionLogicParser::OnceOperator);
      setState(47);
      formula(17);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PtltlHistoricallyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(48);
      match(SpatioTemporalPerceptionLogicParser::HistoricallyOperator);
      setState(49);
      formula(16);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PtltlPreviousContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(50);
      match(SpatioTemporalPerceptionLogicParser::PreviousOperator);
      setState(51);
      formula(15);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<TqtlObjectQualifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      objectQualifier();
      setState(53);
      formula(12);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<TptlFreezeTimeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(55);
      match(SpatioTemporalPerceptionLogicParser::FreezeTime);
      setState(56);
      match(SpatioTemporalPerceptionLogicParser::Identifier);
      setState(57);
      formula(11);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<StplSpatialExistsContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(SpatioTemporalPerceptionLogicParser::SpatialExists);
      setState(59);
      spatialFormula(0);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<StplSpatialForallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      match(SpatioTemporalPerceptionLogicParser::SpatialForall);
      setState(61);
      spatialFormula(0);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<PlNegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(62);
      match(SpatioTemporalPerceptionLogicParser::NegationOperator);
      setState(63);
      formula(8);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<StplFunctionComparisonContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(64);
      fnComparison();
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<TptlTimeConstraintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(65);
      timeConstraint();
      break;
    }

    case 17: {
      _localctx = _tracker.createInstance<PlPropositionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(66);
      proposition();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(95);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(93);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtlUntilContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(69);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(70);
          match(SpatioTemporalPerceptionLogicParser::UntilOperator);
          setState(71);
          formula(20);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LtlReleaseContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(72);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(73);
          match(SpatioTemporalPerceptionLogicParser::ReleaseOperator);
          setState(74);
          formula(19);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PtltlSinceContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(75);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(76);
          match(SpatioTemporalPerceptionLogicParser::SinceOperator);
          setState(77);
          formula(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PtltlTriggerContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(78);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(79);
          match(SpatioTemporalPerceptionLogicParser::TriggerOperator);
          setState(80);
          formula(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlConjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(81);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(82);
          match(SpatioTemporalPerceptionLogicParser::ConjunctionOperator);
          setState(83);
          formula(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlDisjunctionContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(84);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(85);
          match(SpatioTemporalPerceptionLogicParser::DisjunctionOperator);
          setState(86);
          formula(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<PlImplicationContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(87);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(88);
          match(SpatioTemporalPerceptionLogicParser::ImplicationOperator);
          setState(89);
          formula(6);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<PlIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(90);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(91);
          match(SpatioTemporalPerceptionLogicParser::IffOperator);
          setState(92);
          formula(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(97);
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

//----------------- StplSpatialConjunctionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *> SpatioTemporalPerceptionLogicParser::StplSpatialConjunctionContext::spatialFormula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>();
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialConjunctionContext::spatialFormula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialConjunctionContext::ConjunctionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ConjunctionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialConjunctionContext::StplSpatialConjunctionContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialConjunction(this);
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
//----------------- StplSpatialDisjunctionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext *> SpatioTemporalPerceptionLogicParser::StplSpatialDisjunctionContext::spatialFormula() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>();
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialDisjunctionContext::spatialFormula(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialDisjunctionContext::DisjunctionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::DisjunctionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialDisjunctionContext::StplSpatialDisjunctionContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialDisjunction(this);
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
//----------------- StplSpatialNegationContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialNegationContext::NegationOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::NegationOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialNegationContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialNegationContext::StplSpatialNegationContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialInteriorContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialInteriorContext::InteriorOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::InteriorOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialInteriorContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialInteriorContext::StplSpatialInteriorContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialInteriorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialInterior(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplSpatialClosureContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplSpatialClosureContext::ClosureOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ClosureOperator, 0);
}

SpatioTemporalPerceptionLogicParser::SpatialFormulaContext* SpatioTemporalPerceptionLogicParser::StplSpatialClosureContext::spatialFormula() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::SpatialFormulaContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplSpatialClosureContext::StplSpatialClosureContext(SpatialFormulaContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplSpatialClosureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplSpatialClosure(this);
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
    setState(121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::EventuallyOperator: {
        _localctx = _tracker.createInstance<StplSpatialEventuallyContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(99);
        match(SpatioTemporalPerceptionLogicParser::EventuallyOperator);
        setState(101);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SpatioTemporalPerceptionLogicParser::LeftBracket

        || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis) {
          setState(100);
          interval();
        }
        setState(103);
        spatialFormula(11);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::AlwaysOperator: {
        _localctx = _tracker.createInstance<StplSpatialAlwaysContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(104);
        match(SpatioTemporalPerceptionLogicParser::AlwaysOperator);
        setState(106);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SpatioTemporalPerceptionLogicParser::LeftBracket

        || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis) {
          setState(105);
          interval();
        }
        setState(108);
        spatialFormula(10);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::NextOperator: {
        _localctx = _tracker.createInstance<StplSpatialNextContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(109);
        match(SpatioTemporalPerceptionLogicParser::NextOperator);
        setState(111);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SpatioTemporalPerceptionLogicParser::LeftBracket

        || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis) {
          setState(110);
          interval();
        }
        setState(113);
        spatialFormula(9);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::NegationOperator: {
        _localctx = _tracker.createInstance<StplSpatialNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(114);
        match(SpatioTemporalPerceptionLogicParser::NegationOperator);
        setState(115);
        spatialFormula(6);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::InteriorOperator: {
        _localctx = _tracker.createInstance<StplSpatialInteriorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(116);
        match(SpatioTemporalPerceptionLogicParser::InteriorOperator);
        setState(117);
        spatialFormula(3);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::ClosureOperator: {
        _localctx = _tracker.createInstance<StplSpatialClosureContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(118);
        match(SpatioTemporalPerceptionLogicParser::ClosureOperator);
        setState(119);
        spatialFormula(2);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::BoundingBoxFunction: {
        _localctx = _tracker.createInstance<StplSpatialTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(120);
        spatialTerm();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(141);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<StplSpatialUntilContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(123);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(124);
          match(SpatioTemporalPerceptionLogicParser::UntilOperator);
          setState(126);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SpatioTemporalPerceptionLogicParser::LeftBracket

          || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis) {
            setState(125);
            interval();
          }
          setState(128);
          spatialFormula(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<StplSpatialReleaseContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(129);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(130);
          match(SpatioTemporalPerceptionLogicParser::ReleaseOperator);
          setState(132);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SpatioTemporalPerceptionLogicParser::LeftBracket

          || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis) {
            setState(131);
            interval();
          }
          setState(134);
          spatialFormula(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<StplSpatialConjunctionContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(135);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(136);
          match(SpatioTemporalPerceptionLogicParser::ConjunctionOperator);
          setState(137);
          spatialFormula(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<StplSpatialDisjunctionContext>(_tracker.createInstance<SpatialFormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSpatialFormula);
          setState(138);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(139);
          match(SpatioTemporalPerceptionLogicParser::DisjunctionOperator);
          setState(140);
          spatialFormula(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(145);
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
    setState(146);
    match(SpatioTemporalPerceptionLogicParser::BoundingBoxFunction);
    setState(147);
    match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
    setState(148);
    match(SpatioTemporalPerceptionLogicParser::Identifier);
    setState(149);
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

std::vector<SpatioTemporalPerceptionLogicParser::FnExpressionContext *> SpatioTemporalPerceptionLogicParser::FnComparisonContext::fnExpression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FnExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::FnComparisonContext::fnExpression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(i);
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
    setState(151);
    fnExpression(0);
    setState(152);
    relationalOperator();
    setState(153);
    fnExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnExpressionContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FnExpressionContext::FnExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpatioTemporalPerceptionLogicParser::FnExpressionContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleFnExpression;
}

void SpatioTemporalPerceptionLogicParser::FnExpressionContext::copyFrom(FnExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StplFnExpressionFnInvocationContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FnInvocationContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionFnInvocationContext::fnInvocation() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnInvocationContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionFnInvocationContext::StplFnExpressionFnInvocationContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionFnInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionFnInvocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionMinusContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FnExpressionContext *> SpatioTemporalPerceptionLogicParser::StplFnExpressionMinusContext::fnExpression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FnExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionMinusContext::fnExpression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionMinusContext::SubtractionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::SubtractionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionMinusContext::StplFnExpressionMinusContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionModuloContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FnExpressionContext *> SpatioTemporalPerceptionLogicParser::StplFnExpressionModuloContext::fnExpression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FnExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionModuloContext::fnExpression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionModuloContext::ModuloOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ModuloOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionModuloContext::StplFnExpressionModuloContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionModuloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionModulo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionParenthesesContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionParenthesesContext::fnExpression() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionParenthesesContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionParenthesesContext::StplFnExpressionParenthesesContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionTermContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::TermContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionTermContext::term() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::TermContext>(0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionTermContext::StplFnExpressionTermContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionDivisionContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FnExpressionContext *> SpatioTemporalPerceptionLogicParser::StplFnExpressionDivisionContext::fnExpression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FnExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionDivisionContext::fnExpression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionDivisionContext::DivisionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::DivisionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionDivisionContext::StplFnExpressionDivisionContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionDivisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionDivision(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionTimesContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FnExpressionContext *> SpatioTemporalPerceptionLogicParser::StplFnExpressionTimesContext::fnExpression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FnExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionTimesContext::fnExpression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionTimesContext::MultiplicationOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::MultiplicationOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionTimesContext::StplFnExpressionTimesContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StplFnExpressionPlusContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::FnExpressionContext *> SpatioTemporalPerceptionLogicParser::StplFnExpressionPlusContext::fnExpression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::FnExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::StplFnExpressionPlusContext::fnExpression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::FnExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::StplFnExpressionPlusContext::AdditionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::AdditionOperator, 0);
}

SpatioTemporalPerceptionLogicParser::StplFnExpressionPlusContext::StplFnExpressionPlusContext(FnExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::StplFnExpressionPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitStplFnExpressionPlus(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::fnExpression() {
   return fnExpression(0);
}

SpatioTemporalPerceptionLogicParser::FnExpressionContext* SpatioTemporalPerceptionLogicParser::fnExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SpatioTemporalPerceptionLogicParser::FnExpressionContext *_localctx = _tracker.createInstance<FnExpressionContext>(_ctx, parentState);
  SpatioTemporalPerceptionLogicParser::FnExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, SpatioTemporalPerceptionLogicParser::RuleFnExpression, precedence);

    

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
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StplFnExpressionParenthesesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(156);
      match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
      setState(157);
      fnExpression(0);
      setState(158);
      match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StplFnExpressionFnInvocationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(160);
      fnInvocation();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StplFnExpressionTermContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(161);
      term();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(179);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<StplFnExpressionTimesContext>(_tracker.createInstance<FnExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFnExpression);
          setState(164);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(165);
          match(SpatioTemporalPerceptionLogicParser::MultiplicationOperator);
          setState(166);
          fnExpression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<StplFnExpressionDivisionContext>(_tracker.createInstance<FnExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFnExpression);
          setState(167);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(168);
          match(SpatioTemporalPerceptionLogicParser::DivisionOperator);
          setState(169);
          fnExpression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<StplFnExpressionModuloContext>(_tracker.createInstance<FnExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFnExpression);
          setState(170);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(171);
          match(SpatioTemporalPerceptionLogicParser::ModuloOperator);
          setState(172);
          fnExpression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<StplFnExpressionPlusContext>(_tracker.createInstance<FnExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFnExpression);
          setState(173);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(174);
          match(SpatioTemporalPerceptionLogicParser::AdditionOperator);
          setState(175);
          fnExpression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<StplFnExpressionMinusContext>(_tracker.createInstance<FnExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFnExpression);
          setState(176);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(177);
          match(SpatioTemporalPerceptionLogicParser::SubtractionOperator);
          setState(178);
          fnExpression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FnInvocationContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::FnInvocationContext::FnInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FnInvocationContext::Identifier() {
  return getToken(SpatioTemporalPerceptionLogicParser::Identifier, 0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FnInvocationContext::LeftParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::LeftParenthesis, 0);
}

SpatioTemporalPerceptionLogicParser::ArgumentListContext* SpatioTemporalPerceptionLogicParser::FnInvocationContext::argumentList() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ArgumentListContext>(0);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::FnInvocationContext::RightParenthesis() {
  return getToken(SpatioTemporalPerceptionLogicParser::RightParenthesis, 0);
}


size_t SpatioTemporalPerceptionLogicParser::FnInvocationContext::getRuleIndex() const {
  return SpatioTemporalPerceptionLogicParser::RuleFnInvocation;
}


std::any SpatioTemporalPerceptionLogicParser::FnInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitFnInvocation(this);
  else
    return visitor->visitChildren(this);
}

SpatioTemporalPerceptionLogicParser::FnInvocationContext* SpatioTemporalPerceptionLogicParser::fnInvocation() {
  FnInvocationContext *_localctx = _tracker.createInstance<FnInvocationContext>(_ctx, getState());
  enterRule(_localctx, 12, SpatioTemporalPerceptionLogicParser::RuleFnInvocation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(SpatioTemporalPerceptionLogicParser::Identifier);
    setState(185);
    match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
    setState(186);
    argumentList();
    setState(187);
    match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
   
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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
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
      ((1ULL << _la) & 103079222784) != 0)) {
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
//----------------- ArithmeticTermContext ------------------------------------------------------------------

SpatioTemporalPerceptionLogicParser::TermContext* SpatioTemporalPerceptionLogicParser::ArithmeticTermContext::term() {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::TermContext>(0);
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
//----------------- ArithmeticModuloContext ------------------------------------------------------------------

std::vector<SpatioTemporalPerceptionLogicParser::ExpressionContext *> SpatioTemporalPerceptionLogicParser::ArithmeticModuloContext::expression() {
  return getRuleContexts<SpatioTemporalPerceptionLogicParser::ExpressionContext>();
}

SpatioTemporalPerceptionLogicParser::ExpressionContext* SpatioTemporalPerceptionLogicParser::ArithmeticModuloContext::expression(size_t i) {
  return getRuleContext<SpatioTemporalPerceptionLogicParser::ExpressionContext>(i);
}

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticModuloContext::ModuloOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::ModuloOperator, 0);
}

SpatioTemporalPerceptionLogicParser::ArithmeticModuloContext::ArithmeticModuloContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any SpatioTemporalPerceptionLogicParser::ArithmeticModuloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpatioTemporalPerceptionLogicParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticModulo(this);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, SpatioTemporalPerceptionLogicParser::RuleExpression, precedence);

    

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
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::LeftParenthesis: {
        _localctx = _tracker.createInstance<ArithmeticParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(220);
        match(SpatioTemporalPerceptionLogicParser::LeftParenthesis);
        setState(221);
        expression(0);
        setState(222);
        match(SpatioTemporalPerceptionLogicParser::RightParenthesis);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::Scalar:
      case SpatioTemporalPerceptionLogicParser::Identifier:
      case SpatioTemporalPerceptionLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<ArithmeticTermContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(224);
        term();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(244);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(242);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(227);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(228);
          match(SpatioTemporalPerceptionLogicParser::MultiplicationOperator);
          setState(229);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticDivideContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(230);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(231);
          match(SpatioTemporalPerceptionLogicParser::DivisionOperator);
          setState(232);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticModuloContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(233);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(234);
          match(SpatioTemporalPerceptionLogicParser::ModuloOperator);
          setState(235);
          expression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticPlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(236);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(237);
          match(SpatioTemporalPerceptionLogicParser::AdditionOperator);
          setState(238);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArithmeticMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(239);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(240);
          match(SpatioTemporalPerceptionLogicParser::SubtractionOperator);
          setState(241);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(246);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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

tree::TerminalNode* SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext::SubtractionOperator() {
  return getToken(SpatioTemporalPerceptionLogicParser::SubtractionOperator, 0);
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
  enterRule(_localctx, 26, SpatioTemporalPerceptionLogicParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpatioTemporalPerceptionLogicParser::Identifier: {
        _localctx = _tracker.createInstance<SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(247);
        match(SpatioTemporalPerceptionLogicParser::Identifier);
        break;
      }

      case SpatioTemporalPerceptionLogicParser::Scalar:
      case SpatioTemporalPerceptionLogicParser::SubtractionOperator: {
        _localctx = _tracker.createInstance<SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(249);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SpatioTemporalPerceptionLogicParser::SubtractionOperator) {
          setState(248);
          match(SpatioTemporalPerceptionLogicParser::SubtractionOperator);
        }
        setState(251);
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
  enterRule(_localctx, 28, SpatioTemporalPerceptionLogicParser::RuleInterval);
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
    setState(254);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::LeftBracket

    || _la == SpatioTemporalPerceptionLogicParser::LeftParenthesis)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(255);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::Infinity

    || _la == SpatioTemporalPerceptionLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(256);
    match(SpatioTemporalPerceptionLogicParser::Comma);
    setState(257);
    _la = _input->LA(1);
    if (!(_la == SpatioTemporalPerceptionLogicParser::Infinity

    || _la == SpatioTemporalPerceptionLogicParser::Scalar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(258);
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
    case 5: return fnExpressionSempred(antlrcpp::downCast<FnExpressionContext *>(context), predicateIndex);
    case 12: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 19);
    case 1: return precpred(_ctx, 18);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::spatialFormulaSempred(SpatialFormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::fnExpressionSempred(FnExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 5);
    case 13: return precpred(_ctx, 4);
    case 14: return precpred(_ctx, 3);
    case 15: return precpred(_ctx, 2);
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SpatioTemporalPerceptionLogicParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 5);
    case 18: return precpred(_ctx, 4);
    case 19: return precpred(_ctx, 3);
    case 20: return precpred(_ctx, 2);
    case 21: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void SpatioTemporalPerceptionLogicParser::initialize() {
  ::antlr4::internal::call_once(spatiotemporalperceptionlogicparserParserOnceFlag, spatiotemporalperceptionlogicparserParserInitialize);
}
