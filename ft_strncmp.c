/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:14:36 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/19 02:08:58 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (*(unsigned char *)(s1 + i) < *(unsigned char *)(s2 + i))
		{
			return (-1);
		}
		if (*(unsigned char *)(s1 + i) > *(unsigned char *)(s2 + i))
		{
			return (1);
		}
		i++;
	}
	while (s2[j] != '\0' && j < n)
		j++;
	if (i < j)
		return (-1);
	if (i > j)
		return (1);
	return (0);
}
