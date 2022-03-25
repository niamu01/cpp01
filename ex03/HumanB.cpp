/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:44:39 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:20:13 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string HumanName) : _weapon(NULL) {
	_HumanName = HumanName;
	_weapon = NULL; //포인터는 선언할 때 초기화해주지 않아도 됨 알아서 null이 들어가있기 때문!
}

HumanB::~HumanB() {
}

void HumanB::attack() {
	if (_weapon == NULL)
		std::cout << "don't have weapon" << std::endl;
	else
		std::cout << this->_HumanName << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

Weapon& HumanB::getType() const {
	return (*(this->_weapon));
}
