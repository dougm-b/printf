/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:27:33 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:08:28 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*source1 = s1;
	const unsigned char	*source2 = s2;

	while (n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);
}
