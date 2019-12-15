/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 17:18:05 by releanor          #+#    #+#             */
/*   Updated: 2019/09/22 19:54:34 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	int							i;
	int							neg;
	unsigned long long int		out;

	i = 0;
	neg = 1;
	out = 0;
	while ((str[i] >= 9 && str[i] <= 13) | (str[i] == ' '))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		out = out * 10 + (str[i++] - '0');
	if ((out > 9223372036854775807) && (neg == 1))
		return (-1);
	else if ((out > 9223372036854775807) && (neg == -1))
		return (0);
	return ((int)out * neg);
}
