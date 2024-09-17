/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:36:47 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/10 17:36:50 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (1);
	while (ptr != 0)
	{
		ptr = ptr / 16;
		len ++;
	}
	return (len);
}

void	ft_wptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_wptr(ptr / 16);
		ft_wptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + '0'), 1);
		else
		{
			ft_putchar_fd((ptr - 10 + 'a'), 1);
		}
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int		length;
	int		i;
	char	*a;

	length = 0;
	if (ptr == 0)
	{
		a = "(nil)";
		i = 0;
		while (a[i])
		{
			ft_printchar(a[i]);
			i++;
		}
		return (5);
	}
	length += write(1, "0x", 2);
	ft_wptr(ptr);
	length += ft_lptr(ptr);
	return (length);
}
