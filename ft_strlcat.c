/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:29:55 by releanor          #+#    #+#             */
/*   Updated: 2019/09/20 20:00:25 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i] && (i < size))
		i++;
	len = i;
	while (src[j] && (i < (size - 1)) && (size != 0))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (len < size)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
