/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:23:51 by releanor          #+#    #+#             */
/*   Updated: 2019/09/16 19:31:12 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	cnt(int n)
{
	unsigned int cnt;

	cnt = 0;
	if (n == 0)
		cnt = 1;
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static char			*reverse(char *s, int n, int neg)
{
	unsigned int	i;
	char			buf;

	i = 0;
	buf = 0;
	while (i < (cnt(n) + neg) / 2)
	{
		buf = s[i];
		s[i] = s[cnt(n) + neg - i - 1];
		s[cnt(n) + neg - i - 1] = buf;
		i++;
	}
	s[cnt(n) + neg] = '\0';
	return (s);
}

static char			*fill(char *s, int n)
{
	unsigned int	i;
	int				neg;
	long long int	out;

	i = 0;
	neg = 0;
	out = n;
	if (out < 0)
	{
		out *= -1;
		neg = 1;
	}
	while (i < cnt(n))
	{
		s[i] = (out % 10) + '0';
		out /= 10;
		i++;
	}
	if (neg == 1)
	{
		s[i] = '-';
		i++;
	}
	return (reverse(s, n, neg));
}

char				*ft_itoa(int n)
{
	char	*s;
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	s = (char *)malloc(sizeof(char) * cnt(n) + neg + 1);
	if (NULL == s)
		return (NULL);
	fill(s, n);
	return (fill(s, n));
}
