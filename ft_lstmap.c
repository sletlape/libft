/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sletlape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 12:47:13 by sletlape          #+#    #+#             */
/*   Updated: 2017/08/22 14:34:17 by sletlape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list *lsfresh;
	t_list *lsnew;

	lsnew = lst;
	if (lst)
	{
		lsnew = f(lst);
		lsfresh = lsnew;
		lst = lst->next;
		while (lst != NULL)
		{
			lsfresh->next = f(lst);
			lsfresh = lsfresh->next;
			lst = lst->next;
		}
	}
	return (lsnew);
}
