#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char *dest;

	i = 0;
	j = 0;
	if (src == '\0')
		return (NULL);
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
