/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:47:27 by releanor          #+#    #+#             */
/*   Updated: 2019/09/11 20:39:11 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_overlap(void *dst, const void *src, size_t len, size_t i)
{
	unsigned char		p_buff[len];
	unsigned char		*p1;
	const unsigned char *p2;

	p1 = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	while (i < len)
	{
		p_buff[i] = p2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		p1[i] = p_buff[i];
		i++;
	}
	return (NULL);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char *p2;

	i = 0;
	p1 = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	if (NULL != p1 || NULL != p2)
	{
		if (p2 < p1)
		{
			ft_overlap(p1, p2, len, i);
		}
		else
			while (i < len)
			{
				p1[i] = p2[i];
				i++;
			}
		return (dst);
	}
	else
		return (NULL);
}
