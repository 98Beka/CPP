/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 04:41:02 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 06:19:04 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::setName(std::string name)	{ this->_name = name; };
void	Pony::setCaar(std::string caar)	{ this->_caar = caar; };
void	Pony::setBabky(int babky)		{ this->_babky = babky; };

void	Pony::pony_on_heap(std::string name, std::string color, int age)
{
	try {
		Pony* pony = new Pony;

		pony->setName(name);
		pony->setCaar(color);
		pony->setBabky(age);
		pony->print();
		delete pony;
	}
	catch (const std::exception &e)	{
		std::cerr << e.what() << std::endl;
	}
}

void Pony::pony_on_stack(std::string name, std::string color, int age)
{
	Pony pony;

	pony.setName(name);
	pony.setCaar(color);
	pony.setBabky(age);
	pony.print();
}
