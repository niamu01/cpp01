#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private: 
		std::string _HumanName;
		Weapon *_weapon;
	public:
		HumanB(std::string HumanName);
		void attack(void);
		void setWeapon(Weapon &weapon);
};

#endif