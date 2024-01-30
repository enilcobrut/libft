/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:12:57 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/09 10:26:30 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	s1 = ft_strdup(s);
	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1[i] = (*f)(i, s1[i]);
		i++;
	}
	return (s1);
}
