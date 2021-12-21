/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:17:54 by halta             #+#    #+#             */
/*   Updated: 2021/10/12 16:14:38 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (dst);
}
