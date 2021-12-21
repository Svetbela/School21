/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:44:58 by halta             #+#    #+#             */
/*   Updated: 2021/11/26 17:17:58 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa(long int a, int count)
{
	char		c;
	long int	mod;

	if (a < 0)
	{
		a *= -1;
		count += write (1, "-", 1);
	}
	mod = a % 10;
	a /= 10;
	if (a != 0)
		count = ft_itoa(a, count);
	c = mod + '0';
	count += write (1, &c, 1);
	return (count);
}
