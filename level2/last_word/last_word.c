#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (str[i])
				j = i;
		}
		i++;
	}
	while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
	{
		ft_putchar(str[j]);
		j++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	else 
		ft_putchar('\n');
	return (0);
}
