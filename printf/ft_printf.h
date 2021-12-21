/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:30:44 by halta             #+#    #+#             */
/*   Updated: 2021/11/28 14:31:13 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const	char *str, ...);
int	ft_putstr(char *str, int count);
int	ft_itoa(long int a, int count);
int	ft_itoabase(unsigned long int a, int count);
int	ft_itoahex(unsigned int a, int count, char c);

#endif
