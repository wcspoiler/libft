/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 05:08:04 by releanor          #+#    #+#             */
/*   Updated: 2019/09/13 14:59:01 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr(214748364);
			ft_putchar('8');
		}
		else
		{
			ft_putchar('-');
			ft_putnbr(n * -1);
		}
	}
	if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}
