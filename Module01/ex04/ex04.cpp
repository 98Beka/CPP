/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:59:40 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 10:03:31 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &rstr = str;
	std::cout << "str:\t" << str << std::endl;
	std::cout << "pstr:\t" << *pstr << std::endl;
	std::cout << "rstr:\t" << rstr << std::endl;
	return (0);
}
