/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:34:04 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:34:16 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the last link of list given as parameter.
*/

t_list	*ft_lst_last(t_list *alst)
{
	if (!alst)
		return (NULL);
	while (alst->next != NULL)
	{
		alst = alst->next;
	}
	return (alst);
}
