/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:39:08 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/24 17:31:52 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_lenght;

	src_lenght = ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && (j + i) + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = 0;
	if (i >= size)
		i = size;
	return (i + src_lenght);
}
// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }
// int	main(void)
// {
// 	char s1[19] = "HI also there";
// 	char *s2 = " there";
// 	size_t pnt = ft_strlcat(s1, s2, 19);
// 	printf("%ld\n", pnt);
// 	printf("%s", s1);
// }