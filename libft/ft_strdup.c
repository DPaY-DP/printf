/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:26:50 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:36:04 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pnt;
	size_t	i;

	i = 0;
	pnt = (char *)malloc(sizeof(*s) * (ft_strlen((char *)s) + 1));
	if (!pnt)
		return (0);
	while (s[i])
	{
		pnt[i] = s[i];
		i++;
	}
	pnt[i] = 0;
	return (pnt);
}
// int main()
// {
//     char *s1 = "Test1";
//     char *pnt = ft_strdup(s1);
//     printf("%s", s1);

//     printf("%s", pnt);
// }