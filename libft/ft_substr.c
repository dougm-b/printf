/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:30:53 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/29 19:15:04 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cont;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (s == NULL)
		return (0);
	if (start > slen)
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	cont = malloc(sizeof(char) * (len + 1));
	if (cont == NULL)
		return (0);
	ft_strlcpy(cont, s + start, len + 1);
	return (cont);
}
