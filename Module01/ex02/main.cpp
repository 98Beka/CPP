# include <string>
# include <cstdlib>
# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int		main()
{
	ZombieEvent 	event;
	Zombie			*zomby;

	event.setZombieType("dumb zombie");
	zomby = event.newZombie("Sjakie");
	zomby->announce();
	delete zomby;
	event.randomChump();
	event.randomChump();
	return (0);
}