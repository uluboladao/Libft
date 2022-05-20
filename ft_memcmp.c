/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:14:36 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/19 02:12:33 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < n)
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
	while (j < n)
		j++;
	if (i < j)
		return (-1);
	if (i > j)
		return (1);
	return (0);
}
