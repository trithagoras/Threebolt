
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1


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
      "block", "statement", "variableDecl", "assignment", "returnStmt", 
      "ifStmt", "exprStmt", "expr", "functionCall", "arguments", "type"
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
  	4,1,42,158,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,3,2,53,8,2,1,2,1,2,1,2,3,2,58,8,2,1,2,
  	1,2,1,3,1,3,1,3,5,3,65,8,3,10,3,12,3,68,9,3,1,4,1,4,1,4,1,4,1,5,1,5,5,
  	5,76,8,5,10,5,12,5,79,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,3,6,88,8,6,1,7,
  	1,7,1,7,1,7,3,7,94,8,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,
  	9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,3,12,128,8,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,5,12,136,8,12,10,12,12,12,139,9,12,1,13,1,13,1,13,3,13,144,8,13,
  	1,13,1,13,1,14,1,14,1,14,5,14,151,8,14,10,14,12,14,154,9,14,1,15,1,15,
  	1,15,0,1,24,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,3,1,0,22,
  	26,1,0,27,32,1,0,9,12,164,0,37,1,0,0,0,2,40,1,0,0,0,4,48,1,0,0,0,6,61,
  	1,0,0,0,8,69,1,0,0,0,10,73,1,0,0,0,12,87,1,0,0,0,14,89,1,0,0,0,16,99,
  	1,0,0,0,18,104,1,0,0,0,20,108,1,0,0,0,22,112,1,0,0,0,24,127,1,0,0,0,26,
  	140,1,0,0,0,28,147,1,0,0,0,30,155,1,0,0,0,32,36,3,12,6,0,33,36,3,4,2,
  	0,34,36,3,2,1,0,35,32,1,0,0,0,35,33,1,0,0,0,35,34,1,0,0,0,36,39,1,0,0,
  	0,37,35,1,0,0,0,37,38,1,0,0,0,38,1,1,0,0,0,39,37,1,0,0,0,40,41,5,1,0,
  	0,41,42,5,13,0,0,42,43,5,42,0,0,43,44,5,13,0,0,44,45,5,2,0,0,45,46,5,
  	24,0,0,46,47,5,35,0,0,47,3,1,0,0,0,48,49,5,3,0,0,49,50,5,13,0,0,50,52,
  	5,37,0,0,51,53,3,6,3,0,52,51,1,0,0,0,52,53,1,0,0,0,53,54,1,0,0,0,54,57,
  	5,38,0,0,55,56,5,41,0,0,56,58,3,30,15,0,57,55,1,0,0,0,57,58,1,0,0,0,58,
  	59,1,0,0,0,59,60,3,10,5,0,60,5,1,0,0,0,61,66,3,8,4,0,62,63,5,36,0,0,63,
  	65,3,8,4,0,64,62,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,
  	7,1,0,0,0,68,66,1,0,0,0,69,70,5,13,0,0,70,71,5,34,0,0,71,72,3,30,15,0,
  	72,9,1,0,0,0,73,77,5,39,0,0,74,76,3,12,6,0,75,74,1,0,0,0,76,79,1,0,0,
  	0,77,75,1,0,0,0,77,78,1,0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,81,5,40,
  	0,0,81,11,1,0,0,0,82,88,3,14,7,0,83,88,3,16,8,0,84,88,3,18,9,0,85,88,
  	3,20,10,0,86,88,3,22,11,0,87,82,1,0,0,0,87,83,1,0,0,0,87,84,1,0,0,0,87,
  	85,1,0,0,0,87,86,1,0,0,0,88,13,1,0,0,0,89,90,5,4,0,0,90,91,5,13,0,0,91,
  	93,5,34,0,0,92,94,3,30,15,0,93,92,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,
  	95,96,5,33,0,0,96,97,3,24,12,0,97,98,5,35,0,0,98,15,1,0,0,0,99,100,5,
  	13,0,0,100,101,5,33,0,0,101,102,3,24,12,0,102,103,5,35,0,0,103,17,1,0,
  	0,0,104,105,5,5,0,0,105,106,3,24,12,0,106,107,5,35,0,0,107,19,1,0,0,0,
  	108,109,5,6,0,0,109,110,3,24,12,0,110,111,3,10,5,0,111,21,1,0,0,0,112,
  	113,3,24,12,0,113,114,5,35,0,0,114,23,1,0,0,0,115,116,6,12,-1,0,116,128,
  	5,13,0,0,117,128,5,14,0,0,118,128,5,15,0,0,119,128,5,16,0,0,120,128,5,
  	17,0,0,121,128,5,18,0,0,122,128,3,26,13,0,123,124,5,37,0,0,124,125,3,
  	24,12,0,125,126,5,38,0,0,126,128,1,0,0,0,127,115,1,0,0,0,127,117,1,0,
  	0,0,127,118,1,0,0,0,127,119,1,0,0,0,127,120,1,0,0,0,127,121,1,0,0,0,127,
  	122,1,0,0,0,127,123,1,0,0,0,128,137,1,0,0,0,129,130,10,10,0,0,130,131,
  	7,0,0,0,131,136,3,24,12,11,132,133,10,9,0,0,133,134,7,1,0,0,134,136,3,
  	24,12,10,135,129,1,0,0,0,135,132,1,0,0,0,136,139,1,0,0,0,137,135,1,0,
  	0,0,137,138,1,0,0,0,138,25,1,0,0,0,139,137,1,0,0,0,140,141,5,13,0,0,141,
  	143,5,37,0,0,142,144,3,28,14,0,143,142,1,0,0,0,143,144,1,0,0,0,144,145,
  	1,0,0,0,145,146,5,38,0,0,146,27,1,0,0,0,147,152,3,24,12,0,148,149,5,36,
  	0,0,149,151,3,24,12,0,150,148,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,
  	152,153,1,0,0,0,153,29,1,0,0,0,154,152,1,0,0,0,155,156,7,2,0,0,156,31,
  	1,0,0,0,13,35,37,52,57,66,77,87,93,127,135,137,143,152
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
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137439469690) != 0)) {
      setState(35);
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
          setState(32);
          statement();
          break;
        }

        case threeboltParser::KEYWORD_FN: {
          setState(33);
          functionDecl();
          break;
        }

        case threeboltParser::KEYWORD_FROM: {
          setState(34);
          importStmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(39);
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
    setState(40);
    match(threeboltParser::KEYWORD_FROM);
    setState(41);
    match(threeboltParser::ID);
    setState(42);
    match(threeboltParser::DOUBLE_COLON);
    setState(43);
    match(threeboltParser::ID);
    setState(44);
    match(threeboltParser::KEYWORD_IMPORT);
    setState(45);
    match(threeboltParser::STAR);
    setState(46);
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
    setState(48);
    match(threeboltParser::KEYWORD_FN);
    setState(49);
    match(threeboltParser::ID);
    setState(50);
    match(threeboltParser::LPAREN);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == threeboltParser::ID) {
      setState(51);
      parameters();
    }
    setState(54);
    match(threeboltParser::RPAREN);
    setState(57);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == threeboltParser::ARROW) {
      setState(55);
      match(threeboltParser::ARROW);
      setState(56);
      type();
    }
    setState(59);
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
    setState(61);
    parameter();
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == threeboltParser::COMMA) {
      setState(62);
      match(threeboltParser::COMMA);
      setState(63);
      parameter();
      setState(68);
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
    setState(69);
    match(threeboltParser::ID);
    setState(70);
    match(threeboltParser::COLON);
    setState(71);
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
    setState(73);
    match(threeboltParser::LBRACE);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137439469680) != 0)) {
      setState(74);
      statement();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
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
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      variableDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(84);
      returnStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(85);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(86);
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
    setState(89);
    match(threeboltParser::KEYWORD_LET);
    setState(90);
    match(threeboltParser::ID);
    setState(91);
    match(threeboltParser::COLON);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7680) != 0)) {
      setState(92);
      type();
    }
    setState(95);
    match(threeboltParser::ASSIGN);
    setState(96);
    expr(0);
    setState(97);
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

