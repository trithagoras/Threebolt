
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
      "KEYWORD_IF", "KEYWORD_ELSE", "KEYWORD_TRUE", "KEYWORD_FALSE", "KEYWORD_INT", 
      "KEYWORD_FLOAT", "KEYWORD_CHAR", "KEYWORD_BOOL", "ID", "INT_LITERAL", 
      "FLOAT_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", 
      "COMMENT", "MULTILINE_COMMENT", "WS", "PLUS", "MINUS", "STAR", "DIV", 
      "MOD", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", "EQ", "NEQ", 
      "LT", "LEQ", "GT", "GEQ", "ASSIGN", "COLON", "SEMICOLON", "COMMA", 
      "LPAREN", "RPAREN", "LBRACE", "RBRACE", "ARROW", "DOUBLE_COLON"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'from'", "'import'", "'fn'", "'let'", "'return'", "'if'", "'else'", 
      "'true'", "'false'", "'int'", "'float'", "'char'", "'bool'", "", "", 
      "", "", "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'%'", "'+='", 
      "'-='", "'*='", "'/='", "'%='", "'=='", "'!='", "'<'", "'<='", "'>'", 
      "'>='", "'='", "':'", "';'", "','", "'('", "')'", "'{'", "'}'", "'->'", 
      "'::'"
    },
    std::vector<std::string>{
      "", "KEYWORD_FROM", "KEYWORD_IMPORT", "KEYWORD_FN", "KEYWORD_LET", 
      "KEYWORD_RETURN", "KEYWORD_IF", "KEYWORD_ELSE", "KEYWORD_TRUE", "KEYWORD_FALSE", 
      "KEYWORD_INT", "KEYWORD_FLOAT", "KEYWORD_CHAR", "KEYWORD_BOOL", "ID", 
      "INT_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", 
      "COMMENT", "MULTILINE_COMMENT", "WS", "PLUS", "MINUS", "STAR", "DIV", 
      "MOD", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", "EQ", "NEQ", 
      "LT", "LEQ", "GT", "GEQ", "ASSIGN", "COLON", "SEMICOLON", "COMMA", 
      "LPAREN", "RPAREN", "LBRACE", "RBRACE", "ARROW", "DOUBLE_COLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,48,300,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,1,0,1,0,1,0,1,
  	0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,5,13,165,
  	8,13,10,13,12,13,168,9,13,1,14,4,14,171,8,14,11,14,12,14,172,1,15,4,15,
  	176,8,15,11,15,12,15,177,1,15,1,15,5,15,182,8,15,10,15,12,15,185,9,15,
  	1,16,1,16,1,16,1,16,1,17,1,17,3,17,193,8,17,1,18,1,18,1,18,1,18,5,18,
  	199,8,18,10,18,12,18,202,9,18,1,18,1,18,1,19,1,19,1,19,1,19,5,19,210,
  	8,19,10,19,12,19,213,9,19,1,19,1,19,1,20,1,20,1,20,1,20,5,20,221,8,20,
  	10,20,12,20,224,9,20,1,20,1,20,1,20,1,20,1,20,1,21,4,21,232,8,21,11,21,
  	12,21,233,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,
  	1,27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,31,1,31,
  	1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,35,1,35,1,35,1,36,1,36,
  	1,37,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,
  	1,43,1,44,1,44,1,45,1,45,1,46,1,46,1,46,1,47,1,47,1,47,1,222,0,48,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,
  	38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,95,48,1,0,6,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,2,0,34,
  	34,92,92,2,0,10,10,13,13,3,0,9,10,13,13,32,32,309,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,
  	0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,
  	1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,
  	0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,1,97,1,0,0,0,3,102,1,0,0,0,
  	5,109,1,0,0,0,7,112,1,0,0,0,9,116,1,0,0,0,11,123,1,0,0,0,13,126,1,0,0,
  	0,15,131,1,0,0,0,17,136,1,0,0,0,19,142,1,0,0,0,21,146,1,0,0,0,23,152,
  	1,0,0,0,25,157,1,0,0,0,27,162,1,0,0,0,29,170,1,0,0,0,31,175,1,0,0,0,33,
  	186,1,0,0,0,35,192,1,0,0,0,37,194,1,0,0,0,39,205,1,0,0,0,41,216,1,0,0,
  	0,43,231,1,0,0,0,45,237,1,0,0,0,47,239,1,0,0,0,49,241,1,0,0,0,51,243,
  	1,0,0,0,53,245,1,0,0,0,55,247,1,0,0,0,57,250,1,0,0,0,59,253,1,0,0,0,61,
  	256,1,0,0,0,63,259,1,0,0,0,65,262,1,0,0,0,67,265,1,0,0,0,69,268,1,0,0,
  	0,71,270,1,0,0,0,73,273,1,0,0,0,75,275,1,0,0,0,77,278,1,0,0,0,79,280,
  	1,0,0,0,81,282,1,0,0,0,83,284,1,0,0,0,85,286,1,0,0,0,87,288,1,0,0,0,89,
  	290,1,0,0,0,91,292,1,0,0,0,93,294,1,0,0,0,95,297,1,0,0,0,97,98,5,102,
  	0,0,98,99,5,114,0,0,99,100,5,111,0,0,100,101,5,109,0,0,101,2,1,0,0,0,
  	102,103,5,105,0,0,103,104,5,109,0,0,104,105,5,112,0,0,105,106,5,111,0,
  	0,106,107,5,114,0,0,107,108,5,116,0,0,108,4,1,0,0,0,109,110,5,102,0,0,
  	110,111,5,110,0,0,111,6,1,0,0,0,112,113,5,108,0,0,113,114,5,101,0,0,114,
  	115,5,116,0,0,115,8,1,0,0,0,116,117,5,114,0,0,117,118,5,101,0,0,118,119,
  	5,116,0,0,119,120,5,117,0,0,120,121,5,114,0,0,121,122,5,110,0,0,122,10,
  	1,0,0,0,123,124,5,105,0,0,124,125,5,102,0,0,125,12,1,0,0,0,126,127,5,
  	101,0,0,127,128,5,108,0,0,128,129,5,115,0,0,129,130,5,101,0,0,130,14,
  	1,0,0,0,131,132,5,116,0,0,132,133,5,114,0,0,133,134,5,117,0,0,134,135,
  	5,101,0,0,135,16,1,0,0,0,136,137,5,102,0,0,137,138,5,97,0,0,138,139,5,
  	108,0,0,139,140,5,115,0,0,140,141,5,101,0,0,141,18,1,0,0,0,142,143,5,
  	105,0,0,143,144,5,110,0,0,144,145,5,116,0,0,145,20,1,0,0,0,146,147,5,
  	102,0,0,147,148,5,108,0,0,148,149,5,111,0,0,149,150,5,97,0,0,150,151,
  	5,116,0,0,151,22,1,0,0,0,152,153,5,99,0,0,153,154,5,104,0,0,154,155,5,
  	97,0,0,155,156,5,114,0,0,156,24,1,0,0,0,157,158,5,98,0,0,158,159,5,111,
  	0,0,159,160,5,111,0,0,160,161,5,108,0,0,161,26,1,0,0,0,162,166,7,0,0,
  	0,163,165,7,1,0,0,164,163,1,0,0,0,165,168,1,0,0,0,166,164,1,0,0,0,166,
  	167,1,0,0,0,167,28,1,0,0,0,168,166,1,0,0,0,169,171,7,2,0,0,170,169,1,
  	0,0,0,171,172,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,30,1,0,0,0,
  	174,176,7,2,0,0,175,174,1,0,0,0,176,177,1,0,0,0,177,175,1,0,0,0,177,178,
  	1,0,0,0,178,179,1,0,0,0,179,183,5,46,0,0,180,182,7,2,0,0,181,180,1,0,
  	0,0,182,185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,32,1,0,0,0,185,
  	183,1,0,0,0,186,187,5,39,0,0,187,188,9,0,0,0,188,189,5,39,0,0,189,34,
  	1,0,0,0,190,193,3,15,7,0,191,193,3,17,8,0,192,190,1,0,0,0,192,191,1,0,
  	0,0,193,36,1,0,0,0,194,200,5,34,0,0,195,199,8,3,0,0,196,197,5,92,0,0,
  	197,199,9,0,0,0,198,195,1,0,0,0,198,196,1,0,0,0,199,202,1,0,0,0,200,198,
  	1,0,0,0,200,201,1,0,0,0,201,203,1,0,0,0,202,200,1,0,0,0,203,204,5,34,
  	0,0,204,38,1,0,0,0,205,206,5,47,0,0,206,207,5,47,0,0,207,211,1,0,0,0,
  	208,210,8,4,0,0,209,208,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,212,
  	1,0,0,0,212,214,1,0,0,0,213,211,1,0,0,0,214,215,6,19,0,0,215,40,1,0,0,
  	0,216,217,5,47,0,0,217,218,5,42,0,0,218,222,1,0,0,0,219,221,9,0,0,0,220,
  	219,1,0,0,0,221,224,1,0,0,0,222,223,1,0,0,0,222,220,1,0,0,0,223,225,1,
  	0,0,0,224,222,1,0,0,0,225,226,5,42,0,0,226,227,5,47,0,0,227,228,1,0,0,
  	0,228,229,6,20,0,0,229,42,1,0,0,0,230,232,7,5,0,0,231,230,1,0,0,0,232,
  	233,1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,235,1,0,0,0,235,236,6,
  	21,0,0,236,44,1,0,0,0,237,238,5,43,0,0,238,46,1,0,0,0,239,240,5,45,0,
  	0,240,48,1,0,0,0,241,242,5,42,0,0,242,50,1,0,0,0,243,244,5,47,0,0,244,
  	52,1,0,0,0,245,246,5,37,0,0,246,54,1,0,0,0,247,248,5,43,0,0,248,249,5,
  	61,0,0,249,56,1,0,0,0,250,251,5,45,0,0,251,252,5,61,0,0,252,58,1,0,0,
  	0,253,254,5,42,0,0,254,255,5,61,0,0,255,60,1,0,0,0,256,257,5,47,0,0,257,
  	258,5,61,0,0,258,62,1,0,0,0,259,260,5,37,0,0,260,261,5,61,0,0,261,64,
  	1,0,0,0,262,263,5,61,0,0,263,264,5,61,0,0,264,66,1,0,0,0,265,266,5,33,
  	0,0,266,267,5,61,0,0,267,68,1,0,0,0,268,269,5,60,0,0,269,70,1,0,0,0,270,
  	271,5,60,0,0,271,272,5,61,0,0,272,72,1,0,0,0,273,274,5,62,0,0,274,74,
  	1,0,0,0,275,276,5,62,0,0,276,277,5,61,0,0,277,76,1,0,0,0,278,279,5,61,
  	0,0,279,78,1,0,0,0,280,281,5,58,0,0,281,80,1,0,0,0,282,283,5,59,0,0,283,
  	82,1,0,0,0,284,285,5,44,0,0,285,84,1,0,0,0,286,287,5,40,0,0,287,86,1,
  	0,0,0,288,289,5,41,0,0,289,88,1,0,0,0,290,291,5,123,0,0,291,90,1,0,0,
  	0,292,293,5,125,0,0,293,92,1,0,0,0,294,295,5,45,0,0,295,296,5,62,0,0,
  	296,94,1,0,0,0,297,298,5,58,0,0,298,299,5,58,0,0,299,96,1,0,0,0,11,0,
  	166,172,177,183,192,198,200,211,222,233,1,6,0,0
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
