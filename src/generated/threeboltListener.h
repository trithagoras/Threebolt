
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "threeboltParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by threeboltParser.
 */
class  threeboltListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(threeboltParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(threeboltParser::ProgramContext *ctx) = 0;

  virtual void enterImportStmt(threeboltParser::ImportStmtContext *ctx) = 0;
  virtual void exitImportStmt(threeboltParser::ImportStmtContext *ctx) = 0;

  virtual void enterFunctionDecl(threeboltParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) = 0;

  virtual void enterParameters(threeboltParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(threeboltParser::ParametersContext *ctx) = 0;

  virtual void enterParameter(threeboltParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(threeboltParser::ParameterContext *ctx) = 0;

  virtual void enterBlock(threeboltParser::BlockContext *ctx) = 0;
  virtual void exitBlock(threeboltParser::BlockContext *ctx) = 0;

  virtual void enterStatement(threeboltParser::StatementContext *ctx) = 0;
  virtual void exitStatement(threeboltParser::StatementContext *ctx) = 0;

  virtual void enterVariableDecl(threeboltParser::VariableDeclContext *ctx) = 0;
  virtual void exitVariableDecl(threeboltParser::VariableDeclContext *ctx) = 0;

  virtual void enterAssignment(threeboltParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(threeboltParser::AssignmentContext *ctx) = 0;

  virtual void enterReturnStmt(threeboltParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(threeboltParser::ReturnStmtContext *ctx) = 0;

  virtual void enterIfStmt(threeboltParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(threeboltParser::IfStmtContext *ctx) = 0;

  virtual void enterExprStmt(threeboltParser::ExprStmtContext *ctx) = 0;
  virtual void exitExprStmt(threeboltParser::ExprStmtContext *ctx) = 0;

  virtual void enterExpr(threeboltParser::ExprContext *ctx) = 0;
  virtual void exitExpr(threeboltParser::ExprContext *ctx) = 0;

  virtual void enterFunctionCall(threeboltParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(threeboltParser::FunctionCallContext *ctx) = 0;

  virtual void enterArguments(threeboltParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(threeboltParser::ArgumentsContext *ctx) = 0;

  virtual void enterType(threeboltParser::TypeContext *ctx) = 0;
  virtual void exitType(threeboltParser::TypeContext *ctx) = 0;


};

