#include "Controller.h"
#include "ListOperation.h"
#include "CalculatorOperation.h"

Controller::Controller()
{
	//ListOperationStandart catalog;
	ListOperationNew catalog;  // Изменяя версию класса мы можем изменять состав команд
	CalculatorOperation calc(&catalog);
	calculator = calc;
	CalculatorChecker checker(calc.GetOperationSet());
	checker = checker;
	executer;
	UserInteface intefaces_tmp(calc.GetOperationSet());
	interfaces = intefaces_tmp;
}

void Controller::run()
{
	bool run = true;
	OperationItem oItem;
	while (run)
	{
		run = interfaces.UserDialog();
		if (run) {
			if (interfaces.currentInput[0] == "h")
			{
				history.PrintHistory(executer, calculator);
			}
			else
				if (checker.checkOperation(interfaces.currentInput[0], interfaces.currentInput[2], interfaces.currentInput[1],
					calculator.GetOperationSet(), &oItem)) 
				{
					history.addHistory(oItem);
					interfaces.ShowMessage("Результат: " + executer.ExecuteCommand(calculator, oItem).ToString());
				}
				else
					interfaces.ShowMessage("Неверный ввод!");
			
		}
	}
}
