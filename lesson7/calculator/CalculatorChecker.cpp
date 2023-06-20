#include "CalculatorChecker.h"
#include <string>
#include <unordered_set>

bool CalculatorChecker::checkDigits(std::string stringValue) // Проверка введенного значения на корректность
{
    int len = stringValue.size(), pointCount = 0, spaceCount = 0;
    for (int i = 0; i < len; i++) 
    {
        if (stringValue[i] == ' ')
            spaceCount++;
        if (stringValue[i] == '.')
            pointCount++;
        if (spaceCount > 1 || pointCount > 1)
            return false;
        if ((stringValue[i] < '0' || stringValue[i] > '9') && stringValue[i] != '.' && stringValue[i] != ' ')
            return false;        
    }
    return true;
}

// Проверка ввода в целом на корректность
bool CalculatorChecker::checkOperation(std::string firstOperand, std::string secondOperand, std::string command, 
    std::unordered_set<std::string> operationSet, OperationItem * operationItem)
{
    if (checkDigits(firstOperand) && checkDigits(secondOperand) && operationSet.find(command) != operationSet.end())
    {
        operationItem->setItems(Complex(firstOperand), Complex(secondOperand), command);
    }
    else
        return false;
    return true;
}
