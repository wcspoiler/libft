/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:28:28 by releanor          #+#    #+#             */
/*   Updated: 2019/09/13 15:30:48 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*blank(void)
{
	char *q;

	q = (char *)malloc(sizeof(char));
	if (NULL == q)
		return (NULL);
	q[0] = '\0';
	return (q);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	int		m;
	int		l;
	char	*q;

	i = 0;
	k = 0;
	m = 0;
	if (NULL == s)
		return (NULL);
	l = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == l || l == 0)
		return (blank());
	while (s[l - m - 1] == ' ' || s[l - m - 1] == '\n' || s[l - m - 1] == '\t')
		m++;
	q = (char *)malloc(sizeof(char) * (l - i - m + 1));
	if (NULL == q)
		return (NULL);
	while (i < (l - m))
		q[k++] = s[i++];
	q[k] = '\0';
	return (q);
}
