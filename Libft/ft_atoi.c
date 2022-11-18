
int	ft_signe(char *str, int i, int j, int k)
{
	while (str[i] <= ' ' && str[i] > '\0')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] >= '-')
		{
			j *= -1;
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - '0';
		i++;
	}
	return (k * j);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	j = 1;
	i = 0;
	k = 0;
	return (ft_signe(str, i, j, k));
}