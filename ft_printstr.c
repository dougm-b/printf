/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:36:59 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/10 17:37:00 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_strnull(char *str)
{
	int	c;
	
	c = 0;
	while(str[c])
	{
		write (1, &str[c], 1);
		c++; 
	}
	return (c);
}

int	ft_printstr(char *str)
{
	int	c;
	
	c = 0;
	if (str == NULL)
	{
		ft_strnull("(null)");
		return(6);
	}
	while(str[c])
	{
		write (1, &str[c], 1);
		c++; 
	}
	return (c);
}

