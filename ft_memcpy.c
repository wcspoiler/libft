/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:54:46 by releanor          #+#    #+#             */
/*   Updated: 2019/09/19 05:42:16 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char *p2;

	i = 0;
	p1 = (unsigned char *)dst;
	p2 = (const unsigned char *)src;
	if (NULL != p1 || NULL != p2)
	{
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
