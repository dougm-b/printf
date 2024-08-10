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

int	ft_printhex(unsigned int n)
{
	int	c;
	char	*num;

	c = 0;	
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		c =+ ft_printstr(num);
		free (num);
	}	
	return (c);
}

