/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:20:35 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 12:20:38 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Turns an integer into a char string.
*/
static int	ft_length(long n, int len)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while ((n / 10) / i > 0)
	{
		i = (i * 10);
		len++;
	}
	return (len);
}

static char	*ft_makestr(char *s, long n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (n < 0)
	{
		s[j] = '-';
		j++;
		n = n * -1;
	}
	while ((n / 10) / i > 0)
	{
		i = (i * 10);
	}
	while (i >= 1)
	{
		s[j] = ((n / i) + '0');
		n = n % i;
		i = (i / 10);
		j++;
	}
	s[j] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*itoa;

	len = 1;
	len = ft_length(n, len);
	itoa = (char *) malloc((len + 1) * sizeof(*itoa));
	if (itoa == NULL)
		return (0);
	itoa = ft_makestr(itoa, n);
	return (itoa);
}
