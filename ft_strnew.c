/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:02:48 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:02:49 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates and returns a fresh string
** ending with '\0'. Each character of
** the string is initialized at '\0'.
** If malloc fails return NULL.
*/
char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *) malloc((size + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
	return (s);
}
