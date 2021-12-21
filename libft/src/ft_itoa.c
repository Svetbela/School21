/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:23:02 by halta             #+#    #+#             */
/*   Updated: 2021/10/24 14:29:07 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long long int	n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long int	nn;
	int				len;

	nn = (long long int)n;
	len = ft_len(nn);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nn < 0)
	{
		str[0] = '-';
		nn = -nn;
	}
	if (nn == 0)
	{
		str[0] = '0';
	}
	while (nn > 0)
	{
		str[len - 1] = nn % 10 + '0';
		len--;
		nn = nn / 10;
	}
	return (str);
}