tree::TerminalNode* threeboltParser::AssignmentContext::ASSIGN() {
  return getToken(threeboltParser::ASSIGN, 0);
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
    setState(99);
    match(threeboltParser::ID);
    setState(100);
    match(threeboltParser::ASSIGN);
    setState(101);
    expr(0);
    setState(102);
    match(threeboltParser::SEMICOLON);
   
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

threeboltParser::ExprContext* threeboltParser::ReturnStmtContext::expr() {
  return getRuleContext<threeboltParser::ExprContext>(0);
}

tree::TerminalNode* threeboltParser::ReturnStmtContext::SEMICOLON() {
  return getToken(threeboltParser::SEMICOLON, 0);
}


size_t threeboltParser::ReturnStmtContext::getRuleIndex() const {
  return threeboltParser::RuleReturnStmt;
}


std::any threeboltParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ReturnStmtContext* threeboltParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, threeboltParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(threeboltParser::KEYWORD_RETURN);
    setState(105);
    expr(0);
    setState(106);
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


size_t threeboltParser::IfStmtContext::getRuleIndex() const {
  return threeboltParser::RuleIfStmt;
}


std::any threeboltParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::IfStmtContext* threeboltParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, threeboltParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(threeboltParser::KEYWORD_IF);
    setState(109);
    expr(0);
    setState(110);
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


std::any threeboltParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ExprStmtContext* threeboltParser::exprStmt() {
  ExprStmtContext *_localctx = _tracker.createInstance<ExprStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, threeboltParser::RuleExprStmt);

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
    expr(0);
    setState(113);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, threeboltParser::RuleExpr, precedence);

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
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(116);
      match(threeboltParser::ID);
      break;
    }

    case 2: {
      setState(117);
      match(threeboltParser::INT_LITERAL);
      break;
    }

    case 3: {
      setState(118);
      match(threeboltParser::FLOAT_LITERAL);
      break;
    }

    case 4: {
      setState(119);
      match(threeboltParser::CHAR_LITERAL);
      break;
    }

    case 5: {
      setState(120);
      match(threeboltParser::BOOL_LITERAL);
      break;
    }

    case 6: {
      setState(121);
      match(threeboltParser::STRING_LITERAL);
      break;
    }

    case 7: {
      setState(122);
      functionCall();
      break;
    }

    case 8: {
      setState(123);
      match(threeboltParser::LPAREN);
      setState(124);
      expr(0);
      setState(125);
      match(threeboltParser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(135);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(129);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(130);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 130023424) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(131);
          expr(11);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(132);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(133);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8455716864) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(134);
          expr(10);
          break;
        }

        default:
          break;
        } 
      }
      setState(139);
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


std::any threeboltParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::FunctionCallContext* threeboltParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 26, threeboltParser::RuleFunctionCall);
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
    setState(140);
    match(threeboltParser::ID);
    setState(141);
    match(threeboltParser::LPAREN);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137439469568) != 0)) {
      setState(142);
      arguments();
    }
    setState(145);
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


std::any threeboltParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::ArgumentsContext* threeboltParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 28, threeboltParser::RuleArguments);
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
    setState(147);
    expr(0);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == threeboltParser::COMMA) {
      setState(148);
      match(threeboltParser::COMMA);
      setState(149);
      expr(0);
      setState(154);
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


std::any threeboltParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<threeboltVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

threeboltParser::TypeContext* threeboltParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, threeboltParser::RuleType);
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
    setState(155);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7680) != 0))) {
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
    case 12: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
