/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:11:55 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 19:24:34 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_var_s(va_list argptr)
{
	int		j;
	char	*str;

	j = 0;
	str = va_arg(argptr, char *);
	if (str == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	else
	{
		j += ft_strlen(str);
		while (*str != '\0')
			if (write(1, str++, 1) == -1)
				return (-1);
	}
	return (j);
}
