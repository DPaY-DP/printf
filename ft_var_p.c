/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:47:21 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 19:23:00 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned long numb)
{
	int		j;
	char	*c;
	char	*c_start;

	j = 0;
	c = ft_itoa_base(numb, "0123456789abcdef", 16);
	c_start = c;
	j += ft_strlen(c);
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

int	ft_var_p(va_list argptr)
{
	void			*pnt;
	unsigned long	numb;
	int				j;

	j = 0;
	pnt = va_arg(argptr, void *);
	numb = (unsigned long)pnt;
	if (numb == 0)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		j += 5;
	}
	else
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		j += 2;
		j += ft_count(numb);
	}
	return (j);
}
