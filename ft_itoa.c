/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:30:31 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/12 14:39:09 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	intlen(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	solve(long long nb, char *r, int i)
{
	while (nb > 0)
	{
		r[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char		*r;
	int			i;
	long long	nb;

	nb = n;
	i = intlen(nb);
	if (n == 0)
		return (ft_strdup("0"));
	r = malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);
	r[i--] = '\0';
	if (nb < 0)
	{
		r[0] = '-';
		nb = -nb;
	}
	solve(nb, r, i);
	return (r);
}
