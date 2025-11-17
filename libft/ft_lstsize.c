/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:38:10 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/03 13:50:52 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
// int main()
// {
// 	t_list *elem;
// 	t_list *elem2;
// 	t_list *elem3;
// 	t_list *elem4;
// 	t_list *elem5;
// 	char *str = ft_strdup("lorem");
// 	char *str2 = ft_strdup("lore");
// 	char *str3 = ft_strdup("lorm");
// 	char *str4 = ft_strdup("loem");
// 	char *str5 = ft_strdup("lrem");
// 	char 	c;
// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);
// 	elem5 = ft_lstnew(str5);

// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	// elem4->next = elem5;
// 	elem = NULL;
// 	c = ft_lstsize(elem) + 48;
// 	write(1, &c, 1);
// }