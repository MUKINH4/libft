void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr_s;
    size_t          i;
    
    i = 0;
    ptr_s = (unsigned char *)s;
    while (i < n)
    {
        if (ptr_s[i] == (char)c)
            return (&ptr_s[i]);
        i++;
    }
    return (0);
}