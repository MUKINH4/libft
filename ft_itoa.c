static size_t   ft_count_digits(int n)
{
    size_t  i;
    
    i = 0;
    if (n < 0)
    {
        n = -n;
        i++;
    }
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *str;
    size_t  i;
    
    i = ft_count_digits(n);
    if (n == 0)
        return (ft_strdup("0"));
    str = (char *)malloc(i + 1);
    if (!str)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    str[i] = '\0';
    i--;
    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
    return (str);
}