#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	
	int user_input{ };
	std::cin >> user_input;

	std::cout << "Double that number is: " << 2 * user_input << '\n';
	return 0;
}