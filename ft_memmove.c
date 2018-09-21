/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 00:50:25 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/29 23:47:42 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	unsigned char	tdest[n];

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (n >= (128 * 1024 * 1024))
		return (NULL);
	if (n <= 0)
		return (dest);
	ft_bzero(tdest, n);
	ft_memcpy(tdest, csrc, n);
	ft_memcpy(cdest, tdest, n);
	return (cdest);
}
