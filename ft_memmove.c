/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:13:16 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/08 17:06:54 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dst;
	s = src;
	while (len > 0 && d < s)
	{
		*d++ = *s++;
		len--;
	}
	if (d > s)
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len > 0)
		{
			*lastd-- = *lasts--;
			len--;
		}		
	}
	return (dst);
}
