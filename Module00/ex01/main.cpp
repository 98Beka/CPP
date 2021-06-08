/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:57:29 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 03:32:47 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact list[8];

void	write_w(std::string value)
{
	std::cout << std::setw(WITDTH_LINE) << value << '|';
}
void	write_w(int value)
{
	std::cout << std::setw(WITDTH_LINE) << value << '|';
}


void			search(int num)
{
	std::string input;
	int			index;

	write_w("Index");
	write_w("First name");
	write_w("Last name");
	write_w("Nickname");
	std::cout << std::endl;
	for (int i = 0; i < num; i++)
		list[i].write_title();
	while (1)
	{
		std::cout << "Choose contact: ";
		std::getline(std::cin, input, '\n');
		if (input.length() == 1 && std::isdigit(input[0]) && input[0] != '0')
		{
			index = input[0] - '0';
			if (index - 1 < num)
			{
				list[index - 1].write_info();
				return ;
			}
		}
		std::cout << "argument invalid " << num << std::endl;
	}
}

int exec(std::string str, int &num)
{
	if (str == "ADD")
		{
			if (num >= LIM_CONT)
				std::cout << "Over limit" << std::endl;
			else
				list[num].add(num);
		}
		else if (str == "SEARCH")
		{
			if (!num)
				std::cout << "Phonebook is empty" << std::endl;
			else
				search(num);
		}
		else if (str == "EXIT")
			return 0;
		return 1;		
}

int				main(void)
{
	std::string str;
	int num = 0;

	while (1)
	{
		std::cout << "comands: ADD | SEARCH | EXIT" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, str, '\n');
		if(!exec(str, num))
			break;
	}
	return (0);
}
