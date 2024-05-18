
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  threeboltLexer : public antlr4::Lexer {
public:
  enum {
    KEYWORD_FROM = 1, KEYWORD_IMPORT = 2, KEYWORD_FN = 3, KEYWORD_LET = 4, 
    KEYWORD_RETURN = 5, KEYWORD_IF = 6, KEYWORD_ELSE = 7, KEYWORD_INT = 8, 
    KEYWORD_FLOAT = 9, KEYWORD_CHAR = 10, KEYWORD_BOOL = 11, KEYWORD_VOID = 12, 
    BOOL_LITERAL = 13, INT_LITERAL = 14, FLOAT_LITERAL = 15, CHAR_LITERAL = 16, 
    STRING_LITERAL = 17, PLUS = 18, MINUS = 19, STAR = 20, DIV = 21, MOD = 22, 
    PLUSEQ = 23, MINUSEQ = 24, STAREQ = 25, DIVEQ = 26, MODEQ = 27, EQ = 28, 
    NEQ = 29, LT = 30, LEQ = 31, GT = 32, GEQ = 33, ASSIGN = 34, COLON = 35, 
    SEMICOLON = 36, COMMA = 37, LPAREN = 38, RPAREN = 39, LBRACE = 40, RBRACE = 41, 
    ARROW = 42, ID = 43, COMMENT = 44, MULTILINE_COMMENT = 45, WS = 46, 
    DOUBLE_COLON = 47
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

