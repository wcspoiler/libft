/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:37:10 by releanor          #+#    #+#             */
/*   Updated: 2019/09/19 01:31:58 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		l;
	char	*s1;

	i = 0;
	l = 0;
	if (NULL == s)
		return (NULL);
	l = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (l + 1));
	if (NULL == s1)
		return (NULL);
	while (i < l)
	{
		s1[i] = f((unsigned)i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
