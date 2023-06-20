#pragma once
#include "OperationItem.h"
#include "CalculatorExecuter.h"

class CalculatorHistory  //Эта часть модели отвечает за хранение и обработку истории, согласно принцепов SOLID
{
	OperationItem history[10];
	int CurrentSize;

public:
	CalculatorHistory();
	void PrintHistory(CalculatorExecuter exuter, CalculatorOperation calculator);
	void addHistory(OperationItem newItem);
};

