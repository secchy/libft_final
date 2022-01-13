/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:05:38 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:06:30 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Compares s1 and s2. If the strings are identical
** function returns 1, otherwise 0.
*/
int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (!s1 && !s2)
		return (1);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
