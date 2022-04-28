/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:32:35 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/28 13:21:59 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_putnbr(int n);
int		ft_putstr(const char *s);
int		ft_putchar(int c);
int		ft_putptr(unsigned long p);
size_t	ft_strlen(const char *s);
int		ft_nlen(int n);
int		ft_putnbrpos(unsigned int n);
int		ft_hexalow(unsigned int p);
int		ft_hexaup(unsigned int p);
int		ft_hexalen(unsigned long p);
int		ft_printf(const char *format, ...);
int		check_format(char format, va_list args);
int		ft_hexaptr(unsigned long p);

#endif
