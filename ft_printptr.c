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


#include "printf.h"
#include "libft.h"


int	ft_lptr(unsigned int ptr) //okappa
{
	int	len:
	
	len = 0;
	
	while (ptr != 0)
	{
		ptr = ptr / 16;
		len ++;
	}
	return(len);
}

void	ft_wptr(unsigned int ptr)
{
	if (ptr >= 16)
	{
		ft_whex(ptr / 16, format);
		ft_whex(ptr % 16, format);
	}
	else
	{
		if (ptr <= 9)	
			ft_putchar_fd((ptr + '0'), 1);
		else
		{
			if (format == 'x')
			{	ptr = ptr - 10 + 'a';
				ft_putchar_fd(ptr, 1);
			}
		}
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	lenght;
	
	lenght = 0;
	lenght += write(1, "0x", 2);
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_whex(ptr);
		lenght += ft_lhex(n);
	}	
	return (lenght);
}
