/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 00:41:39 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/29 23:51:02 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ns;
	unsigned char	nc;

	ns = ((unsigned char *)s);
	nc = ((unsigned char)c);
	i = 0;
	while (i < n)
	{
		if (ns[i] == nc)
			return (void*)&ns[i];
		i++;
	}
	return (NULL);
}
