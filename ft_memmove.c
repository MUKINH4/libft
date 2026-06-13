/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:52:54 by smaragat          #+#    #+#             */
/*   Updated: 2026/06/13 17:05:06 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*destination;
	unsigned char	*source;

	if (!dest || !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	destination = (unsigned char *) dest;
	source = (unsigned char *)src;
	if (destination < source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n--)
			destination[n] = source[n];
	}
	return (dest);
}
