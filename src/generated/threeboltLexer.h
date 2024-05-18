
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  threeboltLexer : public antlr4::Lexer {
public:
  enum {
    KEYWORD_FROM = 1, KEYWORD_IMPORT = 2, KEYWORD_FN = 3, KEYWORD_LET = 4, 
    KEYWORD_RETURN = 5, KEYWORD_IF = 6, KEYWORD_ELSE = 7, KEYWORD_TRUE = 8, 
    KEYWORD_FALSE = 9, KEYWORD_INT = 10, KEYWORD_FLOAT = 11, KEYWORD_CHAR = 12, 
    KEYWORD_BOOL = 13, KEYWORD_VOID = 14, ID = 15, INT_LITERAL = 16, FLOAT_LITERAL = 17, 
    CHAR_LITERAL = 18, BOOL_LITERAL = 19, STRING_LITERAL = 20, COMMENT = 21, 
    MULTILINE_COMMENT = 22, WS = 23, PLUS = 24, MINUS = 25, STAR = 26, DIV = 27, 
    MOD = 28, PLUSEQ = 29, MINUSEQ = 30, STAREQ = 31, DIVEQ = 32, MODEQ = 33, 
    EQ = 34, NEQ = 35, LT = 36, LEQ = 37, GT = 38, GEQ = 39, ASSIGN = 40, 
    COLON = 41, SEMICOLON = 42, COMMA = 43, LPAREN = 44, RPAREN = 45, LBRACE = 46, 
    RBRACE = 47, ARROW = 48, DOUBLE_COLON = 49
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

