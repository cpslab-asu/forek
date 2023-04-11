
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicLexer.g4 by ANTLR 4.11.1


#include "SpatioTemporalPerceptionLogicLexer.h"


using namespace antlr4;

using namespace gen;


using namespace antlr4;

namespace {

struct SpatioTemporalPerceptionLogicLexerStaticData final {
  SpatioTemporalPerceptionLogicLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SpatioTemporalPerceptionLogicLexerStaticData(const SpatioTemporalPerceptionLogicLexerStaticData&) = delete;
  SpatioTemporalPerceptionLogicLexerStaticData(SpatioTemporalPerceptionLogicLexerStaticData&&) = delete;
  SpatioTemporalPerceptionLogicLexerStaticData& operator=(const SpatioTemporalPerceptionLogicLexerStaticData&) = delete;
  SpatioTemporalPerceptionLogicLexerStaticData& operator=(SpatioTemporalPerceptionLogicLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag spatiotemporalperceptionlogiclexerLexerOnceFlag;
SpatioTemporalPerceptionLogicLexerStaticData *spatiotemporalperceptionlogiclexerLexerStaticData = nullptr;

void spatiotemporalperceptionlogiclexerLexerInitialize() {
  assert(spatiotemporalperceptionlogiclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<SpatioTemporalPerceptionLogicLexerStaticData>(
    std::vector<std::string>{
      "SpatialExists", "SpatialForall", "InteriorOperator", "ClosureOperator", 
      "BoundingBoxFunction", "AreaFunction", "ExistsQuantifier", "ForallQuantifier", 
      "FreezeTime", "LessThanOrEqualTo", "GreaterThanOrEqualTo", "EqualTo", 
      "NotEqualTo", "EventuallyOperator", "AlwaysOperator", "NextOperator", 
      "UntilOperator", "ReleaseOperator", "NegationOperator", "ConjunctionOperator", 
      "DisjunctionOperator", "ImplicationOperator", "IffOperator", "True", 
      "False", "AT", "AMPERSAND", "APOSTROPHE", "ASTERICK", "BAR", "CARET", 
      "COLON", "Comma", "DOLLARSIGN", "DOT", "EQUAL", "EXCLAMATIONMARK", 
      "GRAVEACCENT", "HASH", "MINUS", "PERCENTSIGN", "PLUS", "QUESTIONMARK", 
      "QUOTATIONMARK", "SEMICOLON", "TILDE", "UNDERSCORE", "SLASH", "BACKSLASH", 
      "LeftBrace", "RightBrace", "LeftBracket", "RightBracket", "LeftChevron", 
      "RightChevron", "LeftParenthesis", "RightParenthesis", "BlockComment", 
      "LineComment", "Infinity", "Scalar", "Integer", "DecimalInteger", 
      "BinaryInteger", "OctalInteger", "HexInteger", "Floating", "PointFloat", 
      "ExponentFloat", "Identifier", "LETTER", "NONDIGIT", "BINDIGIT", "HEXDIGIT", 
      "OCTALDIGIT", "FRACTION", "EXPONENT", "NONZERODIGIT", "DIGIT", "Whitespace", 
      "AdditionOperator", "SubtractionOperator", "MultiplicationOperator", 
      "DivisionOperator", "ModulusOperator"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,53,591,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,182,8,0,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,194,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,3,2,205,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,215,8,3,1,4,1,4,
  	1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,234,8,
  	6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,243,8,7,1,8,1,8,1,8,3,8,248,8,8,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,273,8,13,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,3,14,282,8,14,1,15,1,15,1,15,1,15,1,15,3,15,289,8,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,3,16,297,8,16,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,3,17,307,8,17,1,18,1,18,1,18,1,18,3,18,313,8,18,1,19,1,
  	19,1,19,1,19,1,19,3,19,320,8,19,1,20,1,20,1,20,1,20,3,20,326,8,20,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,337,8,21,1,22,1,22,1,22,
  	1,22,1,22,1,22,3,22,345,8,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,
  	1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,
  	1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,44,
  	1,44,1,45,1,45,1,46,1,46,1,47,1,47,1,48,1,48,1,49,1,49,1,50,1,50,1,51,
  	1,51,1,52,1,52,1,53,1,53,1,54,1,54,1,55,1,55,1,56,1,56,1,57,1,57,1,57,
  	1,57,5,57,426,8,57,10,57,12,57,429,9,57,1,57,1,57,1,57,1,57,1,57,1,58,
  	1,58,1,58,1,58,5,58,440,8,58,10,58,12,58,443,9,58,1,58,3,58,446,8,58,
  	1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,60,1,60,3,60,458,8,60,1,61,
  	1,61,1,61,1,61,3,61,464,8,61,1,62,1,62,5,62,468,8,62,10,62,12,62,471,
  	9,62,1,62,4,62,474,8,62,11,62,12,62,475,3,62,478,8,62,1,63,1,63,1,63,
  	4,63,483,8,63,11,63,12,63,484,1,64,1,64,1,64,4,64,490,8,64,11,64,12,64,
  	491,1,65,1,65,1,65,4,65,497,8,65,11,65,12,65,498,1,66,1,66,3,66,503,8,
  	66,1,67,4,67,506,8,67,11,67,12,67,507,3,67,510,8,67,1,67,1,67,4,67,514,
  	8,67,11,67,12,67,515,1,67,1,67,3,67,520,8,67,1,68,4,68,523,8,68,11,68,
  	12,68,524,1,68,3,68,528,8,68,1,68,1,68,1,69,4,69,533,8,69,11,69,12,69,
  	534,1,69,1,69,5,69,539,8,69,10,69,12,69,542,9,69,1,70,1,70,1,71,1,71,
  	3,71,548,8,71,1,72,1,72,1,73,1,73,1,74,1,74,1,75,1,75,4,75,558,8,75,11,
  	75,12,75,559,1,76,1,76,3,76,564,8,76,1,76,4,76,567,8,76,11,76,12,76,568,
  	1,77,1,77,1,78,1,78,1,79,4,79,576,8,79,11,79,12,79,577,1,79,1,79,1,80,
  	1,80,1,81,1,81,1,82,1,82,1,83,1,83,1,84,1,84,2,427,441,0,85,1,1,3,2,5,
  	3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,0,53,0,55,
  	0,57,0,59,0,61,0,63,0,65,26,67,0,69,0,71,0,73,0,75,0,77,0,79,0,81,0,83,
  	0,85,0,87,0,89,0,91,0,93,0,95,0,97,0,99,27,101,28,103,29,105,30,107,31,
  	109,32,111,33,113,34,115,35,117,36,119,37,121,38,123,39,125,40,127,41,
  	129,42,131,43,133,44,135,45,137,46,139,47,141,0,143,0,145,0,147,0,149,
  	0,151,0,153,0,155,0,157,0,159,48,161,49,163,50,165,51,167,52,169,53,1,
  	0,12,2,0,66,66,98,98,2,0,79,79,111,111,2,0,88,88,120,120,2,0,65,90,97,
  	122,1,0,48,49,3,0,48,57,65,70,97,102,1,0,48,55,2,0,69,69,101,101,2,0,
  	43,43,45,45,1,0,49,57,1,0,48,57,3,0,9,10,13,13,32,32,603,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,65,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,
  	0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,
  	0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,
  	0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,
  	0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,0,0,139,1,0,0,0,0,159,1,0,0,0,
  	0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,1,0,0,0,0,169,1,0,0,0,
  	1,181,1,0,0,0,3,193,1,0,0,0,5,204,1,0,0,0,7,214,1,0,0,0,9,216,1,0,0,0,
  	11,221,1,0,0,0,13,233,1,0,0,0,15,242,1,0,0,0,17,247,1,0,0,0,19,249,1,
  	0,0,0,21,252,1,0,0,0,23,255,1,0,0,0,25,258,1,0,0,0,27,272,1,0,0,0,29,
  	281,1,0,0,0,31,288,1,0,0,0,33,296,1,0,0,0,35,306,1,0,0,0,37,312,1,0,0,
  	0,39,319,1,0,0,0,41,325,1,0,0,0,43,336,1,0,0,0,45,344,1,0,0,0,47,346,
  	1,0,0,0,49,351,1,0,0,0,51,357,1,0,0,0,53,359,1,0,0,0,55,361,1,0,0,0,57,
  	363,1,0,0,0,59,365,1,0,0,0,61,367,1,0,0,0,63,369,1,0,0,0,65,371,1,0,0,
  	0,67,373,1,0,0,0,69,375,1,0,0,0,71,377,1,0,0,0,73,379,1,0,0,0,75,381,
  	1,0,0,0,77,383,1,0,0,0,79,385,1,0,0,0,81,387,1,0,0,0,83,389,1,0,0,0,85,
  	391,1,0,0,0,87,393,1,0,0,0,89,395,1,0,0,0,91,397,1,0,0,0,93,399,1,0,0,
  	0,95,401,1,0,0,0,97,403,1,0,0,0,99,405,1,0,0,0,101,407,1,0,0,0,103,409,
  	1,0,0,0,105,411,1,0,0,0,107,413,1,0,0,0,109,415,1,0,0,0,111,417,1,0,0,
  	0,113,419,1,0,0,0,115,421,1,0,0,0,117,435,1,0,0,0,119,451,1,0,0,0,121,
  	457,1,0,0,0,123,463,1,0,0,0,125,477,1,0,0,0,127,479,1,0,0,0,129,486,1,
  	0,0,0,131,493,1,0,0,0,133,502,1,0,0,0,135,519,1,0,0,0,137,527,1,0,0,0,
  	139,532,1,0,0,0,141,543,1,0,0,0,143,547,1,0,0,0,145,549,1,0,0,0,147,551,
  	1,0,0,0,149,553,1,0,0,0,151,555,1,0,0,0,153,561,1,0,0,0,155,570,1,0,0,
  	0,157,572,1,0,0,0,159,575,1,0,0,0,161,581,1,0,0,0,163,583,1,0,0,0,165,
  	585,1,0,0,0,167,587,1,0,0,0,169,589,1,0,0,0,171,172,5,83,0,0,172,182,
  	5,69,0,0,173,174,5,110,0,0,174,175,5,111,0,0,175,176,5,110,0,0,176,177,
  	5,101,0,0,177,178,5,109,0,0,178,179,5,112,0,0,179,180,5,116,0,0,180,182,
  	5,121,0,0,181,171,1,0,0,0,181,173,1,0,0,0,182,2,1,0,0,0,183,184,5,83,
  	0,0,184,194,5,65,0,0,185,186,5,117,0,0,186,187,5,110,0,0,187,188,5,105,
  	0,0,188,189,5,118,0,0,189,190,5,101,0,0,190,191,5,114,0,0,191,192,5,115,
  	0,0,192,194,5,101,0,0,193,183,1,0,0,0,193,185,1,0,0,0,194,4,1,0,0,0,195,
  	205,5,73,0,0,196,197,5,105,0,0,197,198,5,110,0,0,198,199,5,116,0,0,199,
  	200,5,101,0,0,200,201,5,114,0,0,201,202,5,105,0,0,202,203,5,111,0,0,203,
  	205,5,114,0,0,204,195,1,0,0,0,204,196,1,0,0,0,205,6,1,0,0,0,206,215,5,
  	67,0,0,207,208,5,99,0,0,208,209,5,108,0,0,209,210,5,111,0,0,210,211,5,
  	115,0,0,211,212,5,117,0,0,212,213,5,114,0,0,213,215,5,101,0,0,214,206,
  	1,0,0,0,214,207,1,0,0,0,215,8,1,0,0,0,216,217,5,66,0,0,217,218,5,66,0,
  	0,218,219,5,79,0,0,219,220,5,88,0,0,220,10,1,0,0,0,221,222,5,65,0,0,222,
  	223,5,82,0,0,223,224,5,69,0,0,224,225,5,65,0,0,225,12,1,0,0,0,226,234,
  	5,69,0,0,227,228,5,101,0,0,228,229,5,120,0,0,229,230,5,105,0,0,230,231,
  	5,115,0,0,231,232,5,116,0,0,232,234,5,115,0,0,233,226,1,0,0,0,233,227,
  	1,0,0,0,234,14,1,0,0,0,235,243,5,65,0,0,236,237,5,102,0,0,237,238,5,111,
  	0,0,238,239,5,114,0,0,239,240,5,97,0,0,240,241,5,108,0,0,241,243,5,108,
  	0,0,242,235,1,0,0,0,242,236,1,0,0,0,243,16,1,0,0,0,244,248,3,51,25,0,
  	245,246,5,97,0,0,246,248,5,116,0,0,247,244,1,0,0,0,247,245,1,0,0,0,248,
  	18,1,0,0,0,249,250,5,60,0,0,250,251,5,61,0,0,251,20,1,0,0,0,252,253,5,
  	62,0,0,253,254,5,61,0,0,254,22,1,0,0,0,255,256,5,61,0,0,256,257,5,61,
  	0,0,257,24,1,0,0,0,258,259,5,33,0,0,259,260,5,61,0,0,260,26,1,0,0,0,261,
  	273,5,70,0,0,262,263,5,101,0,0,263,264,5,118,0,0,264,265,5,101,0,0,265,
  	266,5,110,0,0,266,267,5,116,0,0,267,268,5,117,0,0,268,269,5,97,0,0,269,
  	270,5,108,0,0,270,271,5,108,0,0,271,273,5,121,0,0,272,261,1,0,0,0,272,
  	262,1,0,0,0,273,28,1,0,0,0,274,282,5,71,0,0,275,276,5,97,0,0,276,277,
  	5,108,0,0,277,278,5,119,0,0,278,279,5,97,0,0,279,280,5,121,0,0,280,282,
  	5,115,0,0,281,274,1,0,0,0,281,275,1,0,0,0,282,30,1,0,0,0,283,289,5,88,
  	0,0,284,285,5,110,0,0,285,286,5,101,0,0,286,287,5,120,0,0,287,289,5,116,
  	0,0,288,283,1,0,0,0,288,284,1,0,0,0,289,32,1,0,0,0,290,297,5,85,0,0,291,
  	292,5,117,0,0,292,293,5,110,0,0,293,294,5,116,0,0,294,295,5,105,0,0,295,
  	297,5,108,0,0,296,290,1,0,0,0,296,291,1,0,0,0,297,34,1,0,0,0,298,307,
  	5,82,0,0,299,300,5,114,0,0,300,301,5,101,0,0,301,302,5,108,0,0,302,303,
  	5,101,0,0,303,304,5,97,0,0,304,305,5,115,0,0,305,307,5,101,0,0,306,298,
  	1,0,0,0,306,299,1,0,0,0,307,36,1,0,0,0,308,313,3,73,36,0,309,310,5,110,
  	0,0,310,311,5,111,0,0,311,313,5,116,0,0,312,308,1,0,0,0,312,309,1,0,0,
  	0,313,38,1,0,0,0,314,315,5,38,0,0,315,320,5,38,0,0,316,317,5,97,0,0,317,
  	318,5,110,0,0,318,320,5,100,0,0,319,314,1,0,0,0,319,316,1,0,0,0,320,40,
  	1,0,0,0,321,322,5,124,0,0,322,326,5,124,0,0,323,324,5,111,0,0,324,326,
  	5,114,0,0,325,321,1,0,0,0,325,323,1,0,0,0,326,42,1,0,0,0,327,328,5,45,
  	0,0,328,337,5,62,0,0,329,330,5,105,0,0,330,331,5,109,0,0,331,332,5,112,
  	0,0,332,333,5,108,0,0,333,334,5,105,0,0,334,335,5,101,0,0,335,337,5,115,
  	0,0,336,327,1,0,0,0,336,329,1,0,0,0,337,44,1,0,0,0,338,339,5,60,0,0,339,
  	340,5,45,0,0,340,345,5,62,0,0,341,342,5,105,0,0,342,343,5,102,0,0,343,
  	345,5,102,0,0,344,338,1,0,0,0,344,341,1,0,0,0,345,46,1,0,0,0,346,347,
  	5,116,0,0,347,348,5,114,0,0,348,349,5,117,0,0,349,350,5,101,0,0,350,48,
  	1,0,0,0,351,352,5,102,0,0,352,353,5,97,0,0,353,354,5,108,0,0,354,355,
  	5,115,0,0,355,356,5,101,0,0,356,50,1,0,0,0,357,358,5,64,0,0,358,52,1,
  	0,0,0,359,360,5,38,0,0,360,54,1,0,0,0,361,362,5,39,0,0,362,56,1,0,0,0,
  	363,364,5,42,0,0,364,58,1,0,0,0,365,366,5,124,0,0,366,60,1,0,0,0,367,
  	368,5,94,0,0,368,62,1,0,0,0,369,370,5,58,0,0,370,64,1,0,0,0,371,372,5,
  	44,0,0,372,66,1,0,0,0,373,374,5,36,0,0,374,68,1,0,0,0,375,376,5,46,0,
  	0,376,70,1,0,0,0,377,378,5,61,0,0,378,72,1,0,0,0,379,380,5,33,0,0,380,
  	74,1,0,0,0,381,382,5,96,0,0,382,76,1,0,0,0,383,384,5,35,0,0,384,78,1,
  	0,0,0,385,386,5,45,0,0,386,80,1,0,0,0,387,388,5,37,0,0,388,82,1,0,0,0,
  	389,390,5,43,0,0,390,84,1,0,0,0,391,392,5,63,0,0,392,86,1,0,0,0,393,394,
  	5,34,0,0,394,88,1,0,0,0,395,396,5,59,0,0,396,90,1,0,0,0,397,398,5,126,
  	0,0,398,92,1,0,0,0,399,400,5,95,0,0,400,94,1,0,0,0,401,402,5,47,0,0,402,
  	96,1,0,0,0,403,404,5,92,0,0,404,98,1,0,0,0,405,406,5,123,0,0,406,100,
  	1,0,0,0,407,408,5,125,0,0,408,102,1,0,0,0,409,410,5,91,0,0,410,104,1,
  	0,0,0,411,412,5,93,0,0,412,106,1,0,0,0,413,414,5,60,0,0,414,108,1,0,0,
  	0,415,416,5,62,0,0,416,110,1,0,0,0,417,418,5,40,0,0,418,112,1,0,0,0,419,
  	420,5,41,0,0,420,114,1,0,0,0,421,422,5,47,0,0,422,423,5,42,0,0,423,427,
  	1,0,0,0,424,426,9,0,0,0,425,424,1,0,0,0,426,429,1,0,0,0,427,428,1,0,0,
  	0,427,425,1,0,0,0,428,430,1,0,0,0,429,427,1,0,0,0,430,431,5,42,0,0,431,
  	432,5,47,0,0,432,433,1,0,0,0,433,434,6,57,0,0,434,116,1,0,0,0,435,436,
  	5,47,0,0,436,437,5,47,0,0,437,441,1,0,0,0,438,440,9,0,0,0,439,438,1,0,
  	0,0,440,443,1,0,0,0,441,442,1,0,0,0,441,439,1,0,0,0,442,445,1,0,0,0,443,
  	441,1,0,0,0,444,446,5,13,0,0,445,444,1,0,0,0,445,446,1,0,0,0,446,447,
  	1,0,0,0,447,448,5,10,0,0,448,449,1,0,0,0,449,450,6,58,0,0,450,118,1,0,
  	0,0,451,452,5,105,0,0,452,453,5,110,0,0,453,454,5,102,0,0,454,120,1,0,
  	0,0,455,458,3,123,61,0,456,458,3,133,66,0,457,455,1,0,0,0,457,456,1,0,
  	0,0,458,122,1,0,0,0,459,464,3,125,62,0,460,464,3,127,63,0,461,464,3,129,
  	64,0,462,464,3,131,65,0,463,459,1,0,0,0,463,460,1,0,0,0,463,461,1,0,0,
  	0,463,462,1,0,0,0,464,124,1,0,0,0,465,469,3,155,77,0,466,468,3,157,78,
  	0,467,466,1,0,0,0,468,471,1,0,0,0,469,467,1,0,0,0,469,470,1,0,0,0,470,
  	478,1,0,0,0,471,469,1,0,0,0,472,474,5,48,0,0,473,472,1,0,0,0,474,475,
  	1,0,0,0,475,473,1,0,0,0,475,476,1,0,0,0,476,478,1,0,0,0,477,465,1,0,0,
  	0,477,473,1,0,0,0,478,126,1,0,0,0,479,480,5,48,0,0,480,482,7,0,0,0,481,
  	483,3,145,72,0,482,481,1,0,0,0,483,484,1,0,0,0,484,482,1,0,0,0,484,485,
  	1,0,0,0,485,128,1,0,0,0,486,487,5,48,0,0,487,489,7,1,0,0,488,490,3,149,
  	74,0,489,488,1,0,0,0,490,491,1,0,0,0,491,489,1,0,0,0,491,492,1,0,0,0,
  	492,130,1,0,0,0,493,494,5,48,0,0,494,496,7,2,0,0,495,497,3,147,73,0,496,
  	495,1,0,0,0,497,498,1,0,0,0,498,496,1,0,0,0,498,499,1,0,0,0,499,132,1,
  	0,0,0,500,503,3,135,67,0,501,503,3,137,68,0,502,500,1,0,0,0,502,501,1,
  	0,0,0,503,134,1,0,0,0,504,506,3,157,78,0,505,504,1,0,0,0,506,507,1,0,
  	0,0,507,505,1,0,0,0,507,508,1,0,0,0,508,510,1,0,0,0,509,505,1,0,0,0,509,
  	510,1,0,0,0,510,511,1,0,0,0,511,520,3,151,75,0,512,514,3,157,78,0,513,
  	512,1,0,0,0,514,515,1,0,0,0,515,513,1,0,0,0,515,516,1,0,0,0,516,517,1,
  	0,0,0,517,518,5,46,0,0,518,520,1,0,0,0,519,509,1,0,0,0,519,513,1,0,0,
  	0,520,136,1,0,0,0,521,523,3,157,78,0,522,521,1,0,0,0,523,524,1,0,0,0,
  	524,522,1,0,0,0,524,525,1,0,0,0,525,528,1,0,0,0,526,528,3,135,67,0,527,
  	522,1,0,0,0,527,526,1,0,0,0,528,529,1,0,0,0,529,530,3,153,76,0,530,138,
  	1,0,0,0,531,533,3,143,71,0,532,531,1,0,0,0,533,534,1,0,0,0,534,532,1,
  	0,0,0,534,535,1,0,0,0,535,540,1,0,0,0,536,539,3,143,71,0,537,539,3,157,
  	78,0,538,536,1,0,0,0,538,537,1,0,0,0,539,542,1,0,0,0,540,538,1,0,0,0,
  	540,541,1,0,0,0,541,140,1,0,0,0,542,540,1,0,0,0,543,544,7,3,0,0,544,142,
  	1,0,0,0,545,548,3,141,70,0,546,548,5,95,0,0,547,545,1,0,0,0,547,546,1,
  	0,0,0,548,144,1,0,0,0,549,550,7,4,0,0,550,146,1,0,0,0,551,552,7,5,0,0,
  	552,148,1,0,0,0,553,554,7,6,0,0,554,150,1,0,0,0,555,557,5,46,0,0,556,
  	558,3,157,78,0,557,556,1,0,0,0,558,559,1,0,0,0,559,557,1,0,0,0,559,560,
  	1,0,0,0,560,152,1,0,0,0,561,563,7,7,0,0,562,564,7,8,0,0,563,562,1,0,0,
  	0,563,564,1,0,0,0,564,566,1,0,0,0,565,567,3,157,78,0,566,565,1,0,0,0,
  	567,568,1,0,0,0,568,566,1,0,0,0,568,569,1,0,0,0,569,154,1,0,0,0,570,571,
  	7,9,0,0,571,156,1,0,0,0,572,573,7,10,0,0,573,158,1,0,0,0,574,576,7,11,
  	0,0,575,574,1,0,0,0,576,577,1,0,0,0,577,575,1,0,0,0,577,578,1,0,0,0,578,
  	579,1,0,0,0,579,580,6,79,0,0,580,160,1,0,0,0,581,582,3,83,41,0,582,162,
  	1,0,0,0,583,584,3,79,39,0,584,164,1,0,0,0,585,586,3,57,28,0,586,166,1,
  	0,0,0,587,588,3,95,47,0,588,168,1,0,0,0,589,590,3,81,40,0,590,170,1,0,
  	0,0,44,0,181,193,204,214,233,242,247,272,281,288,296,306,312,319,325,
  	336,344,427,441,445,457,463,469,475,477,484,491,498,502,507,509,515,519,
  	524,527,534,538,540,547,559,563,568,577,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  spatiotemporalperceptionlogiclexerLexerStaticData = staticData.release();
}

}

SpatioTemporalPerceptionLogicLexer::SpatioTemporalPerceptionLogicLexer(CharStream *input) : Lexer(input) {
  SpatioTemporalPerceptionLogicLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *spatiotemporalperceptionlogiclexerLexerStaticData->atn, spatiotemporalperceptionlogiclexerLexerStaticData->decisionToDFA, spatiotemporalperceptionlogiclexerLexerStaticData->sharedContextCache);
}

SpatioTemporalPerceptionLogicLexer::~SpatioTemporalPerceptionLogicLexer() {
  delete _interpreter;
}

std::string SpatioTemporalPerceptionLogicLexer::getGrammarFileName() const {
  return "SpatioTemporalPerceptionLogicLexer.g4";
}

const std::vector<std::string>& SpatioTemporalPerceptionLogicLexer::getRuleNames() const {
  return spatiotemporalperceptionlogiclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SpatioTemporalPerceptionLogicLexer::getChannelNames() const {
  return spatiotemporalperceptionlogiclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SpatioTemporalPerceptionLogicLexer::getModeNames() const {
  return spatiotemporalperceptionlogiclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SpatioTemporalPerceptionLogicLexer::getVocabulary() const {
  return spatiotemporalperceptionlogiclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SpatioTemporalPerceptionLogicLexer::getSerializedATN() const {
  return spatiotemporalperceptionlogiclexerLexerStaticData->serializedATN;
}

const atn::ATN& SpatioTemporalPerceptionLogicLexer::getATN() const {
  return *spatiotemporalperceptionlogiclexerLexerStaticData->atn;
}




void SpatioTemporalPerceptionLogicLexer::initialize() {
  ::antlr4::internal::call_once(spatiotemporalperceptionlogiclexerLexerOnceFlag, spatiotemporalperceptionlogiclexerLexerInitialize);
}
