/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bek <bek@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 03:46:17 by bek               #+#    #+#             */
/*   Updated: 2021/06/08 03:46:20 by bek              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

int	main(int c, char *v[])
{
	int	i;
	int	j;

	if (c > 1)
	{
		i = 0;
		while (++i < c)
		{
			j = -1;
			while (v[i][++j])
				std::cout << (char)toupper(v[i][j]);
		}
		std::cout << std::endl;
	}
	else if (c == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

  return 0;
}
