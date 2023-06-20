#pragma once
#include "Complex.h"
#include <string>

class OperationItem  // Операционная единица она курсирует между моделью и view
{
public:
	OperationItem();
	OperationItem(Complex firstOperand, Complex secondOperand, std::string operationName);
	void setItems(Complex firstOperand, Complex secondOperand, std::string operationName);
	Complex getFirstOperand();
	Complex getSecondOperand();
	std::string getOperationName();

private:
	Complex firstOperand;
	Complex secondOperand;
	std::string operationName;
};

