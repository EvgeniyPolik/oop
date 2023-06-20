#include "CalculatorHistory.h"

CalculatorHistory::CalculatorHistory()
{
	CurrentSize = 0;
}

void CalculatorHistory::PrintHistory(CalculatorExecuter exuter, CalculatorOperation calculator)
{
	for (int i = CurrentSize-1; i >= 0; i--)
	{
		std::cout << history[i].getFirstOperand() << " " << history[i].getOperationName() << " " << history[i].getSecondOperand() << " = " << exuter.ExecuteCommand(calculator, history[i]) << std::endl;
	}
}

void CalculatorHistory::addHistory(OperationItem newItem)
{
	if (CurrentSize < 10)
		history[CurrentSize++] = newItem;
	else
	{
		for (int i = 0; i < 8; i++)
			history[i] = history[i + 1];
		history[9] = newItem;
	}
}
