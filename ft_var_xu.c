/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_xu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:29:41 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 19:23:20 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_var_xu(va_list argptr, char type)
{
	unsigned int	hex;
	int				j;
	char			*c;
	char			*c_start;

	hex = va_arg(argptr, unsigned int);
	if (type == 'x')
		c = ft_itoa_base(hex, "0123456789abcdef", 16);
	if (type == 'X')
		c = ft_itoa_base(hex, "0123456789ABCDEF", 16);
	if (type == 'u')
		c = ft_itoa_base(hex, "0123456789", 10);
	c_start = c;
	j = ft_strlen(c);
	while (*c != '\0')
	{
		if (write(1, c, 1) == -1)
		{
			free(c_start);
			return (-1);
		}
		c++;
	}
	free (c_start);
	return (j);
}
