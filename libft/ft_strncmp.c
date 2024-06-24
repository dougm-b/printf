/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:32:42 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/18 15:11:16 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;
	unsigned int	i;
	unsigned int	f;

	source1 = (unsigned char *) s1;
	source2 = (unsigned char *) s2;
	i = 0;
	f = 0;
	while (n != '\0' && (s1[i] != '\0' || s2[f] != '\0'))
	{
		if (source1[i] != source2[f])
		{
			return (source1[i] - source2[f]);
		}
		i++;
		f++;
		n--;
	}
	return (0);
}
