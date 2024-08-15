/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:22:21 by domoreir          #+#    #+#             */
/*   Updated: 2024/06/24 18:22:25 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(va_list args, const char format)
{
	int	print_length;
	
	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_printunsigned(va_arg(args, unsigned long long));
	else if (format == 'x')
		print_length += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int	cont;
	
	cont = 0;
	const char *p = format;
	va_start(args, format);
	while (*p) 
	{
		if (*p == '%') 
		{
			p++;
			if (*p == '\0')//ver se for um nulo depois do %, ja valido abaixoque precisa ser uma das letras
				return (-1);
			if (*p == 's' || *p == 'c' || *p == 'd' || *p == 'i' || *p == 'p' || *p == 'u' || *p == 'x' || *p == 'X' || *p == '%')
			{
				cont += ft_format(args, *p);	
			}
		}
		else 
			cont += ft_printchar(*p);//a passar um ponteiro e funcoa 'e int
		p++;
	}
	va_end(args);
	return (cont);
}
/*
int main(void)
{
      ft_printf("Testing ft_printf!");
      return (0);
}*/
