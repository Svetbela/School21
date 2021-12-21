/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:14:07 by halta             #+#    #+#             */
/*   Updated: 2021/10/12 18:01:17 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (src == 0 && dst == 0)
		return (dst);
	if (d < s)
	{
		while (len)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
