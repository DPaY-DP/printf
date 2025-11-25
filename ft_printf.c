/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:34:06 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/25 13:49:40 by dpfannen         ###   ########.fr       */
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
	va_list			argptr;
	int				i;
	char			*c;
	char			singlec;
	char			*str;
	int				j;
	int				len_number;
	char			*hex_low;
	unsigned int	hex;
	char			*hex_top;
	char 			hex_array[8];
	char			mem_array[20];
	unsigned long	number_mem;
	unsigned int	u;
	void			*pnt;
	// int				test;
	int	k;

	
	j = 0;
	k = 0;
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
			}
			else if (*fmt == 's')
			{
				str = va_arg(argptr, char *);
				j += ft_strlen(str);
				while (*str != '\0')
					write(1, str++, 1);
			}
			else if (*fmt == 'c')
			{
				singlec = (char)va_arg(argptr, int);
				j++;
				if (write(1, &singlec, 1) == -1)
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
				hex_low = "0123456789abcdef";
				hex = va_arg(argptr, unsigned int);
				k = 0;
				while (hex >= 16)
				{
					hex_array[k] = hex_low[hex % 16];
					k++;
					j++;
					hex /= 16;
				}
				hex_array[k] = hex_low[hex % 16];
				while (k >= 0)
				{
					write(1, &hex_array[k], 1);
					k--;
				}
				j++;
			}
			else if (*fmt == 'X')
			{
				hex_top = "0123456789ABCDEF";
				hex = va_arg(argptr, unsigned int);
				k = 0;
				while (hex >= 16)
				{
					hex_array[k] = hex_top[hex % 16];
					k++;
					j++;
					hex /= 16;
				}
				hex_array[k] = hex_top[hex % 16];
				while (k >= 0)
				{
					write(1, &hex_array[k], 1);
					k--;
				}
				j++;
			}
			else if (*fmt == 'u')
			{
				u = va_arg(argptr, unsigned int);
				if (u == 0)
				{
					if (write(1, "", 1) == -1)
						return (-1);
				}
				c = ft_itoa(u);
				while (*c != '\0')
				{
					write(1, c++, 1);
					j++;
				}
			}
			if (*fmt == 'p')
			{
				pnt = va_arg(argptr, void *);
				write(1, "0x", 2);
				j += 2;
				number_mem = (unsigned long)pnt;
				while (number_mem > 16)
				{
					mem_array[k] = hex_low[number_mem % 16];
					k++;
					j++;
					number_mem /= 16;
				}
				mem_array[k] = hex_low[number_mem % 16];
				j++;
				while (k >= 0)
				{
					write(1, &mem_array[k], 1);
					k--;
				}
			}
		}
		fmt++;
	}
	va_end(argptr);
	return (j);
}

// int	main(void)
// {
// 	int i = 32;
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