
void	*ft_memmove(void *dest, const void *src, int n) {
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (src < dest) {
		while (n > 0){
			n--;
			d[n] = s[n];
		}
	}
	else if (src > dest)
		ft_memcpy(d, s, n);
	return (dest);
}
