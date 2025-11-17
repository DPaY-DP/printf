/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:58:31 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/27 14:19:25 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pos_or_neg(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	array[13];
	int		is_neg;
	int		lenght;

	lenght = 0;
	is_neg = (n < 0);
	ft_bzero(array, 13);
	if (n == 0)
		array[0] = '0';
	while (n != 0)
	{
		array[lenght++] = '0' + ft_pos_or_neg(n % 10);
		n /= 10;
	}
	if (is_neg)
		array[lenght] = '-';
	else if (lenght > 0)
		lenght--;
	while (lenght >= 0)
		write(fd, &array[lenght--], 1);
}
// int main()
// {
//     ft_putnbr_fd(2147483644, 1);
//     ft_putnbr_fd(-2147483648, 1);
//     ft_putnbr_fd(2147483647, 1);
//     ft_putnbr_fd(0, 1);
//     ft_putnbr_fd(2222, 1);
// }