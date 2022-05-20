/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:03:26 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/18 01:10:12 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	tot(char const *s, char c)
{
	size_t	total;
	int		i;

	i = 0;
	total = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			total++;
		if (s[i])
			i++;
	}
	if (total == 0 && s[i - 1] == c)
		return (0);
	if (s[0] != c)
		total++;
	return (total);
}

static	char	**mal(char **ptr, char const *s, char c)
{
	size_t	total;
	int		i;
	int		j;

	total = 0;
	i = 0;
	j = 0;
	while (s[j++])
	{
		if (s[j] != c)
			total++;
		else if (j > 0 && s[j - 1] != c)
		{
			ptr[i] = malloc(sizeof(char) * (total + 1));
			if (!ptr[i])
				return (0);
			total = 0;
			i++;
		}
		if (s[j + 1] == '\0' && s[j] != c)
		{
			ptr[i] = malloc(sizeof(char) * total + 1);
		}
	}
	return (ptr);
}

static char	**split(char **ptr, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] != c)
			ptr[i][j++] = s[k];
		else if (k > 0 && s[k - 1] != c)
		{
			if (k != 0)
			{
				ptr[i][j] = '\0';
				j = 0;
				i++;
			}
		}
		if (s[k + 1] == '\0' && s[k] != c)
			ptr[i][j] = '\0';
		k++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		total;

	total = tot(s, c);
	ptr = malloc(sizeof(char *) * (total + 1));
	if (!ptr)
		return (0);
	if (mal(ptr, s, c) != 0)
		split(ptr, s, c);
	else
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
