/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:34:50 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/10 17:34:54 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);	
int	ft_printnbr(int n);
int	ft_printunsigned(unsigned long long n);
int	ft_printhex(unsigned int n, const char format);
int	ft_printpercent(void);
		
#endif
