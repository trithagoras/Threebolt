
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "threeboltVisitor.h"


/**
 * This class provides an empty implementation of threeboltVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  threeboltBaseVisitor : public threeboltVisitor {
public:

  virtual std::any visitProgram(threeboltParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportStmt(threeboltParser::ImportStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameters(threeboltParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(threeboltParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(threeboltParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(threeboltParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDecl(threeboltParser::VariableDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(threeboltParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(threeboltParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(threeboltParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseIfStmt(threeboltParser::ElseIfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStmt(threeboltParser::ElseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(threeboltParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(threeboltParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(threeboltParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArguments(threeboltParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(threeboltParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

