
// a voir 
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char *t1;
	unsigned char *t2;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while ((t1[i] || t2[i]) && n > 0)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		else
			i++;
		n--;
	}
	return (0);
}
