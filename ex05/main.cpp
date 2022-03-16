#include "Karen.hpp"
int	main( void )
{
	Karen karen;

    std::cout << "[debug]: ";
	karen.complain("debug");
    std::cout << "[info]: ";
	karen.complain("info");
    std::cout << "[warning]: ";
	karen.complain("warning");
    std::cout << "[error]: ";
	karen.complain("error");
}
