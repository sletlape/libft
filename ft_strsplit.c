/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:19:13 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/22 16:22:54 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		split(char *s, char c, char **splitarray, int nofwords)
{
	int	count;
	int	start;
	int	len;

	count = 0;
	start = 0;
	while (count < nofwords)
	{
		while (*s == c)
			s++;
		len = ft_wordlen(s, c);
		splitarray[count] = ft_strsub(s, 0, len);
		s = s + len;
		count++;
	}
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**splitarray;
	int		nofwords;

	if (!s)
		return (NULL);
	nofwords = ft_countwds(s, c);
	if (!(splitarray = (char **)malloc(sizeof(char *) * nofwords + 1)))
		return (NULL);
	if (split((char *)s, c, splitarray, nofwords) != 1)
		return (NULL);
	splitarray[nofwords] = NULL;
	return (splitarray);
}
