/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:22:42 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/19 02:07:51 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	if (c == '\0')
	{
		len = ft_strlen(s);
		return ((char *)(s + len));
	}
	while (i < n)
	{
		if (*((char *)(s + i)) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
