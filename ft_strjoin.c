char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    size_t  str_len;
    size_t  i;
    size_t  s1_len;

    if (!s1 || !s2)
        return (0);
    s1_len = ft_strlen((char *)s1);
    str_len = s1_len + ft_strlen((char *)s2);
    new_str = (char *)malloc(sizeof(char) * (str_len + 1));
    if (!new_str)
        return (0);
    i = 0;
    while (s1[i])
    {
        new_str[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        new_str[s1_len] = s2[i];
        i++;
        s1_len++;
    }
    new_str[s1_len] = '\0';
    return (new_str);
}