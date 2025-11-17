/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:18:17 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/27 14:19:39 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*newstr;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	newstr = ft_calloc((len + 1), sizeof(char));
	if (!newstr)
		return (0);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}
// int main()
// {
//     char s1[] = "ersterstring";
//     char s2[] = " zweiter";
//     char *s3 = ft_strjoin(s1, s2);
//     printf("%s\n", s3);
//     free(s3);
// }