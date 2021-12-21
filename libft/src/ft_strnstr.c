/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:16:55 by halta             #+#    #+#             */
/*   Updated: 2021/10/16 17:02:49 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (!n && !h)
		return (NULL);
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		if (h[i] == n[0])
		{
			j = 0;
			while ((i + j < len) && n[j] && h[i + j] && h[i + j] == n[j])
				j++;
			if (n[j] == '\0')
				return (h + i);
		}
		i++;
	}
	return (NULL);
}
