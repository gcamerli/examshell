int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	return ((int)*s1 - (int)*s2);
}
