/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 06:13:07 by releanor          #+#    #+#             */
/*   Updated: 2019/09/12 06:21:46 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*m;

	m = (void *)malloc(sizeof(void) * size);
	if (NULL == m)
		return (NULL);
	ft_bzero(m, size);
	return (m);
}
