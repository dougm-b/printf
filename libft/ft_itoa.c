/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:23:32 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 19:47:56 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_leni(int n)
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

char	*ft_itoa(int n)
{
	long int	nmb;
	char		*str;
	size_t		len;

	nmb = n;
	len = ft_leni(n);
	if (nmb < 0)
	{
		nmb = nmb * -1;
		len++;
	}
	str = malloc((len * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	str[len] = 0;
	if (nmb == 0)
		str[0] = '0';
	while (nmb)
	{
		str[--len] = '0' + (nmb % 10);
		nmb = nmb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
