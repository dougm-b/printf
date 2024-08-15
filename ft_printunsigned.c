/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:37:08 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/16 00:28:59 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenui(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	{
		count = 1;
		return (count);
	}
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	char		*str;
	size_t		len;

	len = ft_lenui(n);
	str = malloc((len * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	str[len] = 0;
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[--len] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}

int	ft_printunsigned(unsigned long long n)
{
	int		length;
	char	*ui;

	length = 0;
	if (n == 0)
		length += write(1, "0", 1);
	else
	{
		ui = ft_uitoa(n);
		length += ft_printstr(ui);
		free(ui);
	}
	return (length);
}
