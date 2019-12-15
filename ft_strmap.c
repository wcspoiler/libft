/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:29:14 by releanor          #+#    #+#             */
/*   Updated: 2019/09/19 01:31:51 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		l;
	char	*s1;

	i = 0;
	l = 0;
	if (NULL == s || NULL == f)
		return (NULL);
	l = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (l + 1));
	if (NULL == s1)
		return (NULL);
	while (i < l)
	{
		s1[i] = f(s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
