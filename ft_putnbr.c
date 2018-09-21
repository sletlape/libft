/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:40:33 by sletlape          #+#    #+#             */
/*   Updated: 2017/08/18 16:10:55 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char			c;
	unsigned int	i;
	unsigned int	temp;

	if (n < 0)
		ft_putchar('-');
	n = (n < 0) ? -n : n;
	temp = 1;
	i = (unsigned int)n;
	while (i > 9)
	{
		temp = temp * 10;
		i = i / 10;
	}
	while (temp)
	{
		c = (n / temp) + '0';
		ft_putchar(c);
		n %= temp;
		temp = temp / 10;
	}
}
