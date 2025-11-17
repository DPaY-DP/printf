/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:27:11 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:12:50 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char str1[10] = "  s   s  ";
// 	printf("%s\n", str1);
// 	bzero(str1, 5);
//     char	src[] = "Do I fucntion?";

// 	ft_memcpy(str1, src, 5);
// 	printf("%s", str1);
// }