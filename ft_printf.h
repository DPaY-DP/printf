/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:39:30 by dpfannen          #+#    #+#             */
/*   Updated: 2025/11/26 18:52:28 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa_base(unsigned long long n, const char *base_str, int base);
int		ft_put_char_fd(char c, int fd);
int		ft_var_di(va_list argptr);
int		ft_printf(const char *fmt, ...);
int		ft_var_s(va_list argptr);
int		ft_var_c(va_list argptr);
int		ft_var_xu(va_list argptr, char type);
int		ft_var_p(va_list argptr);

#endif