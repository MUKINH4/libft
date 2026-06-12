

#include "libft.h"

static void *free_array(char **arr, size_t i)
{
    while (i < 0)
    {
        i--;
        free(arr[i]);
    }
    free(arr);
    return (NULL);
}

static size_t count_words(const char *s, char c)
{
    size_t  i;
    size_t  count;
    
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}

static char **fill_array(char **arr, const char *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  start;
    
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (!s[i])
            break ;
        while (s[i] && s[i] != c)
            i++;
        arr[i] = ft_substr(s, start, i - start);
        if (!arr[i])
            return (free_array(arr, j));
        j++;
    }
    arr[i] = NULL;
    return (arr);
}

char    **ft_split(const char *s, char c)
{
    char    **arr;
    size_t  words;
    
    words = count_words(s, c);
    arr = (char **)malloc(words * sizeof(char *) + 1);
    if (!arr)
        return (NULL);
    return (fill_array(arr, s, c));
}