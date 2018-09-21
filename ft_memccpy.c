/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 04:25:22 by sletlape          #+#    #+#             */
/*   Updated: 2017/06/11 03:09:03 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*nsrc;
	char		*ndest;
	size_t		i;

	nsrc = src;
	ndest = dest;
	i = 0;
	while (i < n)
	{
		ndest[i] = nsrc[i];
		if (nsrc[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
