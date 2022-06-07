#include <iostream>
#include <windows.h>
#include <string>

int main()
{
	std::string zero = "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n";
	std::string PINK = "\x1b[35m";
	std::string BLUE = "\x1b[34m";
	std::string WHITE = "\x1b[0;37m";
	std::string RESET = "\x1b[0m";

	std::cout << PINK << zero;
	std::cout << PINK << zero;

	std::cout << BLUE << zero;
	std::cout << BLUE << zero;

	std::cout << WHITE << zero;
	std::cout << WHITE << zero;

	std::cout << BLUE << zero;
	std::cout << BLUE << zero;

	std::cout << PINK << zero;
	std::cout << PINK << zero;
}

