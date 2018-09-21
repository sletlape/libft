/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 04:45:15 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/29 23:43:15 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	nc;
	unsigned char	*str;

	str = (unsigned char *)s;
	nc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = nc;
		i++;
	}
	return (s);
}
