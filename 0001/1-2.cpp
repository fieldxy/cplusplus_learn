#include <iostream>
#include <ostream>
#include <string>

int main()
{
	const std::string exclam = "!";
	// right
	const std::string message = "Hello" + ", world" + exclam;
	// fault 
	// '+' not support string literal + string literal
	std::cout << message << std::endl;
	return 0;
}
