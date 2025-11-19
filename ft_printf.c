/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:34:06 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/19 18:20:31 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

// void	print_dezimal(char *i)
// {
// 	while (i != '\0')
// 	{
// 		write(1, &i, 1);
// 		i++;
// 	}
// }
int	ft_printf(const char *fmt, ...)
{
	va_list	argptr;
	int		i;
	char	*c;
	char	singleC;
	char	*str;
	int		j;
	int		len_number;

	j = 0;
	va_start(argptr, fmt);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
			write(1, fmt, 1);
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'd' || *fmt == 'i')
			{
				i = va_arg(argptr, int);
				len_number = i;
				if (len_number < 0)
					j++;
				while (len_number != 0)
				{
					len_number = len_number / 10;
					j++;
				}
				c = ft_itoa(i);
				while (*c != '\0')
					write(1, c++, 1);
				// print_dezimal(c);
			}
			if (*fmt == 's')
			{
				str = va_arg(argptr, char *);
				j += ft_strlen(str);
				while (*str != '\0')
					write(1, str++, 1);
			}
			if (*fmt == 'c')
			{
				singleC = (char)va_arg(argptr, int);
				if(write(1, &singleC, 1) == -1)
					return (-1);
			}
			if (*fmt == '%')
			{
				if(write(1, fmt, 1) == -1)
					return (-1);
			}
			if (*fmt == 'x')
			{
				char *hex_low = "0123456789abcdef";
				unsigned int hex = va_arg(argptr, unsigned int);
				if (hex == 0)
				{
					if (write(1, "0", 1) == -1)
						return(-1);
				}
				c = ft_itoa(hex);
				while (*c != '\0')
				{
					write(1, &hex_low[*c % 16], 1);
					j++;
				}
				
			}
			if (*fmt == 'X')
			{
				char *hex_top = "0123456789ABCDEF";
				unsigned int hex = va_arg(argptr, unsigned int);
				if (hex == 0)
				{
					if (write(1, "0", 1) == -1)
						return(-1);
				}
				c = ft_itoa(hex);
				while (*c != '\0')
				{
					write(1, &hex_top[*c % 16], 1);
					j++;
				}
			}
		}
		fmt++;
		if (*fmt != '\0')
			j++;
	}
	va_end(argptr);
	return (j);
}

int	main(void)
{
	int i = 32;
	char c = 'A';
	char *str = "32asdad333144 ss";
	int j;
	int k;
	ft_printf("Mine: \n");
	j = ft_printf("Int: %i\n", i);
	ft_printf("Lenght: %d\n", j);

	j = ft_printf("String: %s\n", str);
	ft_printf("Lenght: %d\n", j);

	j = ft_printf("Char C: %c\n", c);
	ft_printf("Lenght: %d\n", j);

	j = printf("hex: %x\n", i);
	printf("Lenght: %d\n", j);

	j = printf("hexBig: %X\n", i);
	printf("Lenght: %d\n", j);
	
	ft_printf("\nPrintf: \n");
	k = printf("Int: %i\n", i);
	printf("Length: %d\n", k);
	k = printf("String: %s\n", str);
	printf("Lenght: %d\n", k);
	k = printf("Char C: %c\n", c);
	printf("Lenght: %d\n", j);
	k = printf("hex: %x\n", i);
	printf("Lenght: %d\n", k);
	k = printf("hexBig: %X\n", i);
	printf("Lenght: %d\n", k);
}