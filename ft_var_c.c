/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:24:42 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 19:23:57 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_var_c(va_list argptr)
{
	char	singlec;

	singlec = (char)va_arg(argptr, int);
	if (write(1, &singlec, 1) == -1)
		return (-1);
	return (1);
}
