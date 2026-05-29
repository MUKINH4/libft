
void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t  total;
    
    total = nmemb * size;
    ptr = malloc(total);
    
    ft_memset(ptr, 0, total);
    
    return (ptr);
}