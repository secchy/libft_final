/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:34:27 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:34:35 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of links in list given as parameter.
*/

int	ft_lst_size(t_list *alst)
{
	t_list	*list;
	int		i;

	list = alst;
	i = 0;
	while (list->next != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
