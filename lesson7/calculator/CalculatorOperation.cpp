#include "CalculatorOperation.h"
#include "ListOperation.h"

CalculatorOperation::CalculatorOperation(ListOperation *listOperation)
{
	this->CatalogOperation = listOperation->GetCatalogOperation();
}

unordered_set<string> CalculatorOperation::GetOperationSet()
{
	unordered_set<string> result;
	for (auto elem : this->CatalogOperation)
		result.insert(elem.first);
	return result;
}

function<Complex(Complex, Complex)> CalculatorOperation::GetCurrentOperation(string operationName)
{
	return this->CatalogOperation[operationName];
}
