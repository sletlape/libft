/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:43:11 by sletlape          #+#    #+#             */
/*   Updated: 2017/08/19 14:30:41 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	if (j < 0)
		return (ft_strnew(0));
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > 0)
		j--;
	if (j < i)
		return (ft_strnew(0));
	if (!(str = (char *)malloc(sizeof(char) * ((j - i) + 2))))
		return (NULL);
	while (i <= j)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
