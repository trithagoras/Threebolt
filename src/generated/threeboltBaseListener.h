
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "threeboltListener.h"


/**
 * This class provides an empty implementation of threeboltListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  threeboltBaseListener : public threeboltListener {
public:

  virtual void enterProgram(threeboltParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(threeboltParser::ProgramContext * /*ctx*/) override { }

  virtual void enterImportStmt(threeboltParser::ImportStmtContext * /*ctx*/) override { }
  virtual void exitImportStmt(threeboltParser::ImportStmtContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(threeboltParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(threeboltParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterParameters(threeboltParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(threeboltParser::ParametersContext * /*ctx*/) override { }

  virtual void enterParameter(threeboltParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(threeboltParser::ParameterContext * /*ctx*/) override { }

  virtual void enterBlock(threeboltParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(threeboltParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(threeboltParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(threeboltParser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDecl(threeboltParser::VariableDeclContext * /*ctx*/) override { }
  virtual void exitVariableDecl(threeboltParser::VariableDeclContext * /*ctx*/) override { }

  virtual void enterAssignment(threeboltParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(threeboltParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterReturnStmt(threeboltParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(threeboltParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(threeboltParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(threeboltParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterExprStmt(threeboltParser::ExprStmtContext * /*ctx*/) override { }
  virtual void exitExprStmt(threeboltParser::ExprStmtContext * /*ctx*/) override { }

  virtual void enterExpr(threeboltParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(threeboltParser::ExprContext * /*ctx*/) override { }

  virtual void enterFunctionCall(threeboltParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(threeboltParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArguments(threeboltParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(threeboltParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterType(threeboltParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(threeboltParser::TypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

