#include <iostream>

int main()
{
	int first{};
	std::cout << "Enter a number"<<std::endl;
	std::cin >> first;
	std::cout << std::endl;
	std::cout << "Your number" << std::endl;
	std::cout <<first;
	std::cout << std::endl;

	return EXIT_SUCCESS;
}