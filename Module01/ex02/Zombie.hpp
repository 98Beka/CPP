/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:28:16 by Marty             #+#    #+#             */
/*   Updated: 2021/06/08 09:33:56 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	std::string 	_name;
	std::string 	_type;
public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void			announce();

};

#endif