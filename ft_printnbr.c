/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:36:24 by domoreir          #+#    #+#             */
/*   Updated: 2024/08/10 17:36:26 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_printnbr(int n)
{
	int	c;
	char	*str;

	c = 0;
	str = ft_itoa(n);
	c = ft_printstr(str);
	free(str);
	return (c);
}
