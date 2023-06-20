#pragma once
#include "Complex.h"
#include "CalculatorOperation.h"
#include "OperationItem.h"
class CalculatorExecuter //Эта часть отвечает за выполнение вычислений, согласно принцепов SOLID
{
public:
	CalculatorExecuter() {};
	Complex ExecuteCommand(CalculatorOperation calculator, OperationItem operationItem);
};

