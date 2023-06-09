
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
      "NONZERODIGIT", "DIGIT", "Whitespace"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "'true'", "'false'", "','", "'{'", "'}'", 
      "'['", "']'", "'<'", "'>'", "'('", "')'", "", "", "'inf'"
    },
    std::vector<std::string>{
      "", "NegationOperator", "ConjunctionOperator", "DisjunctionOperator", 
      "ImplicationOperator", "IffOperator", "True", "False", "Comma", "LeftBrace", 
      "RightBrace", "LeftBracket", "RightBracket", "LeftChevron", "RightChevron", 
      "LeftParenthesis", "RightParenthesis", "BlockComment", "LineComment", 
      "Infinity", "Scalar", "Integer", "DecimalInteger", "BinaryInteger", 
      "OctalInteger", "HexInteger", "Floating", "PointFloat", "ExponentFloat", 
      "Identifier", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,30,398,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,1,0,1,0,1,0,1,
  	0,3,0,130,8,0,1,1,1,1,1,1,1,1,1,1,3,1,137,8,1,1,2,1,2,1,2,1,2,3,2,143,
  	8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,154,8,3,1,4,1,4,1,4,1,4,1,
  	4,1,4,3,4,162,8,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,
  	1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,
  	1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,
  	1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,
  	1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,39,1,39,5,39,243,8,39,10,39,12,39,
  	246,9,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,5,40,257,8,40,10,
  	40,12,40,260,9,40,1,40,3,40,263,8,40,1,40,1,40,1,40,1,40,1,41,1,41,1,
  	41,1,41,1,42,1,42,3,42,275,8,42,1,43,1,43,1,43,1,43,3,43,281,8,43,1,44,
  	1,44,5,44,285,8,44,10,44,12,44,288,9,44,1,44,4,44,291,8,44,11,44,12,44,
  	292,3,44,295,8,44,1,45,1,45,1,45,4,45,300,8,45,11,45,12,45,301,1,46,1,
  	46,1,46,4,46,307,8,46,11,46,12,46,308,1,47,1,47,1,47,4,47,314,8,47,11,
  	47,12,47,315,1,48,1,48,3,48,320,8,48,1,49,4,49,323,8,49,11,49,12,49,324,
  	3,49,327,8,49,1,49,1,49,4,49,331,8,49,11,49,12,49,332,1,49,1,49,3,49,
  	337,8,49,1,50,4,50,340,8,50,11,50,12,50,341,1,50,3,50,345,8,50,1,50,1,
  	50,1,51,4,51,350,8,51,11,51,12,51,351,1,51,1,51,5,51,356,8,51,10,51,12,
  	51,359,9,51,1,52,1,52,1,53,1,53,3,53,365,8,53,1,54,1,54,1,55,1,55,1,56,
  	1,56,1,57,1,57,4,57,375,8,57,11,57,12,57,376,1,58,1,58,3,58,381,8,58,
  	1,58,4,58,384,8,58,11,58,12,58,385,1,59,1,59,1,60,1,60,1,61,4,61,393,
  	8,61,11,61,12,61,394,1,61,1,61,2,244,258,0,62,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,0,17,0,19,0,21,0,23,0,25,0,27,0,29,8,31,0,33,0,35,0,37,0,39,
  	0,41,0,43,0,45,0,47,0,49,0,51,0,53,0,55,0,57,0,59,0,61,0,63,9,65,10,67,
  	11,69,12,71,13,73,14,75,15,77,16,79,17,81,18,83,19,85,20,87,21,89,22,
  	91,23,93,24,95,25,97,26,99,27,101,28,103,29,105,0,107,0,109,0,111,0,113,
  	0,115,0,117,0,119,0,121,0,123,30,1,0,12,2,0,66,66,98,98,2,0,79,79,111,
  	111,2,0,88,88,120,120,2,0,65,90,97,122,1,0,48,49,3,0,48,57,65,70,97,102,
  	1,0,48,55,2,0,69,69,101,101,2,0,43,43,45,45,1,0,49,57,1,0,48,57,3,0,9,
  	10,13,13,32,32,398,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,
  	9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,29,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,
  	0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,
  	87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,
  	0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,123,1,0,0,0,1,129,1,
  	0,0,0,3,136,1,0,0,0,5,142,1,0,0,0,7,153,1,0,0,0,9,161,1,0,0,0,11,163,
  	1,0,0,0,13,168,1,0,0,0,15,174,1,0,0,0,17,176,1,0,0,0,19,178,1,0,0,0,21,
  	180,1,0,0,0,23,182,1,0,0,0,25,184,1,0,0,0,27,186,1,0,0,0,29,188,1,0,0,
  	0,31,190,1,0,0,0,33,192,1,0,0,0,35,194,1,0,0,0,37,196,1,0,0,0,39,198,
  	1,0,0,0,41,200,1,0,0,0,43,202,1,0,0,0,45,204,1,0,0,0,47,206,1,0,0,0,49,
  	208,1,0,0,0,51,210,1,0,0,0,53,212,1,0,0,0,55,214,1,0,0,0,57,216,1,0,0,
  	0,59,218,1,0,0,0,61,220,1,0,0,0,63,222,1,0,0,0,65,224,1,0,0,0,67,226,
  	1,0,0,0,69,228,1,0,0,0,71,230,1,0,0,0,73,232,1,0,0,0,75,234,1,0,0,0,77,
  	236,1,0,0,0,79,238,1,0,0,0,81,252,1,0,0,0,83,268,1,0,0,0,85,274,1,0,0,
  	0,87,280,1,0,0,0,89,294,1,0,0,0,91,296,1,0,0,0,93,303,1,0,0,0,95,310,
  	1,0,0,0,97,319,1,0,0,0,99,336,1,0,0,0,101,344,1,0,0,0,103,349,1,0,0,0,
  	105,360,1,0,0,0,107,364,1,0,0,0,109,366,1,0,0,0,111,368,1,0,0,0,113,370,
  	1,0,0,0,115,372,1,0,0,0,117,378,1,0,0,0,119,387,1,0,0,0,121,389,1,0,0,
  	0,123,392,1,0,0,0,125,130,3,37,18,0,126,127,5,110,0,0,127,128,5,111,0,
  	0,128,130,5,116,0,0,129,125,1,0,0,0,129,126,1,0,0,0,130,2,1,0,0,0,131,
  	132,5,38,0,0,132,137,5,38,0,0,133,134,5,97,0,0,134,135,5,110,0,0,135,
  	137,5,100,0,0,136,131,1,0,0,0,136,133,1,0,0,0,137,4,1,0,0,0,138,139,5,
  	124,0,0,139,143,5,124,0,0,140,141,5,111,0,0,141,143,5,114,0,0,142,138,
  	1,0,0,0,142,140,1,0,0,0,143,6,1,0,0,0,144,145,5,45,0,0,145,154,5,62,0,
  	0,146,147,5,105,0,0,147,148,5,109,0,0,148,149,5,112,0,0,149,150,5,108,
  	0,0,150,151,5,105,0,0,151,152,5,101,0,0,152,154,5,115,0,0,153,144,1,0,
  	0,0,153,146,1,0,0,0,154,8,1,0,0,0,155,156,5,60,0,0,156,157,5,45,0,0,157,
  	162,5,62,0,0,158,159,5,105,0,0,159,160,5,102,0,0,160,162,5,102,0,0,161,
  	155,1,0,0,0,161,158,1,0,0,0,162,10,1,0,0,0,163,164,5,116,0,0,164,165,
  	5,114,0,0,165,166,5,117,0,0,166,167,5,101,0,0,167,12,1,0,0,0,168,169,
  	5,102,0,0,169,170,5,97,0,0,170,171,5,108,0,0,171,172,5,115,0,0,172,173,
  	5,101,0,0,173,14,1,0,0,0,174,175,5,64,0,0,175,16,1,0,0,0,176,177,5,38,
  	0,0,177,18,1,0,0,0,178,179,5,39,0,0,179,20,1,0,0,0,180,181,5,42,0,0,181,
  	22,1,0,0,0,182,183,5,124,0,0,183,24,1,0,0,0,184,185,5,94,0,0,185,26,1,
  	0,0,0,186,187,5,58,0,0,187,28,1,0,0,0,188,189,5,44,0,0,189,30,1,0,0,0,
  	190,191,5,36,0,0,191,32,1,0,0,0,192,193,5,46,0,0,193,34,1,0,0,0,194,195,
  	5,61,0,0,195,36,1,0,0,0,196,197,5,33,0,0,197,38,1,0,0,0,198,199,5,96,
  	0,0,199,40,1,0,0,0,200,201,5,35,0,0,201,42,1,0,0,0,202,203,5,45,0,0,203,
  	44,1,0,0,0,204,205,5,37,0,0,205,46,1,0,0,0,206,207,5,43,0,0,207,48,1,
  	0,0,0,208,209,5,63,0,0,209,50,1,0,0,0,210,211,5,34,0,0,211,52,1,0,0,0,
  	212,213,5,59,0,0,213,54,1,0,0,0,214,215,5,126,0,0,215,56,1,0,0,0,216,
  	217,5,95,0,0,217,58,1,0,0,0,218,219,5,47,0,0,219,60,1,0,0,0,220,221,5,
  	92,0,0,221,62,1,0,0,0,222,223,5,123,0,0,223,64,1,0,0,0,224,225,5,125,
  	0,0,225,66,1,0,0,0,226,227,5,91,0,0,227,68,1,0,0,0,228,229,5,93,0,0,229,
  	70,1,0,0,0,230,231,5,60,0,0,231,72,1,0,0,0,232,233,5,62,0,0,233,74,1,
  	0,0,0,234,235,5,40,0,0,235,76,1,0,0,0,236,237,5,41,0,0,237,78,1,0,0,0,
  	238,239,5,47,0,0,239,240,5,42,0,0,240,244,1,0,0,0,241,243,9,0,0,0,242,
  	241,1,0,0,0,243,246,1,0,0,0,244,245,1,0,0,0,244,242,1,0,0,0,245,247,1,
  	0,0,0,246,244,1,0,0,0,247,248,5,42,0,0,248,249,5,47,0,0,249,250,1,0,0,
  	0,250,251,6,39,0,0,251,80,1,0,0,0,252,253,5,47,0,0,253,254,5,47,0,0,254,
  	258,1,0,0,0,255,257,9,0,0,0,256,255,1,0,0,0,257,260,1,0,0,0,258,259,1,
  	0,0,0,258,256,1,0,0,0,259,262,1,0,0,0,260,258,1,0,0,0,261,263,5,13,0,
  	0,262,261,1,0,0,0,262,263,1,0,0,0,263,264,1,0,0,0,264,265,5,10,0,0,265,
  	266,1,0,0,0,266,267,6,40,0,0,267,82,1,0,0,0,268,269,5,105,0,0,269,270,
  	5,110,0,0,270,271,5,102,0,0,271,84,1,0,0,0,272,275,3,87,43,0,273,275,
  	3,97,48,0,274,272,1,0,0,0,274,273,1,0,0,0,275,86,1,0,0,0,276,281,3,89,
  	44,0,277,281,3,91,45,0,278,281,3,93,46,0,279,281,3,95,47,0,280,276,1,
  	0,0,0,280,277,1,0,0,0,280,278,1,0,0,0,280,279,1,0,0,0,281,88,1,0,0,0,
  	282,286,3,119,59,0,283,285,3,121,60,0,284,283,1,0,0,0,285,288,1,0,0,0,
  	286,284,1,0,0,0,286,287,1,0,0,0,287,295,1,0,0,0,288,286,1,0,0,0,289,291,
  	5,48,0,0,290,289,1,0,0,0,291,292,1,0,0,0,292,290,1,0,0,0,292,293,1,0,
  	0,0,293,295,1,0,0,0,294,282,1,0,0,0,294,290,1,0,0,0,295,90,1,0,0,0,296,
  	297,5,48,0,0,297,299,7,0,0,0,298,300,3,109,54,0,299,298,1,0,0,0,300,301,
  	1,0,0,0,301,299,1,0,0,0,301,302,1,0,0,0,302,92,1,0,0,0,303,304,5,48,0,
  	0,304,306,7,1,0,0,305,307,3,113,56,0,306,305,1,0,0,0,307,308,1,0,0,0,
  	308,306,1,0,0,0,308,309,1,0,0,0,309,94,1,0,0,0,310,311,5,48,0,0,311,313,
  	7,2,0,0,312,314,3,111,55,0,313,312,1,0,0,0,314,315,1,0,0,0,315,313,1,
  	0,0,0,315,316,1,0,0,0,316,96,1,0,0,0,317,320,3,99,49,0,318,320,3,101,
  	50,0,319,317,1,0,0,0,319,318,1,0,0,0,320,98,1,0,0,0,321,323,3,121,60,
  	0,322,321,1,0,0,0,323,324,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,0,325,
  	327,1,0,0,0,326,322,1,0,0,0,326,327,1,0,0,0,327,328,1,0,0,0,328,337,3,
  	115,57,0,329,331,3,121,60,0,330,329,1,0,0,0,331,332,1,0,0,0,332,330,1,
  	0,0,0,332,333,1,0,0,0,333,334,1,0,0,0,334,335,5,46,0,0,335,337,1,0,0,
  	0,336,326,1,0,0,0,336,330,1,0,0,0,337,100,1,0,0,0,338,340,3,121,60,0,
  	339,338,1,0,0,0,340,341,1,0,0,0,341,339,1,0,0,0,341,342,1,0,0,0,342,345,
  	1,0,0,0,343,345,3,99,49,0,344,339,1,0,0,0,344,343,1,0,0,0,345,346,1,0,
  	0,0,346,347,3,117,58,0,347,102,1,0,0,0,348,350,3,107,53,0,349,348,1,0,
  	0,0,350,351,1,0,0,0,351,349,1,0,0,0,351,352,1,0,0,0,352,357,1,0,0,0,353,
  	356,3,107,53,0,354,356,3,121,60,0,355,353,1,0,0,0,355,354,1,0,0,0,356,
  	359,1,0,0,0,357,355,1,0,0,0,357,358,1,0,0,0,358,104,1,0,0,0,359,357,1,
  	0,0,0,360,361,7,3,0,0,361,106,1,0,0,0,362,365,3,105,52,0,363,365,5,95,
  	0,0,364,362,1,0,0,0,364,363,1,0,0,0,365,108,1,0,0,0,366,367,7,4,0,0,367,
  	110,1,0,0,0,368,369,7,5,0,0,369,112,1,0,0,0,370,371,7,6,0,0,371,114,1,
  	0,0,0,372,374,5,46,0,0,373,375,3,121,60,0,374,373,1,0,0,0,375,376,1,0,
  	0,0,376,374,1,0,0,0,376,377,1,0,0,0,377,116,1,0,0,0,378,380,7,7,0,0,379,
  	381,7,8,0,0,380,379,1,0,0,0,380,381,1,0,0,0,381,383,1,0,0,0,382,384,3,
  	121,60,0,383,382,1,0,0,0,384,385,1,0,0,0,385,383,1,0,0,0,385,386,1,0,
  	0,0,386,118,1,0,0,0,387,388,7,9,0,0,388,120,1,0,0,0,389,390,7,10,0,0,
  	390,122,1,0,0,0,391,393,7,11,0,0,392,391,1,0,0,0,393,394,1,0,0,0,394,
  	392,1,0,0,0,394,395,1,0,0,0,395,396,1,0,0,0,396,397,6,61,0,0,397,124,
  	1,0,0,0,32,0,129,136,142,153,161,244,258,262,274,280,286,292,294,301,
  	308,315,319,324,326,332,336,341,344,351,355,357,364,376,380,385,394,1,
  	6,0,0
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
