/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:55:45 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:56:10 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	void (Harl::*state[]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
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
                    void (Harl::*f)( void ) = state[i];
                    (this->*f)();
                    i++;
                }
                case 1:
                {
                    void (Harl::*f)( void ) = state[i];
                    (this->*f)();
                    i++;
                }
                case 2:
                {
                    void (Harl::*f)( void ) = state[i];
                    (this->*f)();
                    i++;
                }
                case 3:
                {
                    void (Harl::*f)( void ) = state[i];
                    (this->*f)();
                    break;
                }
            }
        }   
    }
}

void	Harl::debug(void)
{


	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
    std::cout << std::endl;
}

void	Harl::info(void)
{
    
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}