#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;
	Zombie *zombie2;
	
	zombie1 = newZombie("name1");
	zombie2 = newZombie("name2");

	zombie2->announce();

	randomChump("name3");
	randomChump("name4");

	zombie1->announce();

	delete zombie1;
	delete zombie2;

	return (0);
}