#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string set)
{
	type = set;
}

const std::string&	Weapon::getType()
{
	return (this->type);
}