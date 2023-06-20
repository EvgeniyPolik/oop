#pragma once
#include <iostream>
#include <functional> // ��� ������������� ������
#include <map>
#include <string>
#include "Complex.h"

using std::map;
using std::string;
using std::function;

class ListOperation  // ����������� �����, ���������� �� ���� ��������� ������ ��������� ��������, ����������� ���������� � ���������� �� SOLID
{
protected:
	map<string, function<Complex(Complex, Complex)>> catalogOperation;
public:
	virtual map<string, function<Complex(Complex, Complex)>> GetCatalogOperation() = 0;
	virtual ~ListOperation() {};
};

class ListOperationStandart : public ListOperation 
{
public:
	ListOperationStandart();
	map<string, function<Complex(Complex, Complex) >> GetCatalogOperation();
};

class ListOperationNew : public ListOperation
{
public:
	ListOperationNew();
	map<string, function<Complex(Complex, Complex) >> GetCatalogOperation();
};

