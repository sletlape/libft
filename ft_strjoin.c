/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 12:45:56 by sletlape          #+#    #+#             */
/*   Updated: 2017/08/19 11:09:47 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = malloc(ft_strlen(s1) + (ft_strlen(s2) + 1))))
		return (NULL);
	i = ft_strlen(s2);
	ft_strcpy(str, s1);
	ft_strncat(str, s2, i);
	return (str);
}
