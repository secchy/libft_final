/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:25:52 by jheloaho          #+#    #+#             */
/*   Updated: 2021/12/31 09:47:10 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sorts char array in ascii order.
*/

void	ft_bubblesort(char **arr, int size)
{
	int		swap;
	int		i;
	char	*temp;

	swap = 1;
	while (swap > 0)
	{
		i = 0;
		swap = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(arr[i], arr[i + 1]) > 0)
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap++;
			}
			i++;
		}
	}
}
