/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 16:00:03 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/30 00:32:04 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little || (ft_strcmp(big, little) == 0))
		return ((char*)big);
	else
	{
		while (big[i] != '\0')
		{
			j = 0;
			while (little[j] && little[j] == big[i + j] && (i + j) < len)
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
			i++;
		}
	}
	return (NULL);
}
