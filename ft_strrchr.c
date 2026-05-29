char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = ft_strlen((char *)s);
	if ((char)c == '\0')
	    return ((char *)s);
	while (s[i] != c)
	    i--;
    if (s[i] == (char)c)
        return ((char *)&s[i]);
	return (0);
}