/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:58:11 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/30 13:08:05 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pos_or_neg(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char		*array;
	int			count;
	int			is_pos_neg;
	long int	n;

	n = (long)nbr;
	count = ft_count(n);
	is_pos_neg = (n < 0);
	array = ft_calloc(count + 1, sizeof(char));
	if (!array)
		return (0);
	array[count] = '\0';
	if (n == 0)
	{
		array[0] = '0';
		count--;
	}
	while (count > 0)
	{
		array[--count] = '0' + ft_pos_or_neg(n % 10);
		n /= 10;
	}
	if (is_pos_neg)
		array[0] = '-';
	return (array);
}

// int	main(void)
// {
// 	long int n = 9;
// 	char *str = ft_itoa(n);
// 	write(1, "\n", 1);
// 	printf("%s", str);
// 	free(str);
// }