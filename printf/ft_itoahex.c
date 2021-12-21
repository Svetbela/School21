/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoahex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:54:47 by halta             #+#    #+#             */
/*   Updated: 2021/11/28 14:48:59 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoahex(unsigned int a, int count, char c)
{
	char	sim;
	char	hex;
	int		mod;

	if (a < 0)
	{
		a *= -1;
		count += write (1, "-", 1);
	}
	if (c == 'X')
		hex = 'A';
	else if (c == 'x')
		hex = 'a';
	mod = a % 16;
	a = a / 16;
	if (a != 0)
		count = ft_itoahex(a, count, c);
	if (mod < 10)
		sim = mod + '0';
	else
		sim = mod + hex - 10;
	count += write(1, &sim, 1);
	return (count);
}
