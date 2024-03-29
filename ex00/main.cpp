/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:37:47 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 18:37:48 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;
	Zombie *zombie2;
	
	zombie1 = newZombie("name1");
	zombie2 = newZombie("name2");

	randomChump("name3");
	randomChump("name4");

	zombie2->announce();
	zombie1->announce();

	delete zombie1;
	delete zombie2;

	return (0);
}