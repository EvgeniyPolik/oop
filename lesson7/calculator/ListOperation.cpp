#include "ListOperation.h"

ListOperationStandart::ListOperationStandart()
{
	this->catalogOperation.insert({ "+", [](Complex a, Complex b) { return a + b; } });
	this->catalogOperation.insert({ "-", [](Complex a, Complex b) { return a - b; } });
	this->catalogOperation.insert({ "*", [](Complex a, Complex b) { return a * b; } });
	this->catalogOperation.insert({ "/", [](Complex a, Complex b) { return a / b; } });
}

map<string, function<Complex(Complex, Complex) >> ListOperationStandart::GetCatalogOperation()
{
	return catalogOperation;
}

ListOperationNew::ListOperationNew()
{
	this->catalogOperation.insert({ "+", [](Complex a, Complex b) { return a + b; } });
	this->catalogOperation.insert({ "-", [](Complex a, Complex b) { return a - b; } });
	this->catalogOperation.insert({ "*", [](Complex a, Complex b) { return a * b; } });
	this->catalogOperation.insert({ "/", [](Complex a, Complex b) { return a / b; } });
	this->catalogOperation.insert({ "sqrt", [](Complex a, Complex b) { return Complex(std::sqrt(a.GetReal()), 0); } });
	this->catalogOperation.insert({ "pow", [](Complex a, Complex b) { return Complex(std::pow(a.GetReal(), b.GetReal()),0); } });
}

map<string, function<Complex(Complex, Complex)>> ListOperationNew::GetCatalogOperation()
{
	return catalogOperation;
}
