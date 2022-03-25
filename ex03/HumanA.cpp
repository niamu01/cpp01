/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:44:35 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:34:35 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string HumanName, Weapon &weapon) : HumanName(HumanName), weapon(weapon) {
//레퍼런스를 선언할땐 값을 초기화를 같이 해주어야함 (별명을 지을건데 원본이 없는 상황)
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << this->HumanName << " attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon) {
	this->weapon = weapon;
}

Weapon& HumanA::getType() const {
	return (this->weapon);
}
