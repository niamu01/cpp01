/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:20:20 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 19:04:21 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie {
public:
	Zombie(void);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void);
private:
	std::string	_name;
	std::string	name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif