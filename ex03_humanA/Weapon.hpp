#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string WeaponName;
	public:
		Weapon();
		Weapon(std::string WeaponName);
		void setType(std::string set);
		const std::string &getType(void);
};

#endif