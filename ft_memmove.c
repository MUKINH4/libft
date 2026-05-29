#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char   *ptr_dest = (unsigned char *)dest;
	unsigned char   *ptr_src = (unsigned char *)src;
	unsigned int    i = 0;
	
	if (ptr_dest > ptr_src)
	{
	    while (n--)
    	    ptr_dest[n] = ptr_src[n];
	}
	else
	{
	    while (i < n)
	    {
	        ptr_dest[i] = ptr_src[i];
	        i++;
	    }
	}
	return (dest);
}

int	main(void)
{
	char	str1[7] = "aabbcc";
	
	ft_memmove(str1 + 2, str1, 4);
}
	printf("%s", str1);