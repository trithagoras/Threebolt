
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1


#include "threeboltListener.h"
#include "threeboltVisitor.h"

#include "threeboltParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ThreeboltParserStaticData final {
  ThreeboltParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ThreeboltParserStaticData(const ThreeboltParserStaticData&) = delete;
  ThreeboltParserStaticData(ThreeboltParserStaticData&&) = delete;
  ThreeboltParserStaticData& operator=(const ThreeboltParserStaticData&) = delete;
  ThreeboltParserStaticData& operator=(ThreeboltParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag threeboltParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ThreeboltParserStaticData *threeboltParserStaticData = nullptr;

void threeboltParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (threeboltParserStaticData != nullptr) {
    return;
  }
#else
  assert(threeboltParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ThreeboltParserStaticData>(
    std::vector<std::string>{
      "program", "importStmt", "functionDecl", "parameters", "parameter", 
      "block", "statement", "variableDecl", "assignment", "assignmentOperator", 
      "returnStmt", "ifStmt", "elseIfStmt", "elseStmt", "exprStmt", "expr", 
      "functionCall", "arguments", "type"
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
  	4,1,48,184,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,3,2,59,
  	8,2,1,2,1,2,1,2,3,2,64,8,2,1,2,1,2,1,3,1,3,1,3,5,3,71,8,3,10,3,12,3,74,
  	9,3,1,4,1,4,1,4,1,4,1,5,1,5,5,5,82,8,5,10,5,12,5,85,9,5,1,5,1,5,1,6,1,
  	6,1,6,1,6,1,6,3,6,94,8,6,1,7,1,7,1,7,1,7,3,7,100,8,7,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,3,10,115,8,10,1,10,1,10,1,11,1,
  	11,1,11,1,11,5,11,123,8,11,10,11,12,11,126,9,11,1,11,3,11,129,8,11,1,
  	12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,154,8,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,5,15,162,8,15,10,15,12,15,165,9,15,1,16,1,16,1,16,3,
  	16,170,8,16,1,16,1,16,1,17,1,17,1,17,5,17,177,8,17,10,17,12,17,180,9,
  	17,1,18,1,18,1,18,0,1,30,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,0,4,2,0,28,31,39,39,1,0,23,27,1,0,33,38,1,0,10,13,190,0,43,1,
  	0,0,0,2,46,1,0,0,0,4,54,1,0,0,0,6,67,1,0,0,0,8,75,1,0,0,0,10,79,1,0,0,
  	0,12,93,1,0,0,0,14,95,1,0,0,0,16,105,1,0,0,0,18,110,1,0,0,0,20,112,1,
  	0,0,0,22,118,1,0,0,0,24,130,1,0,0,0,26,135,1,0,0,0,28,138,1,0,0,0,30,
  	153,1,0,0,0,32,166,1,0,0,0,34,173,1,0,0,0,36,181,1,0,0,0,38,42,3,12,6,
  	0,39,42,3,4,2,0,40,42,3,2,1,0,41,38,1,0,0,0,41,39,1,0,0,0,41,40,1,0,0,
  	0,42,45,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,1,1,0,0,0,45,43,1,0,0,
  	0,46,47,5,1,0,0,47,48,5,14,0,0,48,49,5,48,0,0,49,50,5,14,0,0,50,51,5,
  	2,0,0,51,52,5,25,0,0,52,53,5,41,0,0,53,3,1,0,0,0,54,55,5,3,0,0,55,56,
  	5,14,0,0,56,58,5,43,0,0,57,59,3,6,3,0,58,57,1,0,0,0,58,59,1,0,0,0,59,
  	60,1,0,0,0,60,63,5,44,0,0,61,62,5,47,0,0,62,64,3,36,18,0,63,61,1,0,0,
  	0,63,64,1,0,0,0,64,65,1,0,0,0,65,66,3,10,5,0,66,5,1,0,0,0,67,72,3,8,4,
  	0,68,69,5,42,0,0,69,71,3,8,4,0,70,68,1,0,0,0,71,74,1,0,0,0,72,70,1,0,
  	0,0,72,73,1,0,0,0,73,7,1,0,0,0,74,72,1,0,0,0,75,76,5,14,0,0,76,77,5,40,
  	0,0,77,78,3,36,18,0,78,9,1,0,0,0,79,83,5,45,0,0,80,82,3,12,6,0,81,80,
  	1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,86,1,0,0,0,85,83,
  	1,0,0,0,86,87,5,46,0,0,87,11,1,0,0,0,88,94,3,14,7,0,89,94,3,16,8,0,90,
  	94,3,20,10,0,91,94,3,22,11,0,92,94,3,28,14,0,93,88,1,0,0,0,93,89,1,0,
  	0,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,13,1,0,0,0,95,96,5,4,
  	0,0,96,97,5,14,0,0,97,99,5,40,0,0,98,100,3,36,18,0,99,98,1,0,0,0,99,100,
  	1,0,0,0,100,101,1,0,0,0,101,102,5,39,0,0,102,103,3,30,15,0,103,104,5,
  	41,0,0,104,15,1,0,0,0,105,106,5,14,0,0,106,107,3,18,9,0,107,108,3,30,
  	15,0,108,109,5,41,0,0,109,17,1,0,0,0,110,111,7,0,0,0,111,19,1,0,0,0,112,
  	114,5,5,0,0,113,115,3,30,15,0,114,113,1,0,0,0,114,115,1,0,0,0,115,116,
  	1,0,0,0,116,117,5,41,0,0,117,21,1,0,0,0,118,119,5,6,0,0,119,120,3,30,
  	15,0,120,124,3,10,5,0,121,123,3,24,12,0,122,121,1,0,0,0,123,126,1,0,0,
  	0,124,122,1,0,0,0,124,125,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,127,
  	129,3,26,13,0,128,127,1,0,0,0,128,129,1,0,0,0,129,23,1,0,0,0,130,131,
  	5,7,0,0,131,132,5,6,0,0,132,133,3,30,15,0,133,134,3,10,5,0,134,25,1,0,
  	0,0,135,136,5,7,0,0,136,137,3,10,5,0,137,27,1,0,0,0,138,139,3,30,15,0,
  	139,140,5,41,0,0,140,29,1,0,0,0,141,142,6,15,-1,0,142,154,5,14,0,0,143,
  	154,5,15,0,0,144,154,5,16,0,0,145,154,5,17,0,0,146,154,5,18,0,0,147,154,
  	5,19,0,0,148,154,3,32,16,0,149,150,5,43,0,0,150,151,3,30,15,0,151,152,
  	5,44,0,0,152,154,1,0,0,0,153,141,1,0,0,0,153,143,1,0,0,0,153,144,1,0,
  	0,0,153,145,1,0,0,0,153,146,1,0,0,0,153,147,1,0,0,0,153,148,1,0,0,0,153,
  	149,1,0,0,0,154,163,1,0,0,0,155,156,10,10,0,0,156,157,7,1,0,0,157,162,
  	3,30,15,11,158,159,10,9,0,0,159,160,7,2,0,0,160,162,3,30,15,10,161,155,
  	1,0,0,0,161,158,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,0,163,164,1,0,0,
  	0,164,31,1,0,0,0,165,163,1,0,0,0,166,167,5,14,0,0,167,169,5,43,0,0,168,
  	170,3,34,17,0,169,168,1,0,0,0,169,170,1,0,0,0,170,171,1,0,0,0,171,172,
  	5,44,0,0,172,33,1,0,0,0,173,178,3,30,15,0,174,175,5,42,0,0,175,177,3,
  	30,15,0,176,174,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,
  	0,179,35,1,0,0,0,180,178,1,0,0,0,181,182,7,3,0,0,182,37,1,0,0,0,16,41,
  	43,58,63,72,83,93,99,114,124,128,153,161,163,169,178
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  threeboltParserStaticData = staticData.release();
}

}

threeboltParser::threeboltParser(TokenStream *input) : threeboltParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

threeboltParser::threeboltParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  threeboltParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *threeboltParserStaticData->atn, threeboltParserStaticData->decisionToDFA, threeboltParserStaticData->sharedContextCache, options);
}

threeboltParser::~threeboltParser() {
  delete _interpreter;
}

const atn::ATN& threeboltParser::getATN() const {
  return *threeboltParserStaticData->atn;
}

std::string threeboltParser::getGrammarFileName() const {
  return "threebolt.g4";
}

const std::vector<std::string>& threeboltParser::getRuleNames() const {
  return threeboltParserStaticData->ruleNames;
}

const dfa::Vocabulary& threeboltParser::getVocabulary() const {
  return threeboltParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView threeboltParser::getSerializedATN() const {
  return threeboltParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

threeboltParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<threeboltParser::StatementContext *> threeboltParser::ProgramContext::statement() {
  return getRuleContexts<threeboltParser::StatementContext>();
}

threeboltParser::StatementContext* threeboltParser::ProgramContext::statement(size_t i) {
  return getRuleContext<threeboltParser::StatementContext>(i);
}

std::vector<threeboltParser::FunctionDeclContext *> threeboltParser::ProgramContext::functionDecl() {
  return getRuleContexts<threeboltParser::FunctionDeclContext>();
}

threeboltParser::FunctionDeclContext* threeboltParser::ProgramContext::functionDecl(size_t i) {
  return getRuleContext<threeboltParser::FunctionDeclContext>(i);
}

std::vector<threeboltParser::ImportStmtContext *> threeboltParser::ProgramContext::importStmt() {
  return getRuleContexts<threeboltParser::ImportStmtContext>();
}

threeboltParser::ImportStmtContext* threeboltParser::ProgramContext::importStmt(size_t i) {
  return getRuleContext<threeboltParser::ImportStmtContext>(i);
}


size_t threeboltParser::ProgramContext::getRuleIndex() const {
  return threeboltParser::RuleProgram;
}

void threeboltParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void threeboltParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any threeboltParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ProgramContext* threeboltParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, threeboltParser::RuleProgram);
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
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796094054522) != 0)) {
      setState(41);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case threeboltParser::KEYWORD_LET:
        case threeboltParser::KEYWORD_RETURN:
        case threeboltParser::KEYWORD_IF:
        case threeboltParser::ID:
        case threeboltParser::INT_LITERAL:
        case threeboltParser::FLOAT_LITERAL:
        case threeboltParser::CHAR_LITERAL:
        case threeboltParser::BOOL_LITERAL:
        case threeboltParser::STRING_LITERAL:
        case threeboltParser::LPAREN: {
          setState(38);
          statement();
          break;
        }

        case threeboltParser::KEYWORD_FN: {
          setState(39);
          functionDecl();
          break;
        }

        case threeboltParser::KEYWORD_FROM: {
          setState(40);
          importStmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStmtContext ------------------------------------------------------------------

threeboltParser::ImportStmtContext::ImportStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::ImportStmtContext::KEYWORD_FROM() {
  return getToken(threeboltParser::KEYWORD_FROM, 0);
}

std::vector<tree::TerminalNode *> threeboltParser::ImportStmtContext::ID() {
  return getTokens(threeboltParser::ID);
}

tree::TerminalNode* threeboltParser::ImportStmtContext::ID(size_t i) {
  return getToken(threeboltParser::ID, i);
}

tree::TerminalNode* threeboltParser::ImportStmtContext::DOUBLE_COLON() {
  return getToken(threeboltParser::DOUBLE_COLON, 0);
}

tree::TerminalNode* threeboltParser::ImportStmtContext::KEYWORD_IMPORT() {
  return getToken(threeboltParser::KEYWORD_IMPORT, 0);
}

tree::TerminalNode* threeboltParser::ImportStmtContext::STAR() {
  return getToken(threeboltParser::STAR, 0);
}

tree::TerminalNode* threeboltParser::ImportStmtContext::SEMICOLON() {
  return getToken(threeboltParser::SEMICOLON, 0);
}


size_t threeboltParser::ImportStmtContext::getRuleIndex() const {
  return threeboltParser::RuleImportStmt;
}

void threeboltParser::ImportStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStmt(this);
}

void threeboltParser::ImportStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStmt(this);
}


std::any threeboltParser::ImportStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitImportStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ImportStmtContext* threeboltParser::importStmt() {
  ImportStmtContext *_localctx = _tracker.createInstance<ImportStmtContext>(_ctx, getState());
  enterRule(_localctx, 2, threeboltParser::RuleImportStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(threeboltParser::KEYWORD_FROM);
    setState(47);
    match(threeboltParser::ID);
    setState(48);
    match(threeboltParser::DOUBLE_COLON);
    setState(49);
    match(threeboltParser::ID);
    setState(50);
    match(threeboltParser::KEYWORD_IMPORT);
    setState(51);
    match(threeboltParser::STAR);
    setState(52);
    match(threeboltParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

threeboltParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::FunctionDeclContext::KEYWORD_FN() {
  return getToken(threeboltParser::KEYWORD_FN, 0);
}

tree::TerminalNode* threeboltParser::FunctionDeclContext::ID() {
  return getToken(threeboltParser::ID, 0);
}

tree::TerminalNode* threeboltParser::FunctionDeclContext::LPAREN() {
  return getToken(threeboltParser::LPAREN, 0);
}

tree::TerminalNode* threeboltParser::FunctionDeclContext::RPAREN() {
  return getToken(threeboltParser::RPAREN, 0);
}

threeboltParser::BlockContext* threeboltParser::FunctionDeclContext::block() {
  return getRuleContext<threeboltParser::BlockContext>(0);
}

threeboltParser::ParametersContext* threeboltParser::FunctionDeclContext::parameters() {
  return getRuleContext<threeboltParser::ParametersContext>(0);
}

tree::TerminalNode* threeboltParser::FunctionDeclContext::ARROW() {
  return getToken(threeboltParser::ARROW, 0);
}

threeboltParser::TypeContext* threeboltParser::FunctionDeclContext::type() {
  return getRuleContext<threeboltParser::TypeContext>(0);
}


size_t threeboltParser::FunctionDeclContext::getRuleIndex() const {
  return threeboltParser::RuleFunctionDecl;
}

void threeboltParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void threeboltParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


std::any threeboltParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::FunctionDeclContext* threeboltParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, threeboltParser::RuleFunctionDecl);
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
    setState(54);
    match(threeboltParser::KEYWORD_FN);
    setState(55);
    match(threeboltParser::ID);
    setState(56);
    match(threeboltParser::LPAREN);
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == threeboltParser::ID) {
      setState(57);
      parameters();
    }
    setState(60);
    match(threeboltParser::RPAREN);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == threeboltParser::ARROW) {
      setState(61);
      match(threeboltParser::ARROW);
      setState(62);
      type();
    }
    setState(65);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

threeboltParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<threeboltParser::ParameterContext *> threeboltParser::ParametersContext::parameter() {
  return getRuleContexts<threeboltParser::ParameterContext>();
}

threeboltParser::ParameterContext* threeboltParser::ParametersContext::parameter(size_t i) {
  return getRuleContext<threeboltParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> threeboltParser::ParametersContext::COMMA() {
  return getTokens(threeboltParser::COMMA);
}

tree::TerminalNode* threeboltParser::ParametersContext::COMMA(size_t i) {
  return getToken(threeboltParser::COMMA, i);
}


size_t threeboltParser::ParametersContext::getRuleIndex() const {
  return threeboltParser::RuleParameters;
}

void threeboltParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void threeboltParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


std::any threeboltParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ParametersContext* threeboltParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 6, threeboltParser::RuleParameters);
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
    setState(67);
    parameter();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == threeboltParser::COMMA) {
      setState(68);
      match(threeboltParser::COMMA);
      setState(69);
      parameter();
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

threeboltParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::ParameterContext::ID() {
  return getToken(threeboltParser::ID, 0);
}

tree::TerminalNode* threeboltParser::ParameterContext::COLON() {
  return getToken(threeboltParser::COLON, 0);
}

threeboltParser::TypeContext* threeboltParser::ParameterContext::type() {
  return getRuleContext<threeboltParser::TypeContext>(0);
}


size_t threeboltParser::ParameterContext::getRuleIndex() const {
  return threeboltParser::RuleParameter;
}

void threeboltParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void threeboltParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any threeboltParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ParameterContext* threeboltParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 8, threeboltParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(threeboltParser::ID);
    setState(76);
    match(threeboltParser::COLON);
    setState(77);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

threeboltParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::BlockContext::LBRACE() {
  return getToken(threeboltParser::LBRACE, 0);
}

tree::TerminalNode* threeboltParser::BlockContext::RBRACE() {
  return getToken(threeboltParser::RBRACE, 0);
}

std::vector<threeboltParser::StatementContext *> threeboltParser::BlockContext::statement() {
  return getRuleContexts<threeboltParser::StatementContext>();
}

threeboltParser::StatementContext* threeboltParser::BlockContext::statement(size_t i) {
  return getRuleContext<threeboltParser::StatementContext>(i);
}


size_t threeboltParser::BlockContext::getRuleIndex() const {
  return threeboltParser::RuleBlock;
}

void threeboltParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void threeboltParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any threeboltParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::BlockContext* threeboltParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, threeboltParser::RuleBlock);
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
    setState(79);
    match(threeboltParser::LBRACE);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796094054512) != 0)) {
      setState(80);
      statement();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(threeboltParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

threeboltParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

threeboltParser::VariableDeclContext* threeboltParser::StatementContext::variableDecl() {
  return getRuleContext<threeboltParser::VariableDeclContext>(0);
}

threeboltParser::AssignmentContext* threeboltParser::StatementContext::assignment() {
  return getRuleContext<threeboltParser::AssignmentContext>(0);
}

threeboltParser::ReturnStmtContext* threeboltParser::StatementContext::returnStmt() {
  return getRuleContext<threeboltParser::ReturnStmtContext>(0);
}

threeboltParser::IfStmtContext* threeboltParser::StatementContext::ifStmt() {
  return getRuleContext<threeboltParser::IfStmtContext>(0);
}

threeboltParser::ExprStmtContext* threeboltParser::StatementContext::exprStmt() {
  return getRuleContext<threeboltParser::ExprStmtContext>(0);
}


size_t threeboltParser::StatementContext::getRuleIndex() const {
  return threeboltParser::RuleStatement;
}

void threeboltParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void threeboltParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any threeboltParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::StatementContext* threeboltParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, threeboltParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      variableDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(90);
      returnStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(91);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(92);
      exprStmt();
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

//----------------- VariableDeclContext ------------------------------------------------------------------

threeboltParser::VariableDeclContext::VariableDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::VariableDeclContext::KEYWORD_LET() {
  return getToken(threeboltParser::KEYWORD_LET, 0);
}

tree::TerminalNode* threeboltParser::VariableDeclContext::ID() {
  return getToken(threeboltParser::ID, 0);
}

tree::TerminalNode* threeboltParser::VariableDeclContext::COLON() {
  return getToken(threeboltParser::COLON, 0);
}

tree::TerminalNode* threeboltParser::VariableDeclContext::ASSIGN() {
  return getToken(threeboltParser::ASSIGN, 0);
}

threeboltParser::ExprContext* threeboltParser::VariableDeclContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}

tree::TerminalNode* threeboltParser::VariableDeclContext::SEMICOLON() {
  return getToken(threeboltParser::SEMICOLON, 0);
}

threeboltParser::TypeContext* threeboltParser::VariableDeclContext::type() {
  return getRuleContext<threeboltParser::TypeContext>(0);
}


size_t threeboltParser::VariableDeclContext::getRuleIndex() const {
  return threeboltParser::RuleVariableDecl;
}

void threeboltParser::VariableDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDecl(this);
}

void threeboltParser::VariableDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDecl(this);
}


std::any threeboltParser::VariableDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitVariableDecl(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::VariableDeclContext* threeboltParser::variableDecl() {
  VariableDeclContext *_localctx = _tracker.createInstance<VariableDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, threeboltParser::RuleVariableDecl);
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
    setState(95);
    match(threeboltParser::KEYWORD_LET);
    setState(96);
    match(threeboltParser::ID);
    setState(97);
    match(threeboltParser::COLON);
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15360) != 0)) {
      setState(98);
      type();
    }
    setState(101);
    match(threeboltParser::ASSIGN);
    setState(102);
    expr(0);
    setState(103);
    match(threeboltParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

threeboltParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::AssignmentContext::ID() {
  return getToken(threeboltParser::ID, 0);
}

threeboltParser::AssignmentOperatorContext* threeboltParser::AssignmentContext::assignmentOperator() {
  return getRuleContext<threeboltParser::AssignmentOperatorContext>(0);
}

threeboltParser::ExprContext* threeboltParser::AssignmentContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}

tree::TerminalNode* threeboltParser::AssignmentContext::SEMICOLON() {
  return getToken(threeboltParser::SEMICOLON, 0);
}


size_t threeboltParser::AssignmentContext::getRuleIndex() const {
  return threeboltParser::RuleAssignment;
}

void threeboltParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void threeboltParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any threeboltParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::AssignmentContext* threeboltParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 16, threeboltParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(threeboltParser::ID);
    setState(106);
    assignmentOperator();
    setState(107);
    expr(0);
    setState(108);
    match(threeboltParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

threeboltParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::AssignmentOperatorContext::ASSIGN() {
  return getToken(threeboltParser::ASSIGN, 0);
}

tree::TerminalNode* threeboltParser::AssignmentOperatorContext::PLUSEQ() {
  return getToken(threeboltParser::PLUSEQ, 0);
}

tree::TerminalNode* threeboltParser::AssignmentOperatorContext::MINUSEQ() {
  return getToken(threeboltParser::MINUSEQ, 0);
}

tree::TerminalNode* threeboltParser::AssignmentOperatorContext::STAREQ() {
  return getToken(threeboltParser::STAREQ, 0);
}

tree::TerminalNode* threeboltParser::AssignmentOperatorContext::DIVEQ() {
  return getToken(threeboltParser::DIVEQ, 0);
}


size_t threeboltParser::AssignmentOperatorContext::getRuleIndex() const {
  return threeboltParser::RuleAssignmentOperator;
}

void threeboltParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void threeboltParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


std::any threeboltParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::AssignmentOperatorContext* threeboltParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 18, threeboltParser::RuleAssignmentOperator);
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
    setState(110);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 553782345728) != 0))) {
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

//----------------- ReturnStmtContext ------------------------------------------------------------------

threeboltParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::ReturnStmtContext::KEYWORD_RETURN() {
  return getToken(threeboltParser::KEYWORD_RETURN, 0);
}

tree::TerminalNode* threeboltParser::ReturnStmtContext::SEMICOLON() {
  return getToken(threeboltParser::SEMICOLON, 0);
}

threeboltParser::ExprContext* threeboltParser::ReturnStmtContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}


size_t threeboltParser::ReturnStmtContext::getRuleIndex() const {
  return threeboltParser::RuleReturnStmt;
}

void threeboltParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void threeboltParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}


std::any threeboltParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ReturnStmtContext* threeboltParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, threeboltParser::RuleReturnStmt);
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
    setState(112);
    match(threeboltParser::KEYWORD_RETURN);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796094054400) != 0)) {
      setState(113);
      expr(0);
    }
    setState(116);
    match(threeboltParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

threeboltParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::IfStmtContext::KEYWORD_IF() {
  return getToken(threeboltParser::KEYWORD_IF, 0);
}

threeboltParser::ExprContext* threeboltParser::IfStmtContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}

threeboltParser::BlockContext* threeboltParser::IfStmtContext::block() {
  return getRuleContext<threeboltParser::BlockContext>(0);
}

std::vector<threeboltParser::ElseIfStmtContext *> threeboltParser::IfStmtContext::elseIfStmt() {
  return getRuleContexts<threeboltParser::ElseIfStmtContext>();
}

threeboltParser::ElseIfStmtContext* threeboltParser::IfStmtContext::elseIfStmt(size_t i) {
  return getRuleContext<threeboltParser::ElseIfStmtContext>(i);
}

threeboltParser::ElseStmtContext* threeboltParser::IfStmtContext::elseStmt() {
  return getRuleContext<threeboltParser::ElseStmtContext>(0);
}


size_t threeboltParser::IfStmtContext::getRuleIndex() const {
  return threeboltParser::RuleIfStmt;
}

void threeboltParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void threeboltParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}


std::any threeboltParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::IfStmtContext* threeboltParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, threeboltParser::RuleIfStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(threeboltParser::KEYWORD_IF);
    setState(119);
    expr(0);
    setState(120);
    block();
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(121);
        elseIfStmt(); 
      }
      setState(126);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == threeboltParser::KEYWORD_ELSE) {
      setState(127);
      elseStmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStmtContext ------------------------------------------------------------------

threeboltParser::ElseIfStmtContext::ElseIfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::ElseIfStmtContext::KEYWORD_ELSE() {
  return getToken(threeboltParser::KEYWORD_ELSE, 0);
}

tree::TerminalNode* threeboltParser::ElseIfStmtContext::KEYWORD_IF() {
  return getToken(threeboltParser::KEYWORD_IF, 0);
}

threeboltParser::ExprContext* threeboltParser::ElseIfStmtContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}

threeboltParser::BlockContext* threeboltParser::ElseIfStmtContext::block() {
  return getRuleContext<threeboltParser::BlockContext>(0);
}


size_t threeboltParser::ElseIfStmtContext::getRuleIndex() const {
  return threeboltParser::RuleElseIfStmt;
}

void threeboltParser::ElseIfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfStmt(this);
}

void threeboltParser::ElseIfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfStmt(this);
}


std::any threeboltParser::ElseIfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitElseIfStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ElseIfStmtContext* threeboltParser::elseIfStmt() {
  ElseIfStmtContext *_localctx = _tracker.createInstance<ElseIfStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, threeboltParser::RuleElseIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(threeboltParser::KEYWORD_ELSE);
    setState(131);
    match(threeboltParser::KEYWORD_IF);
    setState(132);
    expr(0);
    setState(133);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStmtContext ------------------------------------------------------------------

threeboltParser::ElseStmtContext::ElseStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::ElseStmtContext::KEYWORD_ELSE() {
  return getToken(threeboltParser::KEYWORD_ELSE, 0);
}

threeboltParser::BlockContext* threeboltParser::ElseStmtContext::block() {
  return getRuleContext<threeboltParser::BlockContext>(0);
}


size_t threeboltParser::ElseStmtContext::getRuleIndex() const {
  return threeboltParser::RuleElseStmt;
}

void threeboltParser::ElseStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStmt(this);
}

void threeboltParser::ElseStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStmt(this);
}


std::any threeboltParser::ElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitElseStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ElseStmtContext* threeboltParser::elseStmt() {
  ElseStmtContext *_localctx = _tracker.createInstance<ElseStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, threeboltParser::RuleElseStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(threeboltParser::KEYWORD_ELSE);
    setState(136);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprStmtContext ------------------------------------------------------------------

threeboltParser::ExprStmtContext::ExprStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

threeboltParser::ExprContext* threeboltParser::ExprStmtContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}

tree::TerminalNode* threeboltParser::ExprStmtContext::SEMICOLON() {
  return getToken(threeboltParser::SEMICOLON, 0);
}


size_t threeboltParser::ExprStmtContext::getRuleIndex() const {
  return threeboltParser::RuleExprStmt;
}

void threeboltParser::ExprStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprStmt(this);
}

void threeboltParser::ExprStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprStmt(this);
}


std::any threeboltParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ExprStmtContext* threeboltParser::exprStmt() {
  ExprStmtContext *_localctx = _tracker.createInstance<ExprStmtContext>(_ctx, getState());
  enterRule(_localctx, 28, threeboltParser::RuleExprStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    expr(0);
    setState(139);
    match(threeboltParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

threeboltParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::ExprContext::ID() {
  return getToken(threeboltParser::ID, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::INT_LITERAL() {
  return getToken(threeboltParser::INT_LITERAL, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::FLOAT_LITERAL() {
  return getToken(threeboltParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::CHAR_LITERAL() {
  return getToken(threeboltParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::BOOL_LITERAL() {
  return getToken(threeboltParser::BOOL_LITERAL, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::STRING_LITERAL() {
  return getToken(threeboltParser::STRING_LITERAL, 0);
}

threeboltParser::FunctionCallContext* threeboltParser::ExprContext::functionCall() {
  return getRuleContext<threeboltParser::FunctionCallContext>(0);
}

tree::TerminalNode* threeboltParser::ExprContext::LPAREN() {
  return getToken(threeboltParser::LPAREN, 0);
}

std::vector<threeboltParser::ExprContext *> threeboltParser::ExprContext::expr() {
  return getRuleContexts<threeboltParser::ExprContext>();
}

threeboltParser::ExprContext* threeboltParser::ExprContext::expr(size_t i) {
  return getRuleContext<threeboltParser::ExprContext>(i);
}

tree::TerminalNode* threeboltParser::ExprContext::RPAREN() {
  return getToken(threeboltParser::RPAREN, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::PLUS() {
  return getToken(threeboltParser::PLUS, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::MINUS() {
  return getToken(threeboltParser::MINUS, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::STAR() {
  return getToken(threeboltParser::STAR, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::DIV() {
  return getToken(threeboltParser::DIV, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::MOD() {
  return getToken(threeboltParser::MOD, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::EQ() {
  return getToken(threeboltParser::EQ, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::NEQ() {
  return getToken(threeboltParser::NEQ, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::LT() {
  return getToken(threeboltParser::LT, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::LEQ() {
  return getToken(threeboltParser::LEQ, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::GT() {
  return getToken(threeboltParser::GT, 0);
}

tree::TerminalNode* threeboltParser::ExprContext::GEQ() {
  return getToken(threeboltParser::GEQ, 0);
}


size_t threeboltParser::ExprContext::getRuleIndex() const {
  return threeboltParser::RuleExpr;
}

void threeboltParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void threeboltParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any threeboltParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


threeboltParser::ExprContext* threeboltParser::expr() {
   return expr(0);
}

threeboltParser::ExprContext* threeboltParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  threeboltParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  threeboltParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, threeboltParser::RuleExpr, precedence);

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
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(142);
      match(threeboltParser::ID);
      break;
    }

    case 2: {
      setState(143);
      match(threeboltParser::INT_LITERAL);
      break;
    }

    case 3: {
      setState(144);
      match(threeboltParser::FLOAT_LITERAL);
      break;
    }

    case 4: {
      setState(145);
      match(threeboltParser::CHAR_LITERAL);
      break;
    }

    case 5: {
      setState(146);
      match(threeboltParser::BOOL_LITERAL);
      break;
    }

    case 6: {
      setState(147);
      match(threeboltParser::STRING_LITERAL);
      break;
    }

    case 7: {
      setState(148);
      functionCall();
      break;
    }

    case 8: {
      setState(149);
      match(threeboltParser::LPAREN);
      setState(150);
      expr(0);
      setState(151);
      match(threeboltParser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(163);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(161);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(155);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(156);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 260046848) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(157);
          expr(11);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(158);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(159);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 541165879296) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(160);
          expr(10);
          break;
        }

        default:
          break;
        } 
      }
      setState(165);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

threeboltParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::FunctionCallContext::ID() {
  return getToken(threeboltParser::ID, 0);
}

tree::TerminalNode* threeboltParser::FunctionCallContext::LPAREN() {
  return getToken(threeboltParser::LPAREN, 0);
}

tree::TerminalNode* threeboltParser::FunctionCallContext::RPAREN() {
  return getToken(threeboltParser::RPAREN, 0);
}

threeboltParser::ArgumentsContext* threeboltParser::FunctionCallContext::arguments() {
  return getRuleContext<threeboltParser::ArgumentsContext>(0);
}


size_t threeboltParser::FunctionCallContext::getRuleIndex() const {
  return threeboltParser::RuleFunctionCall;
}

void threeboltParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void threeboltParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any threeboltParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::FunctionCallContext* threeboltParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 32, threeboltParser::RuleFunctionCall);
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
    setState(166);
    match(threeboltParser::ID);
    setState(167);
    match(threeboltParser::LPAREN);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796094054400) != 0)) {
      setState(168);
      arguments();
    }
    setState(171);
    match(threeboltParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

threeboltParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<threeboltParser::ExprContext *> threeboltParser::ArgumentsContext::expr() {
  return getRuleContexts<threeboltParser::ExprContext>();
}

threeboltParser::ExprContext* threeboltParser::ArgumentsContext::expr(size_t i) {
  return getRuleContext<threeboltParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> threeboltParser::ArgumentsContext::COMMA() {
  return getTokens(threeboltParser::COMMA);
}

tree::TerminalNode* threeboltParser::ArgumentsContext::COMMA(size_t i) {
  return getToken(threeboltParser::COMMA, i);
}


size_t threeboltParser::ArgumentsContext::getRuleIndex() const {
  return threeboltParser::RuleArguments;
}

void threeboltParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void threeboltParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


std::any threeboltParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ArgumentsContext* threeboltParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 34, threeboltParser::RuleArguments);
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
    setState(173);
    expr(0);
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == threeboltParser::COMMA) {
      setState(174);
      match(threeboltParser::COMMA);
      setState(175);
      expr(0);
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

threeboltParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* threeboltParser::TypeContext::KEYWORD_INT() {
  return getToken(threeboltParser::KEYWORD_INT, 0);
}

tree::TerminalNode* threeboltParser::TypeContext::KEYWORD_FLOAT() {
  return getToken(threeboltParser::KEYWORD_FLOAT, 0);
}

tree::TerminalNode* threeboltParser::TypeContext::KEYWORD_CHAR() {
  return getToken(threeboltParser::KEYWORD_CHAR, 0);
}

tree::TerminalNode* threeboltParser::TypeContext::KEYWORD_BOOL() {
  return getToken(threeboltParser::KEYWORD_BOOL, 0);
}


size_t threeboltParser::TypeContext::getRuleIndex() const {
  return threeboltParser::RuleType;
}

void threeboltParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void threeboltParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<threeboltListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any threeboltParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::TypeContext* threeboltParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 36, threeboltParser::RuleType);
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
    setState(181);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15360) != 0))) {
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

bool threeboltParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool threeboltParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

void threeboltParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  threeboltParserInitialize();
#else
  ::antlr4::internal::call_once(threeboltParserOnceFlag, threeboltParserInitialize);
#endif
}
