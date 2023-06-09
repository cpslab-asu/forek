
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedQualityTemporalLogicLexer.g4 by ANTLR 4.11.1


#include "TimedQualityTemporalLogicLexer.h"


using namespace antlr4;

using namespace gen;


using namespace antlr4;

namespace {

struct TimedQualityTemporalLogicLexerStaticData final {
  TimedQualityTemporalLogicLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TimedQualityTemporalLogicLexerStaticData(const TimedQualityTemporalLogicLexerStaticData&) = delete;
  TimedQualityTemporalLogicLexerStaticData(TimedQualityTemporalLogicLexerStaticData&&) = delete;
  TimedQualityTemporalLogicLexerStaticData& operator=(const TimedQualityTemporalLogicLexerStaticData&) = delete;
  TimedQualityTemporalLogicLexerStaticData& operator=(TimedQualityTemporalLogicLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag timedqualitytemporallogiclexerLexerOnceFlag;
TimedQualityTemporalLogicLexerStaticData *timedqualitytemporallogiclexerLexerStaticData = nullptr;

void timedqualitytemporallogiclexerLexerInitialize() {
  assert(timedqualitytemporallogiclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<TimedQualityTemporalLogicLexerStaticData>(
    std::vector<std::string>{
      "ExistsQuantifier", "ForallQuantifier", "FreezeTime", "LessThanOrEqualTo", 
      "GreaterThanOrEqualTo", "EqualTo", "NotEqualTo", "EventuallyOperator", 
      "AlwaysOperator", "NextOperator", "UntilOperator", "ReleaseOperator", 
      "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "AT", "AMPERSAND", 
      "APOSTROPHE", "ASTERICK", "BAR", "CARET", "COLON", "Comma", "DOLLARSIGN", 
      "DOT", "EQUAL", "EXCLAMATIONMARK", "GRAVEACCENT", "HASH", "MINUS", 
      "PERCENTSIGN", "PLUS", "QUESTIONMARK", "QUOTATIONMARK", "SEMICOLON", 
      "TILDE", "UNDERSCORE", "SLASH", "BACKSLASH", "LeftBrace", "RightBrace", 
      "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", "LeftParenthesis", 
      "RightParenthesis", "BlockComment", "LineComment", "Infinity", "Scalar", 
      "Integer", "DecimalInteger", "BinaryInteger", "OctalInteger", "HexInteger", 
      "Floating", "PointFloat", "ExponentFloat", "Identifier", "LETTER", 
      "NONDIGIT", "BINDIGIT", "HEXDIGIT", "OCTALDIGIT", "FRACTION", "EXPONENT", 
      "NONZERODIGIT", "DIGIT", "Whitespace", "AdditionOperator", "SubtractionOperator", 
      "MultiplicationOperator", "DivisionOperator", "ModulusOperator"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,47,524,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
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
  	7,77,2,78,7,78,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,167,8,0,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,3,1,176,8,1,1,2,1,2,1,2,3,2,181,8,2,1,3,1,3,1,3,1,4,1,4,
  	1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,3,7,206,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,215,8,8,1,9,1,9,1,9,1,9,
  	1,9,3,9,222,8,9,1,10,1,10,1,10,1,10,1,10,1,10,3,10,230,8,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,3,11,240,8,11,1,12,1,12,1,12,1,12,3,12,
  	246,8,12,1,13,1,13,1,13,1,13,1,13,3,13,253,8,13,1,14,1,14,1,14,1,14,3,
  	14,259,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,270,8,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,3,16,278,8,16,1,17,1,17,1,17,1,17,1,17,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,
  	1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,
  	1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,
  	1,44,1,44,1,45,1,45,1,46,1,46,1,47,1,47,1,48,1,48,1,49,1,49,1,50,1,50,
  	1,51,1,51,1,51,1,51,5,51,359,8,51,10,51,12,51,362,9,51,1,51,1,51,1,51,
  	1,51,1,51,1,52,1,52,1,52,1,52,5,52,373,8,52,10,52,12,52,376,9,52,1,52,
  	3,52,379,8,52,1,52,1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,54,1,54,3,54,
  	391,8,54,1,55,1,55,1,55,1,55,3,55,397,8,55,1,56,1,56,5,56,401,8,56,10,
  	56,12,56,404,9,56,1,56,4,56,407,8,56,11,56,12,56,408,3,56,411,8,56,1,
  	57,1,57,1,57,4,57,416,8,57,11,57,12,57,417,1,58,1,58,1,58,4,58,423,8,
  	58,11,58,12,58,424,1,59,1,59,1,59,4,59,430,8,59,11,59,12,59,431,1,60,
  	1,60,3,60,436,8,60,1,61,4,61,439,8,61,11,61,12,61,440,3,61,443,8,61,1,
  	61,1,61,4,61,447,8,61,11,61,12,61,448,1,61,1,61,3,61,453,8,61,1,62,4,
  	62,456,8,62,11,62,12,62,457,1,62,3,62,461,8,62,1,62,1,62,1,63,4,63,466,
  	8,63,11,63,12,63,467,1,63,1,63,5,63,472,8,63,10,63,12,63,475,9,63,1,64,
  	1,64,1,65,1,65,3,65,481,8,65,1,66,1,66,1,67,1,67,1,68,1,68,1,69,1,69,
  	4,69,491,8,69,11,69,12,69,492,1,70,1,70,3,70,497,8,70,1,70,4,70,500,8,
  	70,11,70,12,70,501,1,71,1,71,1,72,1,72,1,73,4,73,509,8,73,11,73,12,73,
  	510,1,73,1,73,1,74,1,74,1,75,1,75,1,76,1,76,1,77,1,77,1,78,1,78,2,360,
  	374,0,79,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,0,41,0,43,0,45,0,47,0,49,0,
  	51,0,53,20,55,0,57,0,59,0,61,0,63,0,65,0,67,0,69,0,71,0,73,0,75,0,77,
  	0,79,0,81,0,83,0,85,0,87,21,89,22,91,23,93,24,95,25,97,26,99,27,101,28,
  	103,29,105,30,107,31,109,32,111,33,113,34,115,35,117,36,119,37,121,38,
  	123,39,125,40,127,41,129,0,131,0,133,0,135,0,137,0,139,0,141,0,143,0,
  	145,0,147,42,149,43,151,44,153,45,155,46,157,47,1,0,12,2,0,66,66,98,98,
  	2,0,79,79,111,111,2,0,88,88,120,120,2,0,65,90,97,122,1,0,48,49,3,0,48,
  	57,65,70,97,102,1,0,48,55,2,0,69,69,101,101,2,0,43,43,45,45,1,0,49,57,
  	1,0,48,57,3,0,9,10,13,13,32,32,532,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,
  	0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,
  	0,53,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,
  	1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,
  	0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,
  	0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,
  	0,0,0,0,127,1,0,0,0,0,147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,
  	0,0,0,0,155,1,0,0,0,0,157,1,0,0,0,1,166,1,0,0,0,3,175,1,0,0,0,5,180,1,
  	0,0,0,7,182,1,0,0,0,9,185,1,0,0,0,11,188,1,0,0,0,13,191,1,0,0,0,15,205,
  	1,0,0,0,17,214,1,0,0,0,19,221,1,0,0,0,21,229,1,0,0,0,23,239,1,0,0,0,25,
  	245,1,0,0,0,27,252,1,0,0,0,29,258,1,0,0,0,31,269,1,0,0,0,33,277,1,0,0,
  	0,35,279,1,0,0,0,37,284,1,0,0,0,39,290,1,0,0,0,41,292,1,0,0,0,43,294,
  	1,0,0,0,45,296,1,0,0,0,47,298,1,0,0,0,49,300,1,0,0,0,51,302,1,0,0,0,53,
  	304,1,0,0,0,55,306,1,0,0,0,57,308,1,0,0,0,59,310,1,0,0,0,61,312,1,0,0,
  	0,63,314,1,0,0,0,65,316,1,0,0,0,67,318,1,0,0,0,69,320,1,0,0,0,71,322,
  	1,0,0,0,73,324,1,0,0,0,75,326,1,0,0,0,77,328,1,0,0,0,79,330,1,0,0,0,81,
  	332,1,0,0,0,83,334,1,0,0,0,85,336,1,0,0,0,87,338,1,0,0,0,89,340,1,0,0,
  	0,91,342,1,0,0,0,93,344,1,0,0,0,95,346,1,0,0,0,97,348,1,0,0,0,99,350,
  	1,0,0,0,101,352,1,0,0,0,103,354,1,0,0,0,105,368,1,0,0,0,107,384,1,0,0,
  	0,109,390,1,0,0,0,111,396,1,0,0,0,113,410,1,0,0,0,115,412,1,0,0,0,117,
  	419,1,0,0,0,119,426,1,0,0,0,121,435,1,0,0,0,123,452,1,0,0,0,125,460,1,
  	0,0,0,127,465,1,0,0,0,129,476,1,0,0,0,131,480,1,0,0,0,133,482,1,0,0,0,
  	135,484,1,0,0,0,137,486,1,0,0,0,139,488,1,0,0,0,141,494,1,0,0,0,143,503,
  	1,0,0,0,145,505,1,0,0,0,147,508,1,0,0,0,149,514,1,0,0,0,151,516,1,0,0,
  	0,153,518,1,0,0,0,155,520,1,0,0,0,157,522,1,0,0,0,159,167,5,69,0,0,160,
  	161,5,101,0,0,161,162,5,120,0,0,162,163,5,105,0,0,163,164,5,115,0,0,164,
  	165,5,116,0,0,165,167,5,115,0,0,166,159,1,0,0,0,166,160,1,0,0,0,167,2,
  	1,0,0,0,168,176,5,65,0,0,169,170,5,102,0,0,170,171,5,111,0,0,171,172,
  	5,114,0,0,172,173,5,97,0,0,173,174,5,108,0,0,174,176,5,108,0,0,175,168,
  	1,0,0,0,175,169,1,0,0,0,176,4,1,0,0,0,177,181,3,39,19,0,178,179,5,97,
  	0,0,179,181,5,116,0,0,180,177,1,0,0,0,180,178,1,0,0,0,181,6,1,0,0,0,182,
  	183,5,60,0,0,183,184,5,61,0,0,184,8,1,0,0,0,185,186,5,62,0,0,186,187,
  	5,61,0,0,187,10,1,0,0,0,188,189,5,61,0,0,189,190,5,61,0,0,190,12,1,0,
  	0,0,191,192,5,33,0,0,192,193,5,61,0,0,193,14,1,0,0,0,194,206,5,70,0,0,
  	195,196,5,101,0,0,196,197,5,118,0,0,197,198,5,101,0,0,198,199,5,110,0,
  	0,199,200,5,116,0,0,200,201,5,117,0,0,201,202,5,97,0,0,202,203,5,108,
  	0,0,203,204,5,108,0,0,204,206,5,121,0,0,205,194,1,0,0,0,205,195,1,0,0,
  	0,206,16,1,0,0,0,207,215,5,71,0,0,208,209,5,97,0,0,209,210,5,108,0,0,
  	210,211,5,119,0,0,211,212,5,97,0,0,212,213,5,121,0,0,213,215,5,115,0,
  	0,214,207,1,0,0,0,214,208,1,0,0,0,215,18,1,0,0,0,216,222,5,88,0,0,217,
  	218,5,110,0,0,218,219,5,101,0,0,219,220,5,120,0,0,220,222,5,116,0,0,221,
  	216,1,0,0,0,221,217,1,0,0,0,222,20,1,0,0,0,223,230,5,85,0,0,224,225,5,
  	117,0,0,225,226,5,110,0,0,226,227,5,116,0,0,227,228,5,105,0,0,228,230,
  	5,108,0,0,229,223,1,0,0,0,229,224,1,0,0,0,230,22,1,0,0,0,231,240,5,82,
  	0,0,232,233,5,114,0,0,233,234,5,101,0,0,234,235,5,108,0,0,235,236,5,101,
  	0,0,236,237,5,97,0,0,237,238,5,115,0,0,238,240,5,101,0,0,239,231,1,0,
  	0,0,239,232,1,0,0,0,240,24,1,0,0,0,241,246,3,61,30,0,242,243,5,110,0,
  	0,243,244,5,111,0,0,244,246,5,116,0,0,245,241,1,0,0,0,245,242,1,0,0,0,
  	246,26,1,0,0,0,247,248,5,38,0,0,248,253,5,38,0,0,249,250,5,97,0,0,250,
  	251,5,110,0,0,251,253,5,100,0,0,252,247,1,0,0,0,252,249,1,0,0,0,253,28,
  	1,0,0,0,254,255,5,124,0,0,255,259,5,124,0,0,256,257,5,111,0,0,257,259,
  	5,114,0,0,258,254,1,0,0,0,258,256,1,0,0,0,259,30,1,0,0,0,260,261,5,45,
  	0,0,261,270,5,62,0,0,262,263,5,105,0,0,263,264,5,109,0,0,264,265,5,112,
  	0,0,265,266,5,108,0,0,266,267,5,105,0,0,267,268,5,101,0,0,268,270,5,115,
  	0,0,269,260,1,0,0,0,269,262,1,0,0,0,270,32,1,0,0,0,271,272,5,60,0,0,272,
  	273,5,45,0,0,273,278,5,62,0,0,274,275,5,105,0,0,275,276,5,102,0,0,276,
  	278,5,102,0,0,277,271,1,0,0,0,277,274,1,0,0,0,278,34,1,0,0,0,279,280,
  	5,116,0,0,280,281,5,114,0,0,281,282,5,117,0,0,282,283,5,101,0,0,283,36,
  	1,0,0,0,284,285,5,102,0,0,285,286,5,97,0,0,286,287,5,108,0,0,287,288,
  	5,115,0,0,288,289,5,101,0,0,289,38,1,0,0,0,290,291,5,64,0,0,291,40,1,
  	0,0,0,292,293,5,38,0,0,293,42,1,0,0,0,294,295,5,39,0,0,295,44,1,0,0,0,
  	296,297,5,42,0,0,297,46,1,0,0,0,298,299,5,124,0,0,299,48,1,0,0,0,300,
  	301,5,94,0,0,301,50,1,0,0,0,302,303,5,58,0,0,303,52,1,0,0,0,304,305,5,
  	44,0,0,305,54,1,0,0,0,306,307,5,36,0,0,307,56,1,0,0,0,308,309,5,46,0,
  	0,309,58,1,0,0,0,310,311,5,61,0,0,311,60,1,0,0,0,312,313,5,33,0,0,313,
  	62,1,0,0,0,314,315,5,96,0,0,315,64,1,0,0,0,316,317,5,35,0,0,317,66,1,
  	0,0,0,318,319,5,45,0,0,319,68,1,0,0,0,320,321,5,37,0,0,321,70,1,0,0,0,
  	322,323,5,43,0,0,323,72,1,0,0,0,324,325,5,63,0,0,325,74,1,0,0,0,326,327,
  	5,34,0,0,327,76,1,0,0,0,328,329,5,59,0,0,329,78,1,0,0,0,330,331,5,126,
  	0,0,331,80,1,0,0,0,332,333,5,95,0,0,333,82,1,0,0,0,334,335,5,47,0,0,335,
  	84,1,0,0,0,336,337,5,92,0,0,337,86,1,0,0,0,338,339,5,123,0,0,339,88,1,
  	0,0,0,340,341,5,125,0,0,341,90,1,0,0,0,342,343,5,91,0,0,343,92,1,0,0,
  	0,344,345,5,93,0,0,345,94,1,0,0,0,346,347,5,60,0,0,347,96,1,0,0,0,348,
  	349,5,62,0,0,349,98,1,0,0,0,350,351,5,40,0,0,351,100,1,0,0,0,352,353,
  	5,41,0,0,353,102,1,0,0,0,354,355,5,47,0,0,355,356,5,42,0,0,356,360,1,
  	0,0,0,357,359,9,0,0,0,358,357,1,0,0,0,359,362,1,0,0,0,360,361,1,0,0,0,
  	360,358,1,0,0,0,361,363,1,0,0,0,362,360,1,0,0,0,363,364,5,42,0,0,364,
  	365,5,47,0,0,365,366,1,0,0,0,366,367,6,51,0,0,367,104,1,0,0,0,368,369,
  	5,47,0,0,369,370,5,47,0,0,370,374,1,0,0,0,371,373,9,0,0,0,372,371,1,0,
  	0,0,373,376,1,0,0,0,374,375,1,0,0,0,374,372,1,0,0,0,375,378,1,0,0,0,376,
  	374,1,0,0,0,377,379,5,13,0,0,378,377,1,0,0,0,378,379,1,0,0,0,379,380,
  	1,0,0,0,380,381,5,10,0,0,381,382,1,0,0,0,382,383,6,52,0,0,383,106,1,0,
  	0,0,384,385,5,105,0,0,385,386,5,110,0,0,386,387,5,102,0,0,387,108,1,0,
  	0,0,388,391,3,111,55,0,389,391,3,121,60,0,390,388,1,0,0,0,390,389,1,0,
  	0,0,391,110,1,0,0,0,392,397,3,113,56,0,393,397,3,115,57,0,394,397,3,117,
  	58,0,395,397,3,119,59,0,396,392,1,0,0,0,396,393,1,0,0,0,396,394,1,0,0,
  	0,396,395,1,0,0,0,397,112,1,0,0,0,398,402,3,143,71,0,399,401,3,145,72,
  	0,400,399,1,0,0,0,401,404,1,0,0,0,402,400,1,0,0,0,402,403,1,0,0,0,403,
  	411,1,0,0,0,404,402,1,0,0,0,405,407,5,48,0,0,406,405,1,0,0,0,407,408,
  	1,0,0,0,408,406,1,0,0,0,408,409,1,0,0,0,409,411,1,0,0,0,410,398,1,0,0,
  	0,410,406,1,0,0,0,411,114,1,0,0,0,412,413,5,48,0,0,413,415,7,0,0,0,414,
  	416,3,133,66,0,415,414,1,0,0,0,416,417,1,0,0,0,417,415,1,0,0,0,417,418,
  	1,0,0,0,418,116,1,0,0,0,419,420,5,48,0,0,420,422,7,1,0,0,421,423,3,137,
  	68,0,422,421,1,0,0,0,423,424,1,0,0,0,424,422,1,0,0,0,424,425,1,0,0,0,
  	425,118,1,0,0,0,426,427,5,48,0,0,427,429,7,2,0,0,428,430,3,135,67,0,429,
  	428,1,0,0,0,430,431,1,0,0,0,431,429,1,0,0,0,431,432,1,0,0,0,432,120,1,
  	0,0,0,433,436,3,123,61,0,434,436,3,125,62,0,435,433,1,0,0,0,435,434,1,
  	0,0,0,436,122,1,0,0,0,437,439,3,145,72,0,438,437,1,0,0,0,439,440,1,0,
  	0,0,440,438,1,0,0,0,440,441,1,0,0,0,441,443,1,0,0,0,442,438,1,0,0,0,442,
  	443,1,0,0,0,443,444,1,0,0,0,444,453,3,139,69,0,445,447,3,145,72,0,446,
  	445,1,0,0,0,447,448,1,0,0,0,448,446,1,0,0,0,448,449,1,0,0,0,449,450,1,
  	0,0,0,450,451,5,46,0,0,451,453,1,0,0,0,452,442,1,0,0,0,452,446,1,0,0,
  	0,453,124,1,0,0,0,454,456,3,145,72,0,455,454,1,0,0,0,456,457,1,0,0,0,
  	457,455,1,0,0,0,457,458,1,0,0,0,458,461,1,0,0,0,459,461,3,123,61,0,460,
  	455,1,0,0,0,460,459,1,0,0,0,461,462,1,0,0,0,462,463,3,141,70,0,463,126,
  	1,0,0,0,464,466,3,131,65,0,465,464,1,0,0,0,466,467,1,0,0,0,467,465,1,
  	0,0,0,467,468,1,0,0,0,468,473,1,0,0,0,469,472,3,131,65,0,470,472,3,145,
  	72,0,471,469,1,0,0,0,471,470,1,0,0,0,472,475,1,0,0,0,473,471,1,0,0,0,
  	473,474,1,0,0,0,474,128,1,0,0,0,475,473,1,0,0,0,476,477,7,3,0,0,477,130,
  	1,0,0,0,478,481,3,129,64,0,479,481,5,95,0,0,480,478,1,0,0,0,480,479,1,
  	0,0,0,481,132,1,0,0,0,482,483,7,4,0,0,483,134,1,0,0,0,484,485,7,5,0,0,
  	485,136,1,0,0,0,486,487,7,6,0,0,487,138,1,0,0,0,488,490,5,46,0,0,489,
  	491,3,145,72,0,490,489,1,0,0,0,491,492,1,0,0,0,492,490,1,0,0,0,492,493,
  	1,0,0,0,493,140,1,0,0,0,494,496,7,7,0,0,495,497,7,8,0,0,496,495,1,0,0,
  	0,496,497,1,0,0,0,497,499,1,0,0,0,498,500,3,145,72,0,499,498,1,0,0,0,
  	500,501,1,0,0,0,501,499,1,0,0,0,501,502,1,0,0,0,502,142,1,0,0,0,503,504,
  	7,9,0,0,504,144,1,0,0,0,505,506,7,10,0,0,506,146,1,0,0,0,507,509,7,11,
  	0,0,508,507,1,0,0,0,509,510,1,0,0,0,510,508,1,0,0,0,510,511,1,0,0,0,511,
  	512,1,0,0,0,512,513,6,73,0,0,513,148,1,0,0,0,514,515,3,71,35,0,515,150,
  	1,0,0,0,516,517,3,67,33,0,517,152,1,0,0,0,518,519,3,45,22,0,519,154,1,
  	0,0,0,520,521,3,83,41,0,521,156,1,0,0,0,522,523,3,69,34,0,523,158,1,0,
  	0,0,40,0,166,175,180,205,214,221,229,239,245,252,258,269,277,360,374,
  	378,390,396,402,408,410,417,424,431,435,440,442,448,452,457,460,467,471,
  	473,480,492,496,501,510,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  timedqualitytemporallogiclexerLexerStaticData = staticData.release();
}

}

TimedQualityTemporalLogicLexer::TimedQualityTemporalLogicLexer(CharStream *input) : Lexer(input) {
  TimedQualityTemporalLogicLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *timedqualitytemporallogiclexerLexerStaticData->atn, timedqualitytemporallogiclexerLexerStaticData->decisionToDFA, timedqualitytemporallogiclexerLexerStaticData->sharedContextCache);
}

TimedQualityTemporalLogicLexer::~TimedQualityTemporalLogicLexer() {
  delete _interpreter;
}

std::string TimedQualityTemporalLogicLexer::getGrammarFileName() const {
  return "TimedQualityTemporalLogicLexer.g4";
}

const std::vector<std::string>& TimedQualityTemporalLogicLexer::getRuleNames() const {
  return timedqualitytemporallogiclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& TimedQualityTemporalLogicLexer::getChannelNames() const {
  return timedqualitytemporallogiclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& TimedQualityTemporalLogicLexer::getModeNames() const {
  return timedqualitytemporallogiclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& TimedQualityTemporalLogicLexer::getVocabulary() const {
  return timedqualitytemporallogiclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TimedQualityTemporalLogicLexer::getSerializedATN() const {
  return timedqualitytemporallogiclexerLexerStaticData->serializedATN;
}

const atn::ATN& TimedQualityTemporalLogicLexer::getATN() const {
  return *timedqualitytemporallogiclexerLexerStaticData->atn;
}




void TimedQualityTemporalLogicLexer::initialize() {
  ::antlr4::internal::call_once(timedqualitytemporallogiclexerLexerOnceFlag, timedqualitytemporallogiclexerLexerInitialize);
}
