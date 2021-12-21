/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:30:59 by halta             #+#    #+#             */
/*   Updated: 2021/10/26 15:52:43 by halta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(char	*s, char	c);
static int	ft_len(char	*s, char	c);
static char	*ft_strndup(char	*s, int	n);
static char	**ft_subsplit(char	*s, char	c, int	count, char	**arr);

char	**ft_split(char const	*s, char	c)
{
	int		count;
	char	*str;
	char	**arr;

	if (!s)
		return (NULL);
	str = (char *)s;
	count = ft_count(str, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	arr = ft_subsplit(str, c, count, arr);
	return (arr);
}

static char	**ft_subsplit(char	*s, char	c, int	count, char	**arr)
{
	int	j;

	j = 0;
	while (*s && j < count)
	{
		if (*s != c)
		{
			arr[j] = ft_strndup(s, ft_len(s, c));
			if (!arr[j])
			{
				while (j > 0)
				{
					free(arr[j - 1]);
					j--;
				}
				free(arr);
				return (NULL);
			}
			j++;
			s = s + (ft_len(s, c) - 1);
		}
		s++;
	}
	arr[j] = NULL;
	return (arr);
}

static int	ft_count(char	*s, char	c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	ft_len(char	*s, char	c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_strndup(char	*s, int	n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	while (s[i] && i < n)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
