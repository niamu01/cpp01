#include <iostream>

int main()
{

	std::string str;
	str = "HI THIS IS BRAIN";
	//std::cout << str << std::endl;

	std::string* stringPTR = &str;
	std::cout << stringPTR << std::endl;

	std::string& stringREF = str;
	std::cout << stringREF << std::endl;

	int value = 5; // normal integer 
	int& ref = value; // reference to variable value 
	
	value = 6; // value is now 6 
	std::cout << value << std::endl; // prints 6

	ref = 7; // value is now 7
	std::cout << value << std::endl; // prints 7

	++ref;
	std::cout << value << std::endl; // prints 8

	return 0; 
}