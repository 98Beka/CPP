/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 04:39:28 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 10:00:59 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
	Pony *Pony;

	Pony = NULL;
	std::cout << std::endl;
	std::cout << "\u001b[32m\tHEAP\u001b[0m" << std::endl;
	Pony->pony_on_heap("Trol'", "Tesla", 32);
	std::cout << std::endl;
	std::cout << "\u001b[32m\tSTACK\u001b[0m" << std::endl;
	Pony->pony_on_stack("Popy'", "Hummer", 32);
	return (0);
}