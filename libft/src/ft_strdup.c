/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:46:40 by halta             #+#    #+#             */
/*   Updated: 2021/10/21 16:08:15 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*c;
	char	*tmp;

	c = (char *)malloc(ft_strlen(s1) + 1);
	if (c == NULL)
		return (NULL);
	tmp = c;
	while (*s1)
	{
		*c = *s1;
		c++;
		s1++;
	}
	*c = '\0';
	c = tmp;
	return (c);
}
