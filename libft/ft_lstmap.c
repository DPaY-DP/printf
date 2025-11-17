/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:35:28 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/05 20:50:37 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new_listhead;
	t_list	*changelist;

	if (!lst || !f || !del)
		return (NULL);
	new_listhead = NULL;
	while (lst)
	{
		changelist = f(lst->content);
		newlst = ft_lstnew(changelist);
		if (!newlst)
		{
			del(changelist);
			ft_lstclear(&new_listhead, del);
			return (NULL);
		}
		ft_lstadd_back(&new_listhead, newlst);
		lst = lst->next;
	}
	return (new_listhead);
}
