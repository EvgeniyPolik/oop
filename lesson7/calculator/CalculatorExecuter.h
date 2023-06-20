#pragma once
#include "Complex.h"
#include "CalculatorOperation.h"
#include "OperationItem.h"
class CalculatorExecuter //��� ����� �������� �� ���������� ����������, �������� ��������� SOLID
{
public:
	CalculatorExecuter() {};
	Complex ExecuteCommand(CalculatorOperation calculator, OperationItem operationItem);
};

