/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:45:16 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/18 19:08:54 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_part2(char *str, unsigned int start, unsigned int end)
{
	char	*trimmed;

	trimmed = (char *)malloc(end - start + 2);
	if (trimmed == NULL)
		return (NULL);
	ft_memcpy(trimmed, &str[start], end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	if (ft_strlen(set) == 0)
		return (ft_strdup(str));
	while (str[start] != '\0' && ft_strchr(set, str[start]))
		start++;
	while (end > start && ft_strchr(set, str[end]))
		end--;
	return (ft_strtrim_part2(str, start, end));
}
