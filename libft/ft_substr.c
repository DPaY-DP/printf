/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:48:37 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/06 14:29:35 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*pnt;
	size_t	strlen;

	strlen = ft_strlen(s) - start;
	i = 0;
	if (!s)
		return (NULL);
	if ((start) > ft_strlen(s))
		return (ft_strdup(""));
	if (len > strlen)
		len = strlen;
	pnt = ft_calloc((len + 1), sizeof(char));
	if (!pnt)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		pnt[i] = s[start + i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}
// int	main(void)
// {
// 	char s[] = "ein text zum testen";
// 	char *s2 = ft_substr(s, 5, 10);
// 	printf("%s", s2);
// 	free(s2);
// }