
char    *ft_strnstr(const char *str, const char *to_find, int n) {
    int i;
    int j;

    i = 0;
    j = 0;
    if(!ft_strlen((char *)to_find) || str == to_find)
        return ((char *)str);
    while (str[i] && i + j <= n) {
        if(to_find[j] == '\0')
            return ((char *)&str[i]);
        if(str[i + j] == to_find[j])
            j++;
        else {
            j = 0;
            i++;
        }
    }
    return (NULL);
}
