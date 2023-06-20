#pragma once
#include "CalculatorOperation.h"
#include "CalculatorChecker.h"
#include "CalculatorExecuter.h"
#include "UserInteface.h"
#include "ListOperation.h"
#include "CalculatorHistory.h"

class Controller // Наш контроллер он же презентер для взаимодействия между view и моделью
{

public:
	CalculatorOperation calculator;
	CalculatorChecker checker;
	CalculatorExecuter executer;
	UserInteface interfaces;
	CalculatorHistory history;

	Controller();

	void run();


};

