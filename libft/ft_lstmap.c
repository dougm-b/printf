/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:04:17 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 17:05:18 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*elmt;
	void	*temp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		temp = (*f)(lst->content);
		elmt = ft_lstnew(temp);
		if (elmt == NULL)
		{
			del(temp);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, elmt);
		lst = lst->next;
	}
	return (n_lst);
}
