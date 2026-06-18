#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie;

	heapZombie = newZombie("Foo");
	heapZombie->announce();

	randomChump("Bob");

	delete heapZombie;

	return (0);
}