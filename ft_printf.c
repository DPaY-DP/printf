/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:34:06 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 19:25:58 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *fmt, ...)
{
	va_list			argptr;
	int				j;

	j = 0;
	va_start(argptr, fmt);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
		{
			if (write(1, fmt, 1) == -1)
				return (-1);
			j++;
		}
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'd' || *fmt == 'i')
			{
				if ((j += ft_var_di(argptr)) == -1)
					return (-1);
			}
			else if (*fmt == 's')
			{
				if ((j += ft_var_s(argptr)) == -1)
					return (-1);
			}
			else if (*fmt == 'c')
			{
				if ((j += ft_var_c(argptr)) == -1)
					return (-1);
			}
			else if (*fmt == '%')
			{
				if (write(1, fmt, 1) == -1)
					return (-1);
				j++;
			}
			else if (*fmt == 'x')
			{
				if ((j += ft_var_xu(argptr, 'x')) == -1)
					return (-1);
			}
			else if (*fmt == 'X')
			{
				if ((j += ft_var_xu(argptr, 'X')) == -1)
					return (-1);
			}
			else if (*fmt == 'u')
			{
				if ((j += ft_var_xu(argptr, 'u')) == -1)
					return (-1);
			}
			if (*fmt == 'p')
			{
				if ((j += ft_var_p(argptr)) == -1)
					return (-1);
			}
		}
		fmt++;
	}
	va_end(argptr);
	return (j);
}

// int    main(void)
// {
// 	int i = -32;
// 	void *a = &i;
// 	char c = 'A';
// 	char *str = "32asdad333144 ss";
// 	int j;
// 	int k;
// 	ft_printf("Mine: \n");
// 	j = ft_printf("Int: %i %i\n", i, i);
// 	ft_printf("Lenght: %d\n", j);
// 	j = ft_printf("String: %s\n", str);
// 	ft_printf("Lenght: %d\n", j);
// 	j = ft_printf("Char C: %c %c %c\n", c, '\0',  '0');
// 	ft_printf("Lenght: %d\n", j);
// 	j = ft_printf("hex: %x\n", 0);
// 	ft_printf("Lenght: %d\n", j);
// 	j = ft_printf("hexBig: %X\n", 300);
// 	ft_printf("Lenght: %d\n", j);
// 	j = ft_printf("U: %u\n", i);
// 	ft_printf("Lenght: %d\n", j);
// 	j = ft_printf("P: %p\n", (void *)str);
// 	ft_printf("Lenght: %d\n", j);

// 	ft_printf("\nPrintf: \n");
// 	k = printf("Int: %i\n", i);
// 	printf("Length: %d\n", k);
// 	k = printf("String: %s\n", str);
// 	printf("Lenght: %d\n", k);
// 	k = printf("Char C: %c %c %c\n", c, '\0',  '0');
// 	printf("Lenght: %d\n", k);
// 	k = printf("hex: %x\n", 0);
// 	printf("Lenght: %d\n", k);
// 	k = printf("hexBig: %X\n", 300);
// 	printf("Lenght: %d\n", k);
// 	k = printf("U: %u\n", i);
// 	printf("Lenght: %d\n", k);
// 	k = printf("P: %p\n", (void *)str);
// 	printf("Lenght: %d\n", k);
// }