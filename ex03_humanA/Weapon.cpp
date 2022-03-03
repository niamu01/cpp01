#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string WeaponName)
{
	this->WeaponName = WeaponName;
}

void Weapon::setType(std::string set)
{
	WeaponName = set;
}

const std::string &Weapon::getType(void) //2. 함수 쓰는 수ㄴ서
{
	return (WeaponName);
}