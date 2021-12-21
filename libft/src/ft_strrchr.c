/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:07:18 by halta             #+#    #+#             */
/*   Updated: 2021/10/19 12:51:03 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*ptr;
	int		i;

	ptr = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			ptr = (char *)s + i;
		i++;
	}
	if (s[i] == (unsigned char)c)
		ptr = (char *)s + i;
	return (ptr);
}
