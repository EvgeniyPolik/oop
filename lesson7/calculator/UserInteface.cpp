#include <iostream>
#include <string>
#include "UserInteface.h"

UserInteface::UserInteface(UserInteface const& another)
{
	firstPhrase = another.firstPhrase;
	lastPhrase = another.lastPhrase;
	inputCommandPhrase = another.inputCommandPhrase;
	for (int i = 0; i < 3; i++)
		currentInput[i] = another.currentInput[i];
}

UserInteface & UserInteface::operator=(UserInteface const& another)
{
	firstPhrase = another.firstPhrase;
	lastPhrase = another.lastPhrase;
	inputCommandPhrase = another.inputCommandPhrase;
	for (int i = 0; i < 3; i++)
		currentInput[i] = another.currentInput[i];
	return * this;
}

UserInteface::UserInteface(std::unordered_set<std::string> operations)
{
	this->firstPhrase = "КАЛЬКУЛЯТОР РАБОТАЕТ С ПРОСТЫМИ И КОМПЛЕКСНЫМИ ЧИСЛАМИ!!!\nВведите первую операнду (для комплексных чисел действительная и мнимая часть строго через пробел)\nили q для выхода или h для вывода истории:\n";
	this->lastPhrase = "Введите вторую операнду (для комплексных чисел действительная и мнимая часть строго через пробел) или q для выхода:\n";
	this->inputCommandPhrase = "Введите операцию из списка: ";
	bool start = false;
	for (auto operation : operations)
		if (start)
		{
			this->inputCommandPhrase += ", ";
			this->inputCommandPhrase += operation;
		}
		else
		{
			this->inputCommandPhrase += operation;
			start = true;
		}
	this->inputCommandPhrase += " или введите q для выхода: \n";
	currentInput[0] = "5";
}

void UserInteface::ShowMessage(std::string msg)
{
	std::cout << msg << std::endl;
}

bool UserInteface::UserDialog()
{
	std::cout << firstPhrase;
	std::getline(std::cin, currentInput[0]);
	if (currentInput[0] != "q" && currentInput[0] != "h")
	{
		std::cout << this->inputCommandPhrase;
		std::getline(std::cin, currentInput[1]);

	}
	else if (currentInput[0] == "h")
		return true;
	else
		return false;

	if (currentInput[1] != "q")
	{
		std::cout << this->lastPhrase;
		std::getline(std::cin, currentInput[2]);
	}
	else
		return false;

	if (currentInput[2] == "q")
		return false;

	return true;
}
