/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:19:38 by yeju              #+#    #+#             */
/*   Updated: 2022/03/03 17:46:02 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name + std::to_string(i));
	}
	return (zombieHorde);
}