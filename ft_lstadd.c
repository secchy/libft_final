/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:34:51 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:36:25 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Adds the element new at the beginning of the list.
*/
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		*alst = new;
	}
	else
	{
		if (new != NULL)
		{
			new->next = *alst;
			*alst = new;
		}
	}
}
