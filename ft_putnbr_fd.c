/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:00:05 by sletlape          #+#    #+#             */
/*   Updated: 2017/08/19 14:38:39 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	i;
	unsigned int	temp;

	if (n < 0)
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(c, fd);
		n = n % temp;
		temp = temp / 10;
	}
}
