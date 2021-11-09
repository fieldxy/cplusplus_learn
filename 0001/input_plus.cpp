#include <iostream>
#include <string>

int main()
{
	std::cout << "Please input your first name: ";
	
	std::string name;
	std::cin >> name;

	const std::string greeting = "Hello, " + name + "!";

	const std::string space(greeting.size(), ' ');
	const std::string second = "* " + space + " *";

	const std::string first(second.size(), '*');
	
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	return 0;
}
