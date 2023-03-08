
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/PropositionalLogicLexer.g4 by ANTLR 4.11.1


#include "PropositionalLogicLexer.h"


using namespace antlr4;

using namespace gen;


using namespace antlr4;

namespace {

struct PropositionalLogicLexerStaticData final {
  PropositionalLogicLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PropositionalLogicLexerStaticData(const PropositionalLogicLexerStaticData&) = delete;
  PropositionalLogicLexerStaticData(PropositionalLogicLexerStaticData&&) = delete;
  PropositionalLogicLexerStaticData& operator=(const PropositionalLogicLexerStaticData&) = delete;
  PropositionalLogicLexerStaticData& operator=(PropositionalLogicLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag propositionallogiclexerLexerOnceFlag;
PropositionalLogicLexerStaticData *propositionallogiclexerLexerStaticData = nullptr;

void propositionallogiclexerLexerInitialize() {
  assert(propositionallogiclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<PropositionalLogicLexerStaticData>(
    std::vector<std::string>{
      "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "At", "Ampersand", 
      "Apostrophe", "Asterick", "Bar", "Caret", "Colon", "Comma", "DollarSign", 
      "Dot", "Equal", "ExclamationMark", "GraveAccent", "Hash", "Minus", 
      "PercentSign", "Plus", "QuestionMark", "QuotationMark", "Semicolon", 
      "Tilde", "Underscore", "Slash", "BackSlash", "LeftBrace", "RightBrace", 
      "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", "LeftParenthesis", 
      "RightParenthesis", "BlockComment", "LineComment", "Scalar", "Integer", 
      "DecimalInteger", "BinaryInteger", "OctalInteger", "HexInteger", "Floating", 
      "PointFloat", "ExponentFloat", "Identifier", "LETTER", "NONDIGIT", 
      "BINDIGIT", "HEXDIGIT", "OCTALDIGIT", "FRACTION", "EXPONENT", "NONZERODIGIT", 
      "DIGIT", "Whitespace"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,52,390,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,1,0,1,0,1,0,1,0,3,0,128,
  	8,0,1,1,1,1,1,1,1,1,3,1,134,8,1,1,2,1,2,1,2,3,2,139,8,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,3,3,150,8,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,158,8,4,
  	1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,
  	10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,
  	17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,
  	24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,
  	31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,
  	38,1,38,1,39,1,39,1,39,1,39,5,39,239,8,39,10,39,12,39,242,9,39,1,39,1,
  	39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,5,40,253,8,40,10,40,12,40,256,9,
  	40,1,40,3,40,259,8,40,1,40,1,40,1,40,1,40,1,41,1,41,3,41,267,8,41,1,42,
  	1,42,1,42,1,42,3,42,273,8,42,1,43,1,43,5,43,277,8,43,10,43,12,43,280,
  	9,43,1,43,4,43,283,8,43,11,43,12,43,284,3,43,287,8,43,1,44,1,44,1,44,
  	4,44,292,8,44,11,44,12,44,293,1,45,1,45,1,45,4,45,299,8,45,11,45,12,45,
  	300,1,46,1,46,1,46,4,46,306,8,46,11,46,12,46,307,1,47,1,47,3,47,312,8,
  	47,1,48,4,48,315,8,48,11,48,12,48,316,3,48,319,8,48,1,48,1,48,4,48,323,
  	8,48,11,48,12,48,324,1,48,1,48,3,48,329,8,48,1,49,4,49,332,8,49,11,49,
  	12,49,333,1,49,3,49,337,8,49,1,49,1,49,1,50,4,50,342,8,50,11,50,12,50,
  	343,1,50,1,50,5,50,348,8,50,10,50,12,50,351,9,50,1,51,1,51,1,52,1,52,
  	3,52,357,8,52,1,53,1,53,1,54,1,54,1,55,1,55,1,56,1,56,4,56,367,8,56,11,
  	56,12,56,368,1,57,1,57,3,57,373,8,57,1,57,4,57,376,8,57,11,57,12,57,377,
  	1,58,1,58,1,59,1,59,1,60,4,60,385,8,60,11,60,12,60,386,1,60,1,60,2,240,
  	254,0,61,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,
  	36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,
  	95,48,97,49,99,50,101,51,103,0,105,0,107,0,109,0,111,0,113,0,115,0,117,
  	0,119,0,121,52,1,0,12,2,0,66,66,98,98,2,0,79,79,111,111,2,0,88,88,120,
  	120,2,0,65,90,97,122,1,0,48,49,3,0,48,57,65,70,97,102,1,0,48,55,2,0,69,
  	69,101,101,2,0,43,43,45,45,1,0,49,57,1,0,48,57,3,0,9,10,13,13,32,32,413,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,
  	1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,
  	0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,
  	0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,
  	1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,121,1,0,0,0,1,127,1,0,0,0,3,133,
  	1,0,0,0,5,138,1,0,0,0,7,149,1,0,0,0,9,157,1,0,0,0,11,159,1,0,0,0,13,164,
  	1,0,0,0,15,170,1,0,0,0,17,172,1,0,0,0,19,174,1,0,0,0,21,176,1,0,0,0,23,
  	178,1,0,0,0,25,180,1,0,0,0,27,182,1,0,0,0,29,184,1,0,0,0,31,186,1,0,0,
  	0,33,188,1,0,0,0,35,190,1,0,0,0,37,192,1,0,0,0,39,194,1,0,0,0,41,196,
  	1,0,0,0,43,198,1,0,0,0,45,200,1,0,0,0,47,202,1,0,0,0,49,204,1,0,0,0,51,
  	206,1,0,0,0,53,208,1,0,0,0,55,210,1,0,0,0,57,212,1,0,0,0,59,214,1,0,0,
  	0,61,216,1,0,0,0,63,218,1,0,0,0,65,220,1,0,0,0,67,222,1,0,0,0,69,224,
  	1,0,0,0,71,226,1,0,0,0,73,228,1,0,0,0,75,230,1,0,0,0,77,232,1,0,0,0,79,
  	234,1,0,0,0,81,248,1,0,0,0,83,266,1,0,0,0,85,272,1,0,0,0,87,286,1,0,0,
  	0,89,288,1,0,0,0,91,295,1,0,0,0,93,302,1,0,0,0,95,311,1,0,0,0,97,328,
  	1,0,0,0,99,336,1,0,0,0,101,341,1,0,0,0,103,352,1,0,0,0,105,356,1,0,0,
  	0,107,358,1,0,0,0,109,360,1,0,0,0,111,362,1,0,0,0,113,364,1,0,0,0,115,
  	370,1,0,0,0,117,379,1,0,0,0,119,381,1,0,0,0,121,384,1,0,0,0,123,128,3,
  	37,18,0,124,125,5,110,0,0,125,126,5,111,0,0,126,128,5,116,0,0,127,123,
  	1,0,0,0,127,124,1,0,0,0,128,2,1,0,0,0,129,134,3,17,8,0,130,131,5,97,0,
  	0,131,132,5,110,0,0,132,134,5,100,0,0,133,129,1,0,0,0,133,130,1,0,0,0,
  	134,4,1,0,0,0,135,139,3,23,11,0,136,137,5,111,0,0,137,139,5,114,0,0,138,
  	135,1,0,0,0,138,136,1,0,0,0,139,6,1,0,0,0,140,141,5,45,0,0,141,150,5,
  	62,0,0,142,143,5,105,0,0,143,144,5,109,0,0,144,145,5,112,0,0,145,146,
  	5,108,0,0,146,147,5,105,0,0,147,148,5,101,0,0,148,150,5,115,0,0,149,140,
  	1,0,0,0,149,142,1,0,0,0,150,8,1,0,0,0,151,152,5,60,0,0,152,153,5,45,0,
  	0,153,158,5,62,0,0,154,155,5,105,0,0,155,156,5,102,0,0,156,158,5,102,
  	0,0,157,151,1,0,0,0,157,154,1,0,0,0,158,10,1,0,0,0,159,160,5,84,0,0,160,
  	161,5,114,0,0,161,162,5,117,0,0,162,163,5,101,0,0,163,12,1,0,0,0,164,
  	165,5,70,0,0,165,166,5,97,0,0,166,167,5,108,0,0,167,168,5,115,0,0,168,
  	169,5,101,0,0,169,14,1,0,0,0,170,171,5,64,0,0,171,16,1,0,0,0,172,173,
  	5,38,0,0,173,18,1,0,0,0,174,175,5,39,0,0,175,20,1,0,0,0,176,177,5,42,
  	0,0,177,22,1,0,0,0,178,179,5,124,0,0,179,24,1,0,0,0,180,181,5,94,0,0,
  	181,26,1,0,0,0,182,183,5,58,0,0,183,28,1,0,0,0,184,185,5,44,0,0,185,30,
  	1,0,0,0,186,187,5,36,0,0,187,32,1,0,0,0,188,189,5,46,0,0,189,34,1,0,0,
  	0,190,191,5,61,0,0,191,36,1,0,0,0,192,193,5,33,0,0,193,38,1,0,0,0,194,
  	195,5,96,0,0,195,40,1,0,0,0,196,197,5,35,0,0,197,42,1,0,0,0,198,199,5,
  	45,0,0,199,44,1,0,0,0,200,201,5,37,0,0,201,46,1,0,0,0,202,203,5,43,0,
  	0,203,48,1,0,0,0,204,205,5,63,0,0,205,50,1,0,0,0,206,207,5,34,0,0,207,
  	52,1,0,0,0,208,209,5,59,0,0,209,54,1,0,0,0,210,211,5,126,0,0,211,56,1,
  	0,0,0,212,213,5,95,0,0,213,58,1,0,0,0,214,215,5,47,0,0,215,60,1,0,0,0,
  	216,217,5,92,0,0,217,62,1,0,0,0,218,219,5,123,0,0,219,64,1,0,0,0,220,
  	221,5,125,0,0,221,66,1,0,0,0,222,223,5,91,0,0,223,68,1,0,0,0,224,225,
  	5,93,0,0,225,70,1,0,0,0,226,227,5,60,0,0,227,72,1,0,0,0,228,229,5,62,
  	0,0,229,74,1,0,0,0,230,231,5,40,0,0,231,76,1,0,0,0,232,233,5,41,0,0,233,
  	78,1,0,0,0,234,235,5,47,0,0,235,236,5,42,0,0,236,240,1,0,0,0,237,239,
  	9,0,0,0,238,237,1,0,0,0,239,242,1,0,0,0,240,241,1,0,0,0,240,238,1,0,0,
  	0,241,243,1,0,0,0,242,240,1,0,0,0,243,244,5,42,0,0,244,245,5,47,0,0,245,
  	246,1,0,0,0,246,247,6,39,0,0,247,80,1,0,0,0,248,249,5,47,0,0,249,250,
  	5,47,0,0,250,254,1,0,0,0,251,253,9,0,0,0,252,251,1,0,0,0,253,256,1,0,
  	0,0,254,255,1,0,0,0,254,252,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,257,
  	259,5,13,0,0,258,257,1,0,0,0,258,259,1,0,0,0,259,260,1,0,0,0,260,261,
  	5,10,0,0,261,262,1,0,0,0,262,263,6,40,0,0,263,82,1,0,0,0,264,267,3,85,
  	42,0,265,267,3,95,47,0,266,264,1,0,0,0,266,265,1,0,0,0,267,84,1,0,0,0,
  	268,273,3,87,43,0,269,273,3,89,44,0,270,273,3,91,45,0,271,273,3,93,46,
  	0,272,268,1,0,0,0,272,269,1,0,0,0,272,270,1,0,0,0,272,271,1,0,0,0,273,
  	86,1,0,0,0,274,278,3,117,58,0,275,277,3,119,59,0,276,275,1,0,0,0,277,
  	280,1,0,0,0,278,276,1,0,0,0,278,279,1,0,0,0,279,287,1,0,0,0,280,278,1,
  	0,0,0,281,283,5,48,0,0,282,281,1,0,0,0,283,284,1,0,0,0,284,282,1,0,0,
  	0,284,285,1,0,0,0,285,287,1,0,0,0,286,274,1,0,0,0,286,282,1,0,0,0,287,
  	88,1,0,0,0,288,289,5,48,0,0,289,291,7,0,0,0,290,292,3,107,53,0,291,290,
  	1,0,0,0,292,293,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,90,1,0,0,
  	0,295,296,5,48,0,0,296,298,7,1,0,0,297,299,3,111,55,0,298,297,1,0,0,0,
  	299,300,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,92,1,0,0,0,302,303,
  	5,48,0,0,303,305,7,2,0,0,304,306,3,109,54,0,305,304,1,0,0,0,306,307,1,
  	0,0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,94,1,0,0,0,309,312,3,97,48,
  	0,310,312,3,99,49,0,311,309,1,0,0,0,311,310,1,0,0,0,312,96,1,0,0,0,313,
  	315,3,119,59,0,314,313,1,0,0,0,315,316,1,0,0,0,316,314,1,0,0,0,316,317,
  	1,0,0,0,317,319,1,0,0,0,318,314,1,0,0,0,318,319,1,0,0,0,319,320,1,0,0,
  	0,320,329,3,113,56,0,321,323,3,119,59,0,322,321,1,0,0,0,323,324,1,0,0,
  	0,324,322,1,0,0,0,324,325,1,0,0,0,325,326,1,0,0,0,326,327,5,46,0,0,327,
  	329,1,0,0,0,328,318,1,0,0,0,328,322,1,0,0,0,329,98,1,0,0,0,330,332,3,
  	119,59,0,331,330,1,0,0,0,332,333,1,0,0,0,333,331,1,0,0,0,333,334,1,0,
  	0,0,334,337,1,0,0,0,335,337,3,97,48,0,336,331,1,0,0,0,336,335,1,0,0,0,
  	337,338,1,0,0,0,338,339,3,115,57,0,339,100,1,0,0,0,340,342,3,105,52,0,
  	341,340,1,0,0,0,342,343,1,0,0,0,343,341,1,0,0,0,343,344,1,0,0,0,344,349,
  	1,0,0,0,345,348,3,105,52,0,346,348,3,119,59,0,347,345,1,0,0,0,347,346,
  	1,0,0,0,348,351,1,0,0,0,349,347,1,0,0,0,349,350,1,0,0,0,350,102,1,0,0,
  	0,351,349,1,0,0,0,352,353,7,3,0,0,353,104,1,0,0,0,354,357,3,103,51,0,
  	355,357,5,95,0,0,356,354,1,0,0,0,356,355,1,0,0,0,357,106,1,0,0,0,358,
  	359,7,4,0,0,359,108,1,0,0,0,360,361,7,5,0,0,361,110,1,0,0,0,362,363,7,
  	6,0,0,363,112,1,0,0,0,364,366,5,46,0,0,365,367,3,119,59,0,366,365,1,0,
  	0,0,367,368,1,0,0,0,368,366,1,0,0,0,368,369,1,0,0,0,369,114,1,0,0,0,370,
  	372,7,7,0,0,371,373,7,8,0,0,372,371,1,0,0,0,372,373,1,0,0,0,373,375,1,
  	0,0,0,374,376,3,119,59,0,375,374,1,0,0,0,376,377,1,0,0,0,377,375,1,0,
  	0,0,377,378,1,0,0,0,378,116,1,0,0,0,379,380,7,9,0,0,380,118,1,0,0,0,381,
  	382,7,10,0,0,382,120,1,0,0,0,383,385,7,11,0,0,384,383,1,0,0,0,385,386,
  	1,0,0,0,386,384,1,0,0,0,386,387,1,0,0,0,387,388,1,0,0,0,388,389,6,60,
  	0,0,389,122,1,0,0,0,32,0,127,133,138,149,157,240,254,258,266,272,278,
  	284,286,293,300,307,311,316,318,324,328,333,336,343,347,349,356,368,372,
  	377,386,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  propositionallogiclexerLexerStaticData = staticData.release();
}

}

PropositionalLogicLexer::PropositionalLogicLexer(CharStream *input) : Lexer(input) {
  PropositionalLogicLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *propositionallogiclexerLexerStaticData->atn, propositionallogiclexerLexerStaticData->decisionToDFA, propositionallogiclexerLexerStaticData->sharedContextCache);
}

PropositionalLogicLexer::~PropositionalLogicLexer() {
  delete _interpreter;
}

std::string PropositionalLogicLexer::getGrammarFileName() const {
  return "PropositionalLogicLexer.g4";
}

const std::vector<std::string>& PropositionalLogicLexer::getRuleNames() const {
  return propositionallogiclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PropositionalLogicLexer::getChannelNames() const {
  return propositionallogiclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PropositionalLogicLexer::getModeNames() const {
  return propositionallogiclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PropositionalLogicLexer::getVocabulary() const {
  return propositionallogiclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PropositionalLogicLexer::getSerializedATN() const {
  return propositionallogiclexerLexerStaticData->serializedATN;
}

const atn::ATN& PropositionalLogicLexer::getATN() const {
  return *propositionallogiclexerLexerStaticData->atn;
}




void PropositionalLogicLexer::initialize() {
  ::antlr4::internal::call_once(propositionallogiclexerLexerOnceFlag, propositionallogiclexerLexerInitialize);
}
