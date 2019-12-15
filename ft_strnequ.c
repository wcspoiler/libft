/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 05:26:21 by releanor          #+#    #+#             */
/*   Updated: 2019/09/19 02:05:33 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (NULL == s1 || NULL == s2)
		return (0);
	if (n == 0)
		return (1);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (1);
	else if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
