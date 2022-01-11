/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:15:22 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:15:23 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Writes given int into fd.
*/
void	ft_putnbr_fd(int nb, int fd)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = (nb * -1);
		}
		while ((nb / 10) / i > 0)
			i = (i * 10);
		while (i >= 1)
		{
			ft_putchar_fd((nb / i) + '0', fd);
			nb = nb % i;
			i = (i / 10);
		}
	}
}
