#include <iostream>

int main()
{

	std::string str;
	str = "HI THIS IS BRAIN";
	std::cout << "print str: " << str << std::endl;
	//"HI THIS IS BRAIN"을 포함하는 문자열을 생성하는 프로그램을 만드십시오. 

	std::string* stringPTR = &str;
	//문자열에 대한 포인터인 stringPTR을 만듭니다. 

	std::string& stringREF = str;
	//그리고 문자열에 대한 참조인 stringREF를 만듭니다.

	std::cout << "print *stringPTR: " << *stringPTR << std::endl;
	std::cout << "print stringREF: " << stringREF << std::endl;
	//그런 다음 stringPTR 및 stringREF를 사용하여 문자열의 주소를 표시합니다. 

	std::cout << "print stringPTR: " << stringPTR << std::endl;
	std::cout << "print &stringREF: " << &stringREF << std::endl;
	//마지막으로 포인터를 사용하여 문자열을 표시하고 마지막으로 참조를 사용하여 표시합니다. 

	return (0); 
}