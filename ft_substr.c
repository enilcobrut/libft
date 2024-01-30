/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:34:14 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/09 10:40:30 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	slen;
	size_t	end;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	end = 0;
	if (start < slen)
		end = slen - start;
	if (end > len)
		end = len;
	s1 = malloc(sizeof(char) * (end + 1));
	if (!s1)
		return (0);
	ft_strlcpy(s1, s + start, end + 1);
	return (s1);
}
