
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  threeboltLexer : public antlr4::Lexer {
public:
  enum {
    KEYWORD_FROM = 1, KEYWORD_IMPORT = 2, KEYWORD_FN = 3, KEYWORD_LET = 4, 
    KEYWORD_RETURN = 5, KEYWORD_IF = 6, KEYWORD_ELSE = 7, KEYWORD_TRUE = 8, 
    KEYWORD_FALSE = 9, KEYWORD_INT = 10, KEYWORD_FLOAT = 11, KEYWORD_CHAR = 12, 
    KEYWORD_BOOL = 13, ID = 14, INT_LITERAL = 15, FLOAT_LITERAL = 16, CHAR_LITERAL = 17, 
    BOOL_LITERAL = 18, STRING_LITERAL = 19, COMMENT = 20, MULTILINE_COMMENT = 21, 
    WS = 22, PLUS = 23, MINUS = 24, STAR = 25, DIV = 26, MOD = 27, PLUSEQ = 28, 
    MINUSEQ = 29, STAREQ = 30, DIVEQ = 31, MODEQ = 32, EQ = 33, NEQ = 34, 
    LT = 35, LEQ = 36, GT = 37, GEQ = 38, ASSIGN = 39, COLON = 40, SEMICOLON = 41, 
    COMMA = 42, LPAREN = 43, RPAREN = 44, LBRACE = 45, RBRACE = 46, ARROW = 47, 
    DOUBLE_COLON = 48
  };

  explicit threeboltLexer(antlr4::CharStream *input);

  ~threeboltLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

