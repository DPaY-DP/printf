/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:42:47 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/28 13:09:08 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s && !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// char    test(unsigned int i, char str)
// {
//     str = str + 1;
//     printf("My inner function: index = %d and %c\n", i, str);
//     return (str);
// }
// int main()
// {
//     char *str1 = "abcffttyy";
// 	char *str2;
// 	str2 = ft_striteri(str1, test);
// 	printf("%s\n", str2);
// }