/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:25:44 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:07:23 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Duplicates given string.
*/
char	*ft_strdup(const char *s)
{
	int		i;
	char	*dupe;

	i = ft_strlen(s);
	dupe = (char *)malloc((i + 1) * sizeof(char));
	if (!dupe)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dupe[i] = s[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
