/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:57:13 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:59:59 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Deletes content and frees memory in every link of given list.
** The pointer to each freed link is set to NULL.
*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	list = *alst;
	if (*alst != NULL)
	{
		while (list->next != NULL)
		{
			ft_lstdelone(&list, del);
			list = (*alst)->next;
		}
		ft_lstdelone(&list, del);
		*alst = NULL;
	}
}
