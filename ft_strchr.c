/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:09:43 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:09:45 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Scans string for c.
*/
char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	size_t		len;
	char		*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)s;
	while (i <= len)
	{
		if (str[i] == c)
			return (&(str[i]));
		i++;
	}
	return (0);
}
