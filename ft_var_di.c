/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:33:04 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 18:11:37 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_var_di(va_list argptr)
{
	int		i;
	char	*c;
	char	*c_start;
	int		len_number;

	i = va_arg(argptr, int);
	c = ft_itoa(i);
	c_start = c;
	len_number = ft_strlen(c);
	while (*c != '\0')
	{
		if (ft_put_char_fd(*c, 1) == -1)
		{
			free(c_start);
			return (-1);
		}
		c++;
	}
	free (c_start);
	return (len_number);
}
