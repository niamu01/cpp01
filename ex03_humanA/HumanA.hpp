#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private: 
	std::string HumanName;
	Weapon &weapon;
public:
	HumanA(std::string HumanName, Weapon &weapon);
	void attack(void);

};

#endif