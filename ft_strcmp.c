/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:58:38 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:08:31 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Strcmp compares two strings, and returns an integer
** depending on the result of the comparison.
** 0 if equal, negative value if s1 < s2, positive
** value is s1 > s2.
*/

#include "libft.h"
/*
** Compares s1 to s2, returns an integer depending on if
** s1 is equal, less than or greater than s2.
*/
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
