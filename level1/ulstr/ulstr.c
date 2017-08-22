#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar(str[i] + 32);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 32);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
