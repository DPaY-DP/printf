/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:34:21 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:33:51 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	size_t	i;
	char	*src_char;
	char	*dest_char;

	src_char = (char *)from;
	dest_char = (char *)to;
	i = 0;
	if ((to == NULL && from == NULL && numBytes > 0))
		return (0);
	while (i < numBytes)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (to);
}
// int	main(void)
// {
// 	char	src[] = "Do I fucntion?";
// 	char	dest[100];

// 	ft_memcpy(dest, src, 20);
// 	printf("%s", dest);
// }
