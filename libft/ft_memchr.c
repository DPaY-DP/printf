/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:46:56 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:35:28 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	x;

	i = 0;
	x = c;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == x)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
// int main()
// {
//     char str[] = "Hello World";
//     char ch = 'o';
//     char *ret;
//     ret = ft_memchr(str, ch, 15);
//     printf("String after |%c| is - |%s|\n", ch, ret);
//     printf("String  '%c' found at position %ld\n", ch, ret - str);
//     return(0);
// }