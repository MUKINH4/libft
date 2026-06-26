/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:29:16 by smaragat          #+#    #+#             */
/*   Updated: 2026/06/05 16:32:11 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == '\0')
		return (NULL);
	while (n--)
	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
