/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:04:14 by cjunker           #+#    #+#             */
/*   Updated: 2022/03/30 19:53:39 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function tests for a decimal digit character */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
