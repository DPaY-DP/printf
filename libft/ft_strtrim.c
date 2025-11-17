/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:45:05 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:46:08 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_char(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
		if (c == set[i++])
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	char	*newstr;
	size_t	end;

	end = ft_strlen(s1);
	start = 0;
	if (!s1 && !set)
		return (0);
	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	while (found_char(s1[start], set) == 0)
		start++;
	while (found_char(s1[end - 1], set) == 0)
		end--;
	newstr = ft_substr(s1, start, end - start);
	if (!newstr)
		return (0);
	return (newstr);
}
// id s1 is empty return 0. if set is empty retrun s1.
// while i find at start a char from set count up start.
// vice versa from end but backwards not starting from NULL
// creating substring from the string s1 with point start and lenght start - end
// if not possible then  retrun NULL
// int	main(void)
// {
// 	char	s1[] = "ersterstringer";
// 	char	s2[] = "";
// 	char	*s3;

// 	s3 = ft_strtrim(s1, s2);
// 	printf("%s\n", s3);
// 	free(s3);
// }
