/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:21:48 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/04 17:25:18 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Compares s1 to s2, up to n bytes or null character, and
** returns an integer depending on if s1 is equal, less than
** or greater than s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (--n && s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char )s2[i]);
}
