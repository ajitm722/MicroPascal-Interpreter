#include "Stmt.hpp"

ProgramStmt::ProgramStmt(std::unique_ptr<Stmt> m_stmt) : stmt(std::move(m_stmt)) {};

void ProgramStmt::Accept(VisitorStmt& visitor)
{
	return visitor.Visit(*this);
}

CompoundStmt::CompoundStmt(std::vector<std::unique_ptr<Stmt>> m_statements) : statements(std::move(m_statements)) {};

void CompoundStmt::Accept(VisitorStmt& visitor)
{
	return visitor.Visit(*this);
}

WritelnStmt::WritelnStmt(std::optional<std::unique_ptr<Expr>> m_expr) : expr(std::move(m_expr)) {};

void WritelnStmt::Accept(VisitorStmt& visitor)
{
	return visitor.Visit(*this);
};
