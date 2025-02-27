#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	
	int user_input{ };
	std::cin >> user_input;

	std::cout << "Double " << user_input << " is: " << 2 * user_input << '\n';
	std::cout << "Triple " << user_input << " is: " << 3 * user_input << '\n';

	return 0;
}