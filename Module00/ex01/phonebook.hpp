/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:57:26 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 03:32:20 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

const int LIM_CONT = 8;
const int WITDTH_LINE = 10;

class Contact
{
	public:

		Contact(){};
		~Contact(){};
		
		void	add(int &num);
		void	write_title() const;
		void	write_info();
		int		get_id();

	private:
		int			id;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string	_postalAddress;
		std::string	_emailAdress;
		std::string	_phoneNumber;
		std::string	_birthdayDate;
		std::string	_favoriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;
};
void	write_w(std::string value);
void	write_w(int value);

#endif
