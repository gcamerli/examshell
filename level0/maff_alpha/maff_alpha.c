#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		i;
	char	low;
	char	up;

	i = 0;
	low = 'a';
	up = 'B';
	while (i <= 12)
	{
		ft_putchar(low);
		ft_putchar(up);
		low = low + 2;
		up = up + 2;
		i++;
	}
	ft_putchar('\n');
	return (0);
}
