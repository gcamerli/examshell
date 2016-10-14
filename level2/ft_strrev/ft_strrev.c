#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (str);
}
