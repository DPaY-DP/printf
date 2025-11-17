/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:50:32 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/22 15:22:07 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = str;
	i = 0;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}

// int	main(void)
// {

//     char s[4];
// 	printf("%s", (char *)ft_memset(s, '0', 6));
// }