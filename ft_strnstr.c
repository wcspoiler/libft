/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 00:12:23 by releanor          #+#    #+#             */
/*   Updated: 2019/09/19 07:46:44 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_chk(const char *hay, const char *nee, size_t i, size_t l)
{
	size_t	j;
	int		chk;

	j = 0;
	chk = 0;
	while ((hay[i + j] == nee[j]) && hay[i + j] && (i + j) < l)
	{
		if (nee[j + 1] == '\0')
			chk = 1;
		else
			chk = 0;
		j++;
	}
	return (chk);
}

char		*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	int		chk;

	i = 0;
	j = 0;
	chk = 0;
	if (ft_strlen(nee) == 0)
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		if (hay[i] == nee[j])
			chk = ft_str_chk(hay, nee, i, len);
		if (chk == 1)
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
