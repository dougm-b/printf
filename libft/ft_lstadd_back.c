/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:04:59 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 16:16:38 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	back = *lst;
	if (lst == NULL)
		return ;
	if (back == NULL)
	{
		*lst = new;
		return ;
	}
	while (back -> next)
		back = back -> next;
	back->next = new;
}
