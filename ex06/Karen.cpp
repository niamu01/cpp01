#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	void (Karen::*state[]) (void) = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    std::string complainLevels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++)
    {
        if (level != complainLevels[0] && level != complainLevels[2] && level != complainLevels[1] && level != complainLevels[3])
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return ;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (level == complainLevels[i])
        {
            switch (i)
            {
                case 0:
                {
                    void (Karen::*f)( void ) = state[i];
                    (this->*f)();
                    i++;
                }
                case 1:
                {
                    void (Karen::*f)( void ) = state[i];
                    (this->*f)();
                    i++;
                }
                case 2:
                {
                    void (Karen::*f)( void ) = state[i];
                    (this->*f)();
                    i++;
                }
                case 3:
                {
                    void (Karen::*f)( void ) = state[i];
                    (this->*f)();
                    break;
                }
            }
        }   
    }
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
    std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
    std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}