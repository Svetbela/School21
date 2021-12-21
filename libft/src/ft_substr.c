/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:29 by halta             #+#    #+#             */
/*   Updated: 2021/10/19 17:10:27 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) - start < len && ft_strlen(s) - start >= 0)
		len = ft_strlen(s) - start;
	else if ((int)ft_strlen(s) - (int)start < 0)
		len = 0;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
