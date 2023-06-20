#pragma once
#include "CalculatorOperation.h"
#include "CalculatorChecker.h"
#include "CalculatorExecuter.h"
#include "UserInteface.h"
#include "ListOperation.h"
#include "CalculatorHistory.h"

class Controller // ��� ���������� �� �� ��������� ��� �������������� ����� view � �������
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

