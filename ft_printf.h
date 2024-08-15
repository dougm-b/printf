/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:34:50 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/10 17:34:54 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int 	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);	
int	ft_printnbr(int n);
int	ft_printunsigned(unsigned long long n);
int	ft_printhex(unsigned int n, const char format);
int	ft_printpercent(void);

int	ft_format(va_list args, const char format);
int	ft_strnull(char *str);
int	ft_lptr(unsigned int ptr);
void	ft_wptr(unsigned int ptr);
int	ft_lenui(unsigned int n);
char	*ft_uitoa(unsigned int n);
int	ft_lhex(unsigned int n);
void	ft_whex(unsigned int n, const char format);

#endif
