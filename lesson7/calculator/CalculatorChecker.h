#pragma once
#include <unordered_set>
#include <string>
#include "OperationItem.h"
#include <unordered_set>

class CalculatorChecker // ��� ����� ������ �������� �� �������� ����������� �����, �������� ��������� SOLID
{
private:
	std::unordered_set<std::string> operationSet;
	bool checkDigits(std::string stringValue);
public:
	CalculatorChecker() {}
	CalculatorChecker(std::unordered_set<std::string> operationSet) : operationSet(operationSet) {}
	bool checkOperation(std::string firstOperand, std::string secondOperand, std::string command, std::unordered_set<std::string> operationSet, 
		OperationItem * operationItem);
};

