/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 12:28:14 by sletlape          #+#    #+#             */
/*   Updated: 2017/08/19 14:26:54 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	c;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0 || !len)
		return (ft_strnew(0));
	if (!(substr = malloc(len + 1)))
		return (NULL);
	i = 0;
	c = (size_t)start;
	while (s[c] != '\0' && i < len)
	{
		substr[i] = s[c];
		i++;
		c++;
	}
	substr[i] = '\0';
	return (substr);
}
