#include "CalculatorExecuter.h"

Complex CalculatorExecuter::ExecuteCommand(CalculatorOperation calculator, OperationItem operationItem)
{
	auto result = calculator.GetCurrentOperation(operationItem.getOperationName())(operationItem.getFirstOperand(),
		operationItem.getSecondOperand());
	return result;
}
