/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:30:12 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/08 17:02:39 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	debut;
	size_t	fin;
	size_t	i;

	debut = 0;
	fin = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (s1[debut] && checkset(s1[debut], set))
		debut++;
	while (fin > debut && checkset(s1[fin - 1], set))
		fin--;
	s = malloc(sizeof(char) * (fin - debut + 1));
	if (!s)
		return (0);
	i = 0;
	while (debut < fin)
	{
		s[i] = s1[debut];
		i++;
		debut++;
	}
	s[i] = '\0';
	return (s);
}
