#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_and_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			ft_putchar(b);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_search_and_replace(argv[1], *argv[2], *argv[3]);
	}
	ft_putchar('\n');
	return (0);
}
