/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:04:05 by halta             #+#    #+#             */
/*   Updated: 2021/11/26 17:19:06 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoabase(unsigned long int a, int count)
{
	char				c;
	unsigned long int	mod;

	mod = a % 16;
	a = a / 16;
	if (a != 0)
		count = ft_itoabase(a, count);
	if (mod < 10)
		c = mod + '0';
	else
		c = (mod - 10) + 'a';
	count += write (1, &c, 1);
	return (count);
}
