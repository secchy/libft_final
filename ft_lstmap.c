/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:30:29 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:30:50 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Iterates lst and applies the function f to each link,
** to create a "fresh" list resulting from successive
** applications of f.
*/
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (lst != NULL)
	{
		newlst = (*f)(lst);
		if (lst->next != NULL && newlst != NULL)
			newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (NULL);
}
