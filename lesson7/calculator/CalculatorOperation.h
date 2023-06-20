#pragma once
#pragma once
#include <iostream>
#include <functional> // для использования лямбда
#include <map>
#include <string>
#include <set>
#include <unordered_set>  
#include "Complex.h"
#include "ListOperation.h"

using std::map;
using std::string;
using std::function;
using std::unordered_set;


class CalculatorOperation // Эта часть модели отвечает за арифметические операции,  согласно принцепов SOLID
{
public:
	map<string, function<Complex(Complex, Complex)>> CatalogOperation;

	CalculatorOperation() {}
	CalculatorOperation(CalculatorOperation const& another) : CatalogOperation(another.CatalogOperation) {}
	CalculatorOperation(ListOperation * listOperation);

	unordered_set<string> GetOperationSet();
	function<Complex(Complex, Complex)> GetCurrentOperation(string operationName);
};

