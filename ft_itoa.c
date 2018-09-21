/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:30:34 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/30 02:06:32 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	int			sign;
	long		temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp = (long)(n < 0) ? -n : n;
	i = ft_dignumb(temp);
	i = (n < 0) ? i + 1 : i;
	str = ft_strnew(i);
	if (str == NULL)
		return (NULL);
	sign = (n < 0) ? -1 : 1;
	while (i--)
	{
		str[i] = (i == 0 && sign < 0) ? '-' : (temp % 10) + '0';
		temp /= 10;
	}
	return (str);
}
