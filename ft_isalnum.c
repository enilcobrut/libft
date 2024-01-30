/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:05:53 by cjunker           #+#    #+#             */
/*   Updated: 2022/04/03 18:09:41 by cjunker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*test for any character for which isalpha(3) or isdigit(3) is true */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
