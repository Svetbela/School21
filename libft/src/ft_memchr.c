/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:32:59 by halta             #+#    #+#             */
/*   Updated: 2021/10/13 12:30:54 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	u;

	ptr = (unsigned char *)s;
	u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == u)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
