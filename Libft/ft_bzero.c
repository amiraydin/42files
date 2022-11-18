
void	ft_bzero(void *s, int n) {
	int	i;
	char	*tab;

	i = 0;
	tab = (char *)s;
	while (i < n) {
		tab = '\0';
		i++;
	}
}

