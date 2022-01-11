/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:02:30 by jheloaho          #+#    #+#             */
/*   Updated: 2021/11/23 13:02:32 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by spliting
** s using the character c as a delimiter. If the allocation fails the function
** returns NULL.
*/

static	char	**ft_word_arr(char const *s, char c, size_t words)
{
	size_t	word_len;
	size_t	i;
	size_t	n;
	char	**arr;

	i = 0;
	n = 0;
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	while (n < words && arr)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		word_len = ft_wordlen(&s[i], c);
		arr[n] = malloc(sizeof(**arr) * (word_len + 1));
		ft_strncpy(arr[n], &s[i], word_len);
		arr[n][word_len] = '\0';
		while (s[i] != '\0' && s[i] != c)
			i++;
		n++;
	}
	arr[n] = NULL;
	return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	arr = ft_word_arr(s, c, words);
	return (arr);
}
