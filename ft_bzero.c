/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:15:38 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 12:15:41 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Erases data from n amount of bytes
** by writing '\0' to that area.
*/
void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}
