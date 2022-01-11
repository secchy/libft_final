/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:59:34 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 12:59:38 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares s1 and s2 up to n characters or '\0'. If the
** strings are identical, function returns 1, otherwise 0.
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	if (!s1 && !s2)
		return (1);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}
