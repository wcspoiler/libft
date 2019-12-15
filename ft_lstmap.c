/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 06:47:35 by releanor          #+#    #+#             */
/*   Updated: 2019/09/20 21:51:06 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *start;

	if (NULL == lst || NULL == f)
		return (NULL);
	new = f(lst);
	if (NULL == new)
		return (NULL);
	start = new;
	lst = lst->next;
	while (lst)
	{
		new->next = f(lst);
		lst = lst->next;
		new = new->next;
	}
	return (start);
}
