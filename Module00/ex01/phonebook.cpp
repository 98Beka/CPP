/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:01:08 by Marty             #+#    #+#             */
/*   Updated: 2021/06/08 03:32:54 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int				Contact::get_id()
{
	return (this-> id);
}

void			Contact::add(int &num)
{
	num += 1;
	this->id = num;
	std::cout << "Firstname: ";
	std::getline(std::cin, this->_firstName, '\n');
	std::cout << "Lastname: ";
	std::getline(std::cin, this->_lastName, '\n');
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname, '\n');
	std::cout << "Login: ";
	std::getline(std::cin, this->_login, '\n');
	std::cout << "Postal Address: ";
	std::getline(std::cin, this->_postalAddress, '\n');
	std::cout << "E-mail Address: ";
	std::getline(std::cin, this->_emailAdress, '\n');
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->_phoneNumber, '\n');
	std::cout << "Date of birth: ";
	std::getline(std::cin, this->_birthdayDate, '\n');
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->_favoriteMeal, '\n');
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->_underwearColor, '\n');
	std::cout << "Your darkest secret: ";
	std::getline(std::cin, this->_darkestSecret, '\n');
}

void			Contact::write_info(void)
{
	std::cout << "- Firstname: " 		<< this->_firstName 	<< '\n';
	std::cout << "- Lastname: " 		<< this->_lastName 		<< '\n';
	std::cout << "- Nickname: " 		<< this->_nickname 		<< '\n';
	std::cout << "- Login: " 			<< this->_login 		<< '\n';
	std::cout << "- Postal Address: " 	<< this->_postalAddress 		<< '\n';
	std::cout << "- E-mail Address: " 	<< this->_emailAdress 		<< '\n';
	std::cout << "- Phone Number: " 	<< this->_phoneNumber 		<< '\n';
	std::cout << "- Date of birth: " 	<< this->_birthdayDate 			<< '\n';
	std::cout << "- Favorite meal: " 	<< this->_favoriteMeal 			<< '\n';
	std::cout << "- Underwear color: " 	<< this->_underwearColor 	<< '\n';
	std::cout << "- Darkest secret: " 	<< this->_darkestSecret 		<< '\n';
}

std::string		truncate_string(std::string str)
{
	if (str.length() > 10)
    {
        str.resize(7);
        str += "...";
    }
	return (str);
}

void			Contact::write_title(void) const
{
	write_w(this->id);
	write_w(this->_firstName);
	write_w(this->_lastName);
	write_w(this->_nickname);
	std::cout << std::endl;
}
