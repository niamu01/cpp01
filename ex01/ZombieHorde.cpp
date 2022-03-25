/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:19:38 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 19:12:27 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];
	std::stringstream ss;

	for (int i = 0; i < N; i++)
	{
		ss << i;
		zombies[i].setName(name + ss.str());
		ss.str("");
	}
	return (zombies);
}