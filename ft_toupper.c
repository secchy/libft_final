/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:48:13 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 12:48:16 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** If given character c is lowercase, function will return
** the same letter in uppercase. Otherwise function will
** return c.
*/
int	ft_toupper(int c)
{
	int	ret;

	if ((c >= 97) && (c <= 122))
	{
		ret = c - 32;
		return (ret);
	}
	else
	{
		return (c);
	}
}
