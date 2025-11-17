/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:14:59 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/28 13:18:24 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*array;

	i = 0;
	array = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!array || !s)
		return (0);
	while (i < ft_strlen(s))
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = '\0';
	return (array);
}
// char    test(unsigned int i, char str)
// {
//     printf("My inner function: index = %d and %c\n", i, str);
//     return (str);
// }
// int main()
// {
//     char *str1 = "abcffttyy";
// 	char *str2;
// 	str2 = ft_strmapi(str1, test);
// 	printf("%s\n", str2);
// }