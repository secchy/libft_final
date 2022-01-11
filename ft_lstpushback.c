/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:26:34 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:26:36 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new at the end of the list.
*/

void	ft_lstpushback(t_list **alst, t_list *new)
{
	t_list	*lastnode;

	if (*alst == NULL)
	{
		*alst = new;
	}
	else
	{
		if (new != NULL)
		{
			lastnode = *alst;
			while (lastnode->next != NULL)
			{
				lastnode = lastnode->next;
			}
			lastnode->next = new;
		}
	}
}
