char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

