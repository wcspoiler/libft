/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:12:41 by releanor          #+#    #+#             */
/*   Updated: 2019/09/19 10:42:07 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_chk(const char *haystack, const char *needle, int i, int j)
{
	int chk;

	chk = 0;
	while (needle[j] && haystack[i + j])
	{
		if ((haystack[i + j] == needle[j]))
			chk = 1;
		else
			chk = 0;
		j++;
	}
	if (ft_strlen(needle) > (size_t)j)
		chk = 0;
	return (chk);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int chk;

	i = 0;
	j = 0;
	chk = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			chk = ft_str_chk(haystack, needle, i, j);
		if (chk == 1)
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
