#pragma once
#include "OperationItem.h"
#include "CalculatorExecuter.h"

class CalculatorHistory  //��� ����� ������ �������� �� �������� � ��������� �������, �������� ��������� SOLID
{
	OperationItem history[10];
	int CurrentSize;

public:
	CalculatorHistory();
	void PrintHistory(CalculatorExecuter exuter, CalculatorOperation calculator);
	void addHistory(OperationItem newItem);
};

