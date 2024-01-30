/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:16:43 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/13 11:41:58 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	char	*s1;
	char	c1;
	int		i;
	int		len;

	s1 = (char *)s;
	c1 = (char)c;
	len = ft_strlen(s1);
	i = 0;
	if (!s1 || !ft_isascii((int)c1))
		return (NULL);
	while (i < len)
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == c1)
		return (&s1[i]);
	return (NULL);
}
