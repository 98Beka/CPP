/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 04:41:27 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 06:32:36 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony 
{
	std::string _name;
	std::string _caar;
	int _babky;

	public:
		Pony(){ std::cout << "____Pony was born____" << std::endl; };
		~Pony(){ std::cout << "   ____i dead____" << std::endl; };
		void print()
		{
			std::cout	<< "-his nam's\t" << this->_name << std::endl
			<< "-his caar\t" << this->_caar << std::endl
			<< "-he have \t" << _babky	<< '$' << std::endl;
		}
		void			pony_on_heap(std::string name, std::string color, int age);
		void			pony_on_stack(std::string name, std::string color, int age);
		void			setName(std::string name);
		void			setCaar(std::string color);
		void			setBabky(int age);
};

#endif
