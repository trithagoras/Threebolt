grammar threebolt;

// Lexer rules
KEYWORD_FROM: 'from';
KEYWORD_IMPORT: 'import';
KEYWORD_FN: 'fn';
KEYWORD_LET: 'let';
KEYWORD_RETURN: 'return';
KEYWORD_IF: 'if';
KEYWORD_ELSE: 'else';
KEYWORD_TRUE: 'true';
KEYWORD_FALSE: 'false';
KEYWORD_INT: 'int';
KEYWORD_FLOAT: 'float';
KEYWORD_CHAR: 'char';
KEYWORD_BOOL: 'bool';
KEYWORD_VOID: 'void';

ID: [a-zA-Z_][a-zA-Z_0-9]*;
INT_LITERAL: [0-9]+;
FLOAT_LITERAL: [0-9]+ '.' [0-9]*;
CHAR_LITERAL: '\'' . '\'';
BOOL_LITERAL: KEYWORD_TRUE | KEYWORD_FALSE;

STRING_LITERAL: '"' ( ~["\\] | '\\' . )* '"';

COMMENT: '//' ~[\r\n]* -> skip;
MULTILINE_COMMENT: '/*' .*? '*/' -> skip;
WS: [ \t\r\n]+ -> skip;

PLUS: '+';
MINUS: '-';
STAR: '*';
DIV: '/';
MOD: '%';
PLUSEQ: '+=';
MINUSEQ: '-=';
STAREQ: '*=';
DIVEQ: '/=';
MODEQ: '%=';

EQ: '==';
NEQ: '!=';
LT: '<';
LEQ: '<=';
GT: '>';
GEQ: '>=';

ASSIGN: '=';
COLON: ':';
SEMICOLON: ';';
COMMA: ',';
LPAREN: '(';
RPAREN: ')';
LBRACE: '{';
RBRACE: '}';
ARROW: '->';

// Parser rules
program: (statement | functionDecl | importStmt)*;

importStmt: KEYWORD_FROM ID DOUBLE_COLON ID KEYWORD_IMPORT STAR SEMICOLON;

functionDecl: KEYWORD_FN ID LPAREN parameters? RPAREN (ARROW type)? block;

parameters: parameter (COMMA parameter)*;
parameter: ID COLON type;

block: LBRACE statement* RBRACE;

statement: variableDecl
         | assignment
         | returnStmt
         | ifStmt
         | exprStmt
         ;

variableDecl: KEYWORD_LET ID COLON type? ASSIGN expr SEMICOLON;
assignment: ID (ASSIGN | PLUSEQ | MINUSEQ | STAREQ | DIVEQ | MODEQ) expr SEMICOLON;

returnStmt: KEYWORD_RETURN expr? SEMICOLON;

ifStmt
    : KEYWORD_IF expr block elseIfStmt* elseStmt?
    ;

elseIfStmt
    : KEYWORD_ELSE KEYWORD_IF expr block
    ;

elseStmt
    : KEYWORD_ELSE block
    ;

exprStmt: expr SEMICOLON;

expr: expr (PLUS | MINUS | STAR | DIV | MOD) expr
    | expr (EQ | NEQ | LT | LEQ | GT | GEQ) expr
    | ID
    | INT_LITERAL
    | FLOAT_LITERAL
    | CHAR_LITERAL
    | BOOL_LITERAL
    | STRING_LITERAL
    | functionCall
    | LPAREN expr RPAREN
    ;

functionCall: ID LPAREN arguments? RPAREN;
arguments: expr (COMMA expr)*;

type: KEYWORD_INT
    | KEYWORD_FLOAT
    | KEYWORD_CHAR
    | KEYWORD_BOOL
    | KEYWORD_VOID
    ;

DOUBLE_COLON: '::';
