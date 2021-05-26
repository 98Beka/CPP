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
		std::cout << " ";
	}
	std::cout << std::endl;
	}
	else
		std :: cout << "incorect num of args" << std::endl;
		
  return 0;
}
