/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 12:46:22 by sletlape          #+#    #+#             */
/*   Updated: 2017/09/22 18:09:46 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lstemp;

	lstemp = *alst;
	if (del != NULL)
	{
		while (lstemp)
		{
			del(lstemp->content, lstemp->content_size);
			free(lstemp);
			lstemp = lstemp->next;
		}
		*alst = NULL;
	}
}
