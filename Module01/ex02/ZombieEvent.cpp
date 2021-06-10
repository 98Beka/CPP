/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:28:28 by Marty             #+#    #+#             */
/*   Updated: 2021/06/08 09:47:27 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::randomChump()
{
	int i = rand() % 5;
	std::string name[] = { "little", "smoke", "snake", "blood", "big"};

	Zombie randomZombie(name[i], "random zombie");
	randomZombie.announce();
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	try {
		Zombie *zomby = new Zombie(name, this->_type);
		return (zomby);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return NULL;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

std::string ZombieEvent::getZombieType()
{
	return (this->_type);
}
