#pragma once
#include <string>
#include <unordered_set>

class UserInteface // Пользовательский интерфейс он же view
{
public:
	std::string firstPhrase;
	std::string inputCommandPhrase;
	std::string lastPhrase;
	std::string currentInput[3];

	UserInteface() {};
	UserInteface(UserInteface const & another);
	UserInteface & operator =(UserInteface const& another);
	UserInteface(std::unordered_set<std::string> operations);
	~UserInteface() {};

	void ShowMessage(std::string msg);
	bool UserDialog();

};

