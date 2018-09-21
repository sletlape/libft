/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:45:21 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/30 02:34:45 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t dlen;
	size_t slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size < dlen + 1)
		return (slen + size);
	if (size > dlen + 1)
	{
		while (dlen + i < size - 1 && src[i] != '\0')
		{
			dest[dlen + i] = src[i];
			i++;
		}
		dest[i + dlen] = '\0';
	}
	return (dlen + slen);
}
