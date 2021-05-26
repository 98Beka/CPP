/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:23:38 by jaleman           #+#    #+#             */
/*   Updated: 2021/05/26 16:12:33 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int
main(void)
{
    int             contact_index;
    Contact         phonebook[MAX_CONTACTS];
    std::string     command;

    contact_index = 0;
    while (1)
    {
        getline(std::cin, command, '\n');
        if (command == "ADD")
        {
            if (contact_index < MAX_CONTACTS)
                phonebook[contact_index++] = addContact();
            else
                std::cout << "Phonebook is full! Brace yourself." << std::endl;
        }
        else if (command == "SEARCH")
        {
            if (contact_index > 0)
                showPhonebook(phonebook, contact_index);
            else
                std::cout << "Phonebook is empty. :O" << std::endl;
        }
        else if (command == "EXIT")
        {
            break ;
        }
    }
    return (0);
}
