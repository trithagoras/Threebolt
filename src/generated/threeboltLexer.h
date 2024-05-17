
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  threeboltLexer : public antlr4::Lexer {
public:
  enum {
    KEYWORD_FROM = 1, KEYWORD_IMPORT = 2, KEYWORD_FN = 3, KEYWORD_LET = 4, 
    KEYWORD_RETURN = 5, KEYWORD_IF = 6, KEYWORD_TRUE = 7, KEYWORD_FALSE = 8, 
    KEYWORD_INT = 9, KEYWORD_FLOAT = 10, KEYWORD_CHAR = 11, KEYWORD_BOOL = 12, 
    ID = 13, INT_LITERAL = 14, FLOAT_LITERAL = 15, CHAR_LITERAL = 16, BOOL_LITERAL = 17, 
    STRING_LITERAL = 18, COMMENT = 19, MULTILINE_COMMENT = 20, WS = 21, 
    PLUS = 22, MINUS = 23, STAR = 24, DIV = 25, MOD = 26, EQ = 27, NEQ = 28, 
    LT = 29, LEQ = 30, GT = 31, GEQ = 32, ASSIGN = 33, COLON = 34, SEMICOLON = 35, 
    COMMA = 36, LPAREN = 37, RPAREN = 38, LBRACE = 39, RBRACE = 40, ARROW = 41, 
    DOUBLE_COLON = 42
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

