/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:39:49 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/29 17:21:48 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Displays contents of every node if printable with putendl. If nonprintable
** content, just prints a newline.
*/
void	ft_putlst(t_list *list)
{
	while (list)
	{
		ft_putendl((const char *)list->content);
		list = list->next;
	}
}
