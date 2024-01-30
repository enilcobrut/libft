/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:21:03 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/11 12:50:25 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c1;
	char	*s1;

	c1 = (char)c;
	s1 = (char *)s;
	i = ft_strlen(s1);
	while (i >= 0)
	{
		if (s1[i] == c1)
			return (s1 + i);
		i--;
	}
	return (NULL);
}
