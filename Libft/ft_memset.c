
void	*ft_memset(void *s, int c, int n) {
	int	i;
	char	*tab;

	i = 0;
	tab = (char *)s;
	while (i < n) {
		tab[i] = (char)c;
		i++;
	}
	return ((void *)s);
}
