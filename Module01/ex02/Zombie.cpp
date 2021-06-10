/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:28:01 by Marty             #+#    #+#             */
/*   Updated: 2021/06/08 09:40:34 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {	
	std::cout << "\u001b[31mZombie created\u001b[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " \u001b[32mdead\u001b[0m"
	<< std::endl << std::endl;
}

void Zombie::announce() {
	std::cout << "<name: " << this->_name 
	<< "(" << this->_type << ")> "
	<< "\"mister i would like to taste your lice brains\"" << std::endl;
}
