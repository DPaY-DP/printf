/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:02:38 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:34:56 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_char;
	char	*dest_char;

	src_char = (char *)src;
	dest_char = (char *)dest;
	if ((dest == NULL && src == NULL && n > 0))
		return (0);
	if (src_char < dest_char)
	{
		while (n--)
			*(dest_char + n) = *(src_char + n);
		return (dest);
	}
	while (n--)
		*dest_char++ = *src_char++;
	return (dest);
}
// int main()
// {
//     char s[10] = "Hello";
//     char d[20] = "H";
//     ft_memmove(d, s, 4);
//     printf("%s", d);
// }