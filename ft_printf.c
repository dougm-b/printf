**/* ************************************************************************** */
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

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	print_lenght;
	
	print_lenght = 0;
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
		print_length += ft_printhex(va_arg(args, unsigned int));
	else if (format == '%')
		print_length += ft_printpercent(va_arg(args, unsigned int), format);
	return (print_length);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int	print_cont;
	
	print_cont = 0;
	const char *p = format;
	va_start(args, format);
	while (*p) 
	{
		if (*p == '%') 
		{
			p++;
			if (*p == '/0')
				return (-1);
			if (*p == 's' || *p == 'c' || *p == 'd' || *p == 'i' || *p == 'p' || *p == 'u' || *p == 'x' || *p == 'X' || *p == '%'
			{
				print_cont = ft_format(args, *p);	
			}
		}
		else 
			putchar(*p);
		p++;
	}
	va_end(args);
	return (print_cont);
}

// COMENTAR DAQUI PARA BAIXO	
int ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);

	const char *p = format;
	while (*p) 
	{
		if (*p == '%') 
		{
			p++; // Avança para o caractere após '%'
			if (*p == 's' || *p == 'c' || *p == 'd' || *p == 'i' || *p == 'p' || *p == 'u' || *p == 'x' || *p == 'X' || *p == '%'
			{
				ft_format(args, *p)
				//const char *str = va_arg(args, const char *);
				//ft_printf_str("%s", str);
			}			
		/*	if (*p == 's')
			{
				const char *str = va_arg(args, const char *);
				ft_printf_str("%s", str); // aqui ou acima irá a função correspondente para o que você quer realizar : MUDAR ESSA FUNCAO PARA DENTRO DE OUTRA FUNCAO QUE IR'A FAZER A VALIDACAO SE O FORMATO FOR S I D U  OU OUTRO DEVE CHAMAR A FUNCAO QUE DENTRO TERA AS VALIDACOES.
			}
			else if (*p == 'd')
			{
				int num = va_arg(args, int);
				printf("%d", num);
			} */
		}
		else 
			putchar(*p);
		p++; // Avança para o próximo caractere na string de formato
	}
	va_end(args);
}
/*
	va_list		args;
	int			count;
	char		*str;
	
	count = 0;
	if (!format || format == '\0')
		return (0);
	str = ft_strdup(format);
	if (!str || *str == '\0')
		return (0);
	va_start(args, format);
	count = ft_parse(str, args);
	va_end(args);
	free(str);
	return (count);
}*/

int main(void)
{
      ft_printf("Testing ft_printf!");
      return (0);
}
//funcoes permitidas: malloc, free, write, va_start, va_arg, va_copy, va_end
