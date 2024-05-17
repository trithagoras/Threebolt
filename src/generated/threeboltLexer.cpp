
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1


#include "threeboltLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ThreeboltLexerStaticData final {
  ThreeboltLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ThreeboltLexerStaticData(const ThreeboltLexerStaticData&) = delete;
  ThreeboltLexerStaticData(ThreeboltLexerStaticData&&) = delete;
  ThreeboltLexerStaticData& operator=(const ThreeboltLexerStaticData&) = delete;
  ThreeboltLexerStaticData& operator=(ThreeboltLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag threeboltlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ThreeboltLexerStaticData *threeboltlexerLexerStaticData = nullptr;

void threeboltlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (threeboltlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(threeboltlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ThreeboltLexerStaticData>(
    std::vector<std::string>{
      "KEYWORD_FROM", "KEYWORD_IMPORT", "KEYWORD_FN", "KEYWORD_LET", "KEYWORD_RETURN", 
      "KEYWORD_IF", "KEYWORD_TRUE", "KEYWORD_FALSE", "KEYWORD_INT", "KEYWORD_FLOAT", 
      "KEYWORD_CHAR", "KEYWORD_BOOL", "ID", "INT_LITERAL", "FLOAT_LITERAL", 
      "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", "COMMENT", "MULTILINE_COMMENT", 
      "WS", "PLUS", "MINUS", "STAR", "DIV", "MOD", "EQ", "NEQ", "LT", "LEQ", 
      "GT", "GEQ", "ASSIGN", "COLON", "SEMICOLON", "COMMA", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "ARROW", "DOUBLE_COLON"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'from'", "'import'", "'fn'", "'let'", "'return'", "'if'", "'true'", 
      "'false'", "'int'", "'float'", "'char'", "'bool'", "", "", "", "", 
      "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'%'", "'=='", "'!='", 
      "'<'", "'<='", "'>'", "'>='", "'='", "':'", "';'", "','", "'('", "')'", 
      "'{'", "'}'", "'->'", "'::'"
    },
    std::vector<std::string>{
      "", "KEYWORD_FROM", "KEYWORD_IMPORT", "KEYWORD_FN", "KEYWORD_LET", 
      "KEYWORD_RETURN", "KEYWORD_IF", "KEYWORD_TRUE", "KEYWORD_FALSE", "KEYWORD_INT", 
      "KEYWORD_FLOAT", "KEYWORD_CHAR", "KEYWORD_BOOL", "ID", "INT_LITERAL", 
      "FLOAT_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", 
      "COMMENT", "MULTILINE_COMMENT", "WS", "PLUS", "MINUS", "STAR", "DIV", 
      "MOD", "EQ", "NEQ", "LT", "LEQ", "GT", "GEQ", "ASSIGN", "COLON", "SEMICOLON", 
      "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "ARROW", "DOUBLE_COLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,42,268,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,5,12,148,8,12,10,12,12,12,
  	151,9,12,1,13,4,13,154,8,13,11,13,12,13,155,1,14,4,14,159,8,14,11,14,
  	12,14,160,1,14,1,14,5,14,165,8,14,10,14,12,14,168,9,14,1,15,1,15,1,15,
  	1,15,1,16,1,16,3,16,176,8,16,1,17,1,17,1,17,1,17,5,17,182,8,17,10,17,
  	12,17,185,9,17,1,17,1,17,1,18,1,18,1,18,1,18,5,18,193,8,18,10,18,12,18,
  	196,9,18,1,18,1,18,1,19,1,19,1,19,1,19,5,19,204,8,19,10,19,12,19,207,
  	9,19,1,19,1,19,1,19,1,19,1,19,1,20,4,20,215,8,20,11,20,12,20,216,1,20,
  	1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,
  	1,27,1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,32,
  	1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,
  	1,39,1,40,1,40,1,40,1,41,1,41,1,41,1,205,0,42,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,
  	83,42,1,0,6,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,
  	57,2,0,34,34,92,92,2,0,10,10,13,13,3,0,9,10,13,13,32,32,277,0,1,1,0,0,
  	0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,
  	0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,
  	0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,
  	35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,
  	0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,
  	0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,
  	67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,
  	0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,1,85,1,0,0,0,3,90,1,0,0,
  	0,5,97,1,0,0,0,7,100,1,0,0,0,9,104,1,0,0,0,11,111,1,0,0,0,13,114,1,0,
  	0,0,15,119,1,0,0,0,17,125,1,0,0,0,19,129,1,0,0,0,21,135,1,0,0,0,23,140,
  	1,0,0,0,25,145,1,0,0,0,27,153,1,0,0,0,29,158,1,0,0,0,31,169,1,0,0,0,33,
  	175,1,0,0,0,35,177,1,0,0,0,37,188,1,0,0,0,39,199,1,0,0,0,41,214,1,0,0,
  	0,43,220,1,0,0,0,45,222,1,0,0,0,47,224,1,0,0,0,49,226,1,0,0,0,51,228,
  	1,0,0,0,53,230,1,0,0,0,55,233,1,0,0,0,57,236,1,0,0,0,59,238,1,0,0,0,61,
  	241,1,0,0,0,63,243,1,0,0,0,65,246,1,0,0,0,67,248,1,0,0,0,69,250,1,0,0,
  	0,71,252,1,0,0,0,73,254,1,0,0,0,75,256,1,0,0,0,77,258,1,0,0,0,79,260,
  	1,0,0,0,81,262,1,0,0,0,83,265,1,0,0,0,85,86,5,102,0,0,86,87,5,114,0,0,
  	87,88,5,111,0,0,88,89,5,109,0,0,89,2,1,0,0,0,90,91,5,105,0,0,91,92,5,
  	109,0,0,92,93,5,112,0,0,93,94,5,111,0,0,94,95,5,114,0,0,95,96,5,116,0,
  	0,96,4,1,0,0,0,97,98,5,102,0,0,98,99,5,110,0,0,99,6,1,0,0,0,100,101,5,
  	108,0,0,101,102,5,101,0,0,102,103,5,116,0,0,103,8,1,0,0,0,104,105,5,114,
  	0,0,105,106,5,101,0,0,106,107,5,116,0,0,107,108,5,117,0,0,108,109,5,114,
  	0,0,109,110,5,110,0,0,110,10,1,0,0,0,111,112,5,105,0,0,112,113,5,102,
  	0,0,113,12,1,0,0,0,114,115,5,116,0,0,115,116,5,114,0,0,116,117,5,117,
  	0,0,117,118,5,101,0,0,118,14,1,0,0,0,119,120,5,102,0,0,120,121,5,97,0,
  	0,121,122,5,108,0,0,122,123,5,115,0,0,123,124,5,101,0,0,124,16,1,0,0,
  	0,125,126,5,105,0,0,126,127,5,110,0,0,127,128,5,116,0,0,128,18,1,0,0,
  	0,129,130,5,102,0,0,130,131,5,108,0,0,131,132,5,111,0,0,132,133,5,97,
  	0,0,133,134,5,116,0,0,134,20,1,0,0,0,135,136,5,99,0,0,136,137,5,104,0,
  	0,137,138,5,97,0,0,138,139,5,114,0,0,139,22,1,0,0,0,140,141,5,98,0,0,
  	141,142,5,111,0,0,142,143,5,111,0,0,143,144,5,108,0,0,144,24,1,0,0,0,
  	145,149,7,0,0,0,146,148,7,1,0,0,147,146,1,0,0,0,148,151,1,0,0,0,149,147,
  	1,0,0,0,149,150,1,0,0,0,150,26,1,0,0,0,151,149,1,0,0,0,152,154,7,2,0,
  	0,153,152,1,0,0,0,154,155,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,
  	28,1,0,0,0,157,159,7,2,0,0,158,157,1,0,0,0,159,160,1,0,0,0,160,158,1,
  	0,0,0,160,161,1,0,0,0,161,162,1,0,0,0,162,166,5,46,0,0,163,165,7,2,0,
  	0,164,163,1,0,0,0,165,168,1,0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,
  	30,1,0,0,0,168,166,1,0,0,0,169,170,5,39,0,0,170,171,9,0,0,0,171,172,5,
  	39,0,0,172,32,1,0,0,0,173,176,3,13,6,0,174,176,3,15,7,0,175,173,1,0,0,
  	0,175,174,1,0,0,0,176,34,1,0,0,0,177,183,5,34,0,0,178,182,8,3,0,0,179,
  	180,5,92,0,0,180,182,9,0,0,0,181,178,1,0,0,0,181,179,1,0,0,0,182,185,
  	1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,186,1,0,0,0,185,183,1,0,0,
  	0,186,187,5,34,0,0,187,36,1,0,0,0,188,189,5,47,0,0,189,190,5,47,0,0,190,
  	194,1,0,0,0,191,193,8,4,0,0,192,191,1,0,0,0,193,196,1,0,0,0,194,192,1,
  	0,0,0,194,195,1,0,0,0,195,197,1,0,0,0,196,194,1,0,0,0,197,198,6,18,0,
  	0,198,38,1,0,0,0,199,200,5,47,0,0,200,201,5,42,0,0,201,205,1,0,0,0,202,
  	204,9,0,0,0,203,202,1,0,0,0,204,207,1,0,0,0,205,206,1,0,0,0,205,203,1,
  	0,0,0,206,208,1,0,0,0,207,205,1,0,0,0,208,209,5,42,0,0,209,210,5,47,0,
  	0,210,211,1,0,0,0,211,212,6,19,0,0,212,40,1,0,0,0,213,215,7,5,0,0,214,
  	213,1,0,0,0,215,216,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,0,217,218,1,
  	0,0,0,218,219,6,20,0,0,219,42,1,0,0,0,220,221,5,43,0,0,221,44,1,0,0,0,
  	222,223,5,45,0,0,223,46,1,0,0,0,224,225,5,42,0,0,225,48,1,0,0,0,226,227,
  	5,47,0,0,227,50,1,0,0,0,228,229,5,37,0,0,229,52,1,0,0,0,230,231,5,61,
  	0,0,231,232,5,61,0,0,232,54,1,0,0,0,233,234,5,33,0,0,234,235,5,61,0,0,
  	235,56,1,0,0,0,236,237,5,60,0,0,237,58,1,0,0,0,238,239,5,60,0,0,239,240,
  	5,61,0,0,240,60,1,0,0,0,241,242,5,62,0,0,242,62,1,0,0,0,243,244,5,62,
  	0,0,244,245,5,61,0,0,245,64,1,0,0,0,246,247,5,61,0,0,247,66,1,0,0,0,248,
  	249,5,58,0,0,249,68,1,0,0,0,250,251,5,59,0,0,251,70,1,0,0,0,252,253,5,
  	44,0,0,253,72,1,0,0,0,254,255,5,40,0,0,255,74,1,0,0,0,256,257,5,41,0,
  	0,257,76,1,0,0,0,258,259,5,123,0,0,259,78,1,0,0,0,260,261,5,125,0,0,261,
  	80,1,0,0,0,262,263,5,45,0,0,263,264,5,62,0,0,264,82,1,0,0,0,265,266,5,
  	58,0,0,266,267,5,58,0,0,267,84,1,0,0,0,11,0,149,155,160,166,175,181,183,
  	194,205,216,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  threeboltlexerLexerStaticData = staticData.release();
}

}

threeboltLexer::threeboltLexer(CharStream *input) : Lexer(input) {
  threeboltLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *threeboltlexerLexerStaticData->atn, threeboltlexerLexerStaticData->decisionToDFA, threeboltlexerLexerStaticData->sharedContextCache);
}

threeboltLexer::~threeboltLexer() {
  delete _interpreter;
}

std::string threeboltLexer::getGrammarFileName() const {
  return "threebolt.g4";
}

const std::vector<std::string>& threeboltLexer::getRuleNames() const {
  return threeboltlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& threeboltLexer::getChannelNames() const {
  return threeboltlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& threeboltLexer::getModeNames() const {
  return threeboltlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& threeboltLexer::getVocabulary() const {
  return threeboltlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView threeboltLexer::getSerializedATN() const {
  return threeboltlexerLexerStaticData->serializedATN;
}

const atn::ATN& threeboltLexer::getATN() const {
  return *threeboltlexerLexerStaticData->atn;
}




void threeboltLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  threeboltlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(threeboltlexerLexerOnceFlag, threeboltlexerLexerInitialize);
#endif
}
