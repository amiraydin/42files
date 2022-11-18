
void	*ft_memcpy(void *dest, const void *src, int n) {
	
	int	i;
	char	*d;

	i = 0;
	d = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i++ < n)
		*d++ = *(char *)src++;
	return (dest);
}
