#include <iostream>
#include <ostream>
#include <string>

int main()
{
	const std::string hello = "Hello";
	//right
	const std::string message = hello + ", world" + "!";
	//right '+' support ((string + string literal) + string literal)
	//=(string + string literal)
	//=(string)
	std::cout << message << std::endl;
	return 0;
}
