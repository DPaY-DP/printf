/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:42:02 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 14:10:01 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_strnstr(const char *string, const char *target, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!string && !target && n == 0))
		return (0);
	if ((target[0] == '\0' && n == 0) || (string[0] == '\0' && n != 0
			&& target[0] == '\0'))
		return ((char *)string);
	while (string[i] && i < n)
	{
		j = 0;
		while (string[i + j] == target[j] && target[j] && string[i + j] && (i
				+ j) < n)
			j++;
		if (!target[j])
			return ((char *)(string + i));
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char *s1 = "2";
// 	char *s2 = "";
// 	char *pnt;

// 	pnt = ft_strnstr(s1, s2, 0);

// 	printf("%s", pnt);
// }