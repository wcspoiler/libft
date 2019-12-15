/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:35 by releanor          #+#    #+#             */
/*   Updated: 2019/09/10 16:39:22 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char *p2;

	i = 0;
	p1 = (unsigned char*)d;
	p2 = (const unsigned char*)s;
	while (i < n)
	{
		if (p2[i] == (unsigned char)c)
		{
			p1[i] = p2[i];
			return ((void *)&p1[i + 1]);
		}
		p1[i] = p2[i];
		i++;
	}
	return (NULL);
}
