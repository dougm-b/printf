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

#include "ft_printf.h"

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
				ft_parse(args, void)
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
