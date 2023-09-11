/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:45:49 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/08/03 14:48:41 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_print_char(int c);
int		ft_print_string(char *s);
int		ft_print_pointer(unsigned long c);
int		ft_print_decimal(int c);
int		ft_print_unsigned_decimal(unsigned int c);
int		ft_print_hexadecimal(unsigned int c, char casing);
int		ft_print_percentage(void);
char	*ft_itoa_long(unsigned int n);
int		ft_printf(const char *str, ...);

#endif
