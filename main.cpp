#include <iostream>

int getNumberFromUser();

int main()
{
	int user_input1{ getNumberFromUser() };
	int user_input2{ getNumberFromUser() };

	std::cout << user_input1 << " + " << user_input2 << " = " << user_input1 + user_input2 << '\n';

	return 0;
}

/*
* Function prompts user for an integer input and returns it to the caller
*/
int getNumberFromUser()
{
	std::cout << "Enter an integer: ";
	int user_input{ };
	std::cin >> user_input;

	return user_input;
}