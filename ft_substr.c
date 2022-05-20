/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:03:26 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/17 20:36:03 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ptr;
	int					i;
	unsigned int		end;

	i = 0;
	ptr = malloc(sizeof(s) * ft_strlen(s));
	if (!ptr)
		return (NULL);
	end = start + len;
	while (start < end)
	{
			ptr[i] = s[start];
			i++;
			start++;
	}
	return (ptr);
}
