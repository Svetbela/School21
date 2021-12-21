/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:33:00 by halta             #+#    #+#             */
/*   Updated: 2021/11/28 14:37:33 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_main(char c, va_list argc);
static int	ft_transform(char c, va_list argc, int count);

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	char	*s;
	va_list	argc;

	s = (char *)str;
	i = 0;
	count = 0;
	va_start(argc, str);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			i++;
			count += ft_main(s[i], argc);
		}
		else
			count += write (1, &s[i], 1);
		i++;
	}
	va_end(argc);
	return (count);
}

static int	ft_transform(char c, va_list argc, int count)
{
	long int	a;
	int			ptr;

	if (c == 'd' || c == 'i')
	{
		a = (long int)va_arg(argc, int);
		count += ft_itoa(a, count);
	}
	if (c == 'u')
	{
		a = (unsigned long int)va_arg(argc, unsigned int);
		count += ft_itoa(a, count);
	}
	if (c == 'p')
	{
		a = (unsigned long int)va_arg(argc, void *);
		ptr = write (1, "0x", 2);
		count += ft_itoabase(a, ptr);
	}
	if (c == 'x' || c == 'X')
	{
		a = (unsigned int)va_arg(argc, unsigned int);
		count += ft_itoahex(a, count, c);
	}
	return (count);
}

static int	ft_main(char c, va_list argc)
{
	int			count;

	count = 0;
	if (c == '%')
		count += write (1, "%", 1);
	else if (c == 's')
		count += ft_putstr(va_arg(argc, void *), count);
	else if (c == 'c')
	{
		c = va_arg(argc, int);
		count += write (1, &c, 1);
	}
	else if (c == 'd' || c == 'i' || c == 'u')
		count += ft_transform(c, argc, count);
	else if (c == 'p' || c == 'x' || c == 'X')
		count += ft_transform(c, argc, count);
	return (count);
}
