
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
      "KEYWORD_FLOAT", "KEYWORD_CHAR", "KEYWORD_BOOL", "KEYWORD_VOID", "ID", 
      "INT_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", 
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
      "'true'", "'false'", "'int'", "'float'", "'char'", "'bool'", "'void'", 
      "", "", "", "", "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'%'", 
      "'+='", "'-='", "'*='", "'/='", "'%='", "'=='", "'!='", "'<'", "'<='", 
      "'>'", "'>='", "'='", "':'", "';'", "','", "'('", "')'", "'{'", "'}'", 
      "'->'", "'::'"
    },
    std::vector<std::string>{
      "", "KEYWORD_FROM", "KEYWORD_IMPORT", "KEYWORD_FN", "KEYWORD_LET", 
      "KEYWORD_RETURN", "KEYWORD_IF", "KEYWORD_ELSE", "KEYWORD_TRUE", "KEYWORD_FALSE", 
      "KEYWORD_INT", "KEYWORD_FLOAT", "KEYWORD_CHAR", "KEYWORD_BOOL", "KEYWORD_VOID", 
      "ID", "INT_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL", 
      "STRING_LITERAL", "COMMENT", "MULTILINE_COMMENT", "WS", "PLUS", "MINUS", 
      "STAR", "DIV", "MOD", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", 
      "EQ", "NEQ", "LT", "LEQ", "GT", "GEQ", "ASSIGN", "COLON", "SEMICOLON", 
      "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "ARROW", "DOUBLE_COLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,49,307,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,
  	13,1,13,1,13,1,13,1,14,1,14,5,14,172,8,14,10,14,12,14,175,9,14,1,15,4,
  	15,178,8,15,11,15,12,15,179,1,16,4,16,183,8,16,11,16,12,16,184,1,16,1,
  	16,5,16,189,8,16,10,16,12,16,192,9,16,1,17,1,17,1,17,1,17,1,18,1,18,3,
  	18,200,8,18,1,19,1,19,1,19,1,19,5,19,206,8,19,10,19,12,19,209,9,19,1,
  	19,1,19,1,20,1,20,1,20,1,20,5,20,217,8,20,10,20,12,20,220,9,20,1,20,1,
  	20,1,21,1,21,1,21,1,21,5,21,228,8,21,10,21,12,21,231,9,21,1,21,1,21,1,
  	21,1,21,1,21,1,22,4,22,239,8,22,11,22,12,22,240,1,22,1,22,1,23,1,23,1,
  	24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,1,
  	30,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,
  	34,1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,38,1,38,1,38,1,39,1,39,1,40,1,
  	40,1,41,1,41,1,42,1,42,1,43,1,43,1,44,1,44,1,45,1,45,1,46,1,46,1,47,1,
  	47,1,47,1,48,1,48,1,48,1,229,0,49,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,
  	41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,
  	32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,
  	87,44,89,45,91,46,93,47,95,48,97,49,1,0,6,3,0,65,90,95,95,97,122,4,0,
  	48,57,65,90,95,95,97,122,1,0,48,57,2,0,34,34,92,92,2,0,10,10,13,13,3,
  	0,9,10,13,13,32,32,316,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,
  	0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,
  	0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,
  	1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,
  	0,0,0,95,1,0,0,0,0,97,1,0,0,0,1,99,1,0,0,0,3,104,1,0,0,0,5,111,1,0,0,
  	0,7,114,1,0,0,0,9,118,1,0,0,0,11,125,1,0,0,0,13,128,1,0,0,0,15,133,1,
  	0,0,0,17,138,1,0,0,0,19,144,1,0,0,0,21,148,1,0,0,0,23,154,1,0,0,0,25,
  	159,1,0,0,0,27,164,1,0,0,0,29,169,1,0,0,0,31,177,1,0,0,0,33,182,1,0,0,
  	0,35,193,1,0,0,0,37,199,1,0,0,0,39,201,1,0,0,0,41,212,1,0,0,0,43,223,
  	1,0,0,0,45,238,1,0,0,0,47,244,1,0,0,0,49,246,1,0,0,0,51,248,1,0,0,0,53,
  	250,1,0,0,0,55,252,1,0,0,0,57,254,1,0,0,0,59,257,1,0,0,0,61,260,1,0,0,
  	0,63,263,1,0,0,0,65,266,1,0,0,0,67,269,1,0,0,0,69,272,1,0,0,0,71,275,
  	1,0,0,0,73,277,1,0,0,0,75,280,1,0,0,0,77,282,1,0,0,0,79,285,1,0,0,0,81,
  	287,1,0,0,0,83,289,1,0,0,0,85,291,1,0,0,0,87,293,1,0,0,0,89,295,1,0,0,
  	0,91,297,1,0,0,0,93,299,1,0,0,0,95,301,1,0,0,0,97,304,1,0,0,0,99,100,
  	5,102,0,0,100,101,5,114,0,0,101,102,5,111,0,0,102,103,5,109,0,0,103,2,
  	1,0,0,0,104,105,5,105,0,0,105,106,5,109,0,0,106,107,5,112,0,0,107,108,
  	5,111,0,0,108,109,5,114,0,0,109,110,5,116,0,0,110,4,1,0,0,0,111,112,5,
  	102,0,0,112,113,5,110,0,0,113,6,1,0,0,0,114,115,5,108,0,0,115,116,5,101,
  	0,0,116,117,5,116,0,0,117,8,1,0,0,0,118,119,5,114,0,0,119,120,5,101,0,
  	0,120,121,5,116,0,0,121,122,5,117,0,0,122,123,5,114,0,0,123,124,5,110,
  	0,0,124,10,1,0,0,0,125,126,5,105,0,0,126,127,5,102,0,0,127,12,1,0,0,0,
  	128,129,5,101,0,0,129,130,5,108,0,0,130,131,5,115,0,0,131,132,5,101,0,
  	0,132,14,1,0,0,0,133,134,5,116,0,0,134,135,5,114,0,0,135,136,5,117,0,
  	0,136,137,5,101,0,0,137,16,1,0,0,0,138,139,5,102,0,0,139,140,5,97,0,0,
  	140,141,5,108,0,0,141,142,5,115,0,0,142,143,5,101,0,0,143,18,1,0,0,0,
  	144,145,5,105,0,0,145,146,5,110,0,0,146,147,5,116,0,0,147,20,1,0,0,0,
  	148,149,5,102,0,0,149,150,5,108,0,0,150,151,5,111,0,0,151,152,5,97,0,
  	0,152,153,5,116,0,0,153,22,1,0,0,0,154,155,5,99,0,0,155,156,5,104,0,0,
  	156,157,5,97,0,0,157,158,5,114,0,0,158,24,1,0,0,0,159,160,5,98,0,0,160,
  	161,5,111,0,0,161,162,5,111,0,0,162,163,5,108,0,0,163,26,1,0,0,0,164,
  	165,5,118,0,0,165,166,5,111,0,0,166,167,5,105,0,0,167,168,5,100,0,0,168,
  	28,1,0,0,0,169,173,7,0,0,0,170,172,7,1,0,0,171,170,1,0,0,0,172,175,1,
  	0,0,0,173,171,1,0,0,0,173,174,1,0,0,0,174,30,1,0,0,0,175,173,1,0,0,0,
  	176,178,7,2,0,0,177,176,1,0,0,0,178,179,1,0,0,0,179,177,1,0,0,0,179,180,
  	1,0,0,0,180,32,1,0,0,0,181,183,7,2,0,0,182,181,1,0,0,0,183,184,1,0,0,
  	0,184,182,1,0,0,0,184,185,1,0,0,0,185,186,1,0,0,0,186,190,5,46,0,0,187,
  	189,7,2,0,0,188,187,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,1,
  	0,0,0,191,34,1,0,0,0,192,190,1,0,0,0,193,194,5,39,0,0,194,195,9,0,0,0,
  	195,196,5,39,0,0,196,36,1,0,0,0,197,200,3,15,7,0,198,200,3,17,8,0,199,
  	197,1,0,0,0,199,198,1,0,0,0,200,38,1,0,0,0,201,207,5,34,0,0,202,206,8,
  	3,0,0,203,204,5,92,0,0,204,206,9,0,0,0,205,202,1,0,0,0,205,203,1,0,0,
  	0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,210,1,0,0,0,209,
  	207,1,0,0,0,210,211,5,34,0,0,211,40,1,0,0,0,212,213,5,47,0,0,213,214,
  	5,47,0,0,214,218,1,0,0,0,215,217,8,4,0,0,216,215,1,0,0,0,217,220,1,0,
  	0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,221,1,0,0,0,220,218,1,0,0,0,221,
  	222,6,20,0,0,222,42,1,0,0,0,223,224,5,47,0,0,224,225,5,42,0,0,225,229,
  	1,0,0,0,226,228,9,0,0,0,227,226,1,0,0,0,228,231,1,0,0,0,229,230,1,0,0,
  	0,229,227,1,0,0,0,230,232,1,0,0,0,231,229,1,0,0,0,232,233,5,42,0,0,233,
  	234,5,47,0,0,234,235,1,0,0,0,235,236,6,21,0,0,236,44,1,0,0,0,237,239,
  	7,5,0,0,238,237,1,0,0,0,239,240,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,
  	0,241,242,1,0,0,0,242,243,6,22,0,0,243,46,1,0,0,0,244,245,5,43,0,0,245,
  	48,1,0,0,0,246,247,5,45,0,0,247,50,1,0,0,0,248,249,5,42,0,0,249,52,1,
  	0,0,0,250,251,5,47,0,0,251,54,1,0,0,0,252,253,5,37,0,0,253,56,1,0,0,0,
  	254,255,5,43,0,0,255,256,5,61,0,0,256,58,1,0,0,0,257,258,5,45,0,0,258,
  	259,5,61,0,0,259,60,1,0,0,0,260,261,5,42,0,0,261,262,5,61,0,0,262,62,
  	1,0,0,0,263,264,5,47,0,0,264,265,5,61,0,0,265,64,1,0,0,0,266,267,5,37,
  	0,0,267,268,5,61,0,0,268,66,1,0,0,0,269,270,5,61,0,0,270,271,5,61,0,0,
  	271,68,1,0,0,0,272,273,5,33,0,0,273,274,5,61,0,0,274,70,1,0,0,0,275,276,
  	5,60,0,0,276,72,1,0,0,0,277,278,5,60,0,0,278,279,5,61,0,0,279,74,1,0,
  	0,0,280,281,5,62,0,0,281,76,1,0,0,0,282,283,5,62,0,0,283,284,5,61,0,0,
  	284,78,1,0,0,0,285,286,5,61,0,0,286,80,1,0,0,0,287,288,5,58,0,0,288,82,
  	1,0,0,0,289,290,5,59,0,0,290,84,1,0,0,0,291,292,5,44,0,0,292,86,1,0,0,
  	0,293,294,5,40,0,0,294,88,1,0,0,0,295,296,5,41,0,0,296,90,1,0,0,0,297,
  	298,5,123,0,0,298,92,1,0,0,0,299,300,5,125,0,0,300,94,1,0,0,0,301,302,
  	5,45,0,0,302,303,5,62,0,0,303,96,1,0,0,0,304,305,5,58,0,0,305,306,5,58,
  	0,0,306,98,1,0,0,0,11,0,173,179,184,190,199,205,207,218,229,240,1,6,0,
  	0
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
