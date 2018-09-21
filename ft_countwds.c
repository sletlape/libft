/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwds.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:19:44 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/22 16:25:30 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwds(char const *s, char c)
{
	int	nbrofwords;
	int	isword;
	int	index;

	isword = 0;
	index = 0;
	nbrofwords = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c && isword == 1)
		{
			isword = 0;
			nbrofwords++;
		}
		else if (s[index] != c)
			isword = 1;
		index++;
	}
	if (isword == 1)
		nbrofwords++;
	return (nbrofwords);
}
