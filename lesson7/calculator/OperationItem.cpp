#include "OperationItem.h"
#include "Complex.h"

OperationItem::OperationItem() {}

OperationItem::OperationItem(Complex firstOperand, Complex secondOperand, std::string operationName)
{
	this->firstOperand = firstOperand;
	this->secondOperand = secondOperand;
	this->operationName = operationName;
}

void OperationItem::setItems(Complex firstOperand, Complex secondOperand, std::string operationName)
{
	this->firstOperand = firstOperand;
	this->secondOperand = secondOperand;
	this->operationName = operationName;
}

Complex OperationItem::getFirstOperand()
{
	return this->firstOperand;
}

Complex OperationItem::getSecondOperand()
{
	return this->secondOperand;
}

std::string OperationItem::getOperationName()
{
	return this->operationName;
}
