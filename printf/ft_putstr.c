/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:24:56 by halta             #+#    #+#             */
/*   Updated: 2021/11/26 17:19:26 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int count)
{
	int	i;

	i = 0;
	if (!str)
	{
		count += write (1, "(null)", 6);
		return (count);
	}
	while (str[i])
	{
		count += write (1, &str[i], 1);
		i++;
	}
	return (count);
}
