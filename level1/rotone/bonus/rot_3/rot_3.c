#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot_3(char *str)
{
	int i;

	i = 0;
	while (str[i] |= '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'W')
			ft_putchar(str[i] + 3);
		else if (str[i] == 'X')
			ft_putchar('A');
		else if (str[i] == 'Y')
			ft_putchar('B');
		else if (str[i] == 'Z')
			ft_putchar('C');
		else if (str[i] >= 'a' && str[i] <= 'w')
			ft_putchar(str[i] + 3);
		else if (str[i] == 'x')
			ft_putchar('a');
		else if (str[i] == 'y')
			ft_putchar('b');
		else if (str[i] == 'z')
			ft_putchar('c');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_3(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
