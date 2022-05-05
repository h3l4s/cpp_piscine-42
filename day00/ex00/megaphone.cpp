#include <iostream>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

char go_up(char c)
{
	return((c >= 97 && c <= 122) ? c - 32 : c);
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		for(int i = 1; i < ac;i++)
		{
			for(int j = 0;j< ft_strlen(av[i]);j++)
				std::cout << go_up(av[i][j]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}