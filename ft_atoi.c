/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 03:29:03 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/30 00:47:00 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	nbr;
	int				i;
	int				j;
	int				sign;

	i = 0;
	j = 0;
	nbr = 0;
	sign = 1;
	while (ft_isblankspace(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
		j++;
	}
	if (j > 19)
		return ((sign < 0) ? 0 : -1);
	return (nbr * sign);
}
