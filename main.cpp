#include <iostream>

int getNumberFromUser();

int main()
{
	int user_input{ getNumberFromUser() };

	std::cout << "Double " << user_input << " is: " << 2 * user_input << '\n';
	std::cout << "Triple " << user_input << " is: " << 3 * user_input << '\n';

	return 0;
}

int getNumberFromUser()
{
	std::cout << "Enter an integer: ";
	int user_input{ };
	std::cin >> user_input;

	return user_input;
}