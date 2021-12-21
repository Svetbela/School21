/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:32:17 by halta             #+#    #+#             */
/*   Updated: 2021/10/21 12:19:22 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char	*s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i])
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
}
