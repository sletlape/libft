/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 03:24:09 by sletlape          #+#    #+#             */
/*   Updated: 2017/06/09 22:55:59 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	unsigned char nc;

	nc = ((unsigned char)c);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
