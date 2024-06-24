/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:40:53 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/22 22:25:50 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little[i] == 0)
		return ((char *)&big[i]);
	if (len == 0)
		return (NULL);
	while (big[i] && len >= little_len)
	{
		if (ft_memcmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
		len--;
	}
	return (0);
}
