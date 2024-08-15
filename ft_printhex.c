/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:35:48 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/10 17:35:50 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_lhex(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len ++;
	}
	return (len);
}

void	ft_whex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_whex(n / 16, format);
		ft_whex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x' )
			{	n = (n - 10 + 'a');
				ft_putchar_fd(n, 1);
			}
			if (format == 'X')
			{
				n = n - 10 + 'A';
				ft_putchar_fd(n, 1);
			}
		}
	}
}

int	ft_printhex(unsigned int n, const char format)
{
	int	lenght;

	lenght = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_whex(n, format);
		lenght += ft_lhex(n);
	}
	return (lenght);
}
