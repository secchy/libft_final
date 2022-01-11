/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:48:54 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 12:49:02 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** If given character c is uppercase, function will return
** the same letter in lowercase. Otherwise function will
** return c.
*/
int	ft_tolower(int c)
{
	int	b;

	if ((c >= 65) && (c <= 90))
	{
		b = c + 32;
		return (b);
	}
	else
		return (c);
}
