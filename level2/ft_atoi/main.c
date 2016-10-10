#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf("%d \n", ft_atoi("-2147483648"));
	printf("%d \n", ft_atoi("2147483647"));
	return (0);
}

/* You don't have to push this ! */
