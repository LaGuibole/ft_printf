/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:14:32 by guphilip          #+#    #+#             */
/*   Updated: 2024/11/27 16:45:05 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include "libft.h"

# define L_HEX_CHARSET "0123456789abcdef"
# define U_HEX_CHARSET "0123456789ABCDEF"

int	ft_print_c(char c);

int	ft_printf(const char *str, ...);

int	ft_print_s(char *s);

int	ft_print_p(uintptr_t ptr);

int	check_base(char *base);

int	ft_print_d(int n);

int	ft_print_i(int n);

int	ft_print_u(unsigned int n);

int	ft_print_x(unsigned int n, int format);

#endif
