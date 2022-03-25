/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:19:38 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 18:57:09 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		i = 0;

	zombies = zombieHorde(10, "zombie");
	while (i < 10)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}