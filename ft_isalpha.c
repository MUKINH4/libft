int	ft_isalpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') 
			|| (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
