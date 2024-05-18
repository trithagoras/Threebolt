
// Generated from /home/corey/code/cpp/threebolt/threebolt.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "threeboltParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by threeboltParser.
 */
class  threeboltVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by threeboltParser.
   */
    virtual std::any visitProgram(threeboltParser::ProgramContext *context) = 0;

    virtual std::any visitImportStmt(threeboltParser::ImportStmtContext *context) = 0;

    virtual std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *context) = 0;

    virtual std::any visitParameters(threeboltParser::ParametersContext *context) = 0;

    virtual std::any visitParameter(threeboltParser::ParameterContext *context) = 0;

    virtual std::any visitBlock(threeboltParser::BlockContext *context) = 0;

    virtual std::any visitStatement(threeboltParser::StatementContext *context) = 0;

    virtual std::any visitVariableDecl(threeboltParser::VariableDeclContext *context) = 0;

    virtual std::any visitAssignment(threeboltParser::AssignmentContext *context) = 0;

    virtual std::any visitAssignmentOperator(threeboltParser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitReturnStmt(threeboltParser::ReturnStmtContext *context) = 0;

    virtual std::any visitIfStmt(threeboltParser::IfStmtContext *context) = 0;

    virtual std::any visitElseIfStmt(threeboltParser::ElseIfStmtContext *context) = 0;

    virtual std::any visitElseStmt(threeboltParser::ElseStmtContext *context) = 0;

    virtual std::any visitExprStmt(threeboltParser::ExprStmtContext *context) = 0;

    virtual std::any visitExpr(threeboltParser::ExprContext *context) = 0;

    virtual std::any visitFunctionCall(threeboltParser::FunctionCallContext *context) = 0;

    virtual std::any visitArguments(threeboltParser::ArgumentsContext *context) = 0;

    virtual std::any visitType(threeboltParser::TypeContext *context) = 0;


};

