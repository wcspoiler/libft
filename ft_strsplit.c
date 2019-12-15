/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:32:12 by releanor          #+#    #+#             */
/*   Updated: 2019/09/20 23:39:03 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wrd_cnt(char const *s, char c)
{
	int i;
	int j;
	int wrd;

	i = 0;
	j = 0;
	wrd = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			wrd++;
		i++;
	}
	return (wrd);
}

static int		chr_cnt(char const *s, int i, char c)
{
	int j;

	j = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

static char		*qk_create(char **q, int len, int k, int i)
{
	q[k] = (char *)malloc(sizeof(char) * len + 1);
	if (NULL == q[k])
	{
		i = 0;
		while (i < k)
		{
			free(&q[i]);
			i++;
		}
		free(q);
	}
	return (NULL);
}

static void		q_create(const char *s, char **q, int c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			qk_create(q, chr_cnt(s, i, c), k, i);
			while (j < chr_cnt(s, i, c))
			{
				q[k][j] = s[i + j];
				j++;
			}
			q[k][j] = '\0';
			i = i + chr_cnt(s, i, c) - 1;
			j = 0;
			k++;
		}
		i++;
	}
	q[k] = (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**q;

	if (NULL == s)
		return (NULL);
	q = (char **)malloc(sizeof(char *) * (wrd_cnt(s, c) + 1));
	if (NULL == q)
		return (NULL);
	q_create(s, q, c);
	return (q);
}
