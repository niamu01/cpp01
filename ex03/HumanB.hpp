/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:44:41 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:20:02 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string HumanName);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
	Weapon& getType() const;
private: 
	std::string _HumanName;
	Weapon *_weapon;
};

#endif