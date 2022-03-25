/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:44:37 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:18:52 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string HumanName, Weapon &weapon);
	~HumanA();
	void attack();
	void setWeapon(Weapon &weapon);
	Weapon& getType() const;
private: 
	std::string HumanName;
	Weapon &weapon;
};

#endif