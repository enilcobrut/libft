/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:22:03 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/09 10:15:14 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	len1 = ft_strlen(needle);
	if (!len1 || haystack == needle)
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && needle[j] && hay[i + j] == needle[j]
			&& i + j < len)
			j++;
		if (j == len1)
			return (hay + i);
		i++;
	}
	return (0);
}
