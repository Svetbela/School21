/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:24:44 by halta             #+#    #+#             */
/*   Updated: 2021/10/16 16:10:03 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	s;
	size_t	d;

	i = 0;
	s = ft_strlen((char *)src);
	d = ft_strlen(dst);
	if (dstsize <= d)
		return (dstsize + s);
	while (src[i] && d + 1 < dstsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (d + ft_strlen((char *)&src[i]));
}
