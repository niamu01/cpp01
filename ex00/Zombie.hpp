/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:38:01 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 18:39:25 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	void	announce(void);
	Zombie(std::string name);
	~Zombie(void);
private:
	std::string name;
	std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
