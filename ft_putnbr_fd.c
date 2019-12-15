/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 06:44:48 by releanor          #+#    #+#             */
/*   Updated: 2019/09/12 06:46:51 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(214748364, fd);
			ft_putchar_fd('8', fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd((n * -1), fd);
		}
	}
	if (n >= 0 && n < 10)
		ft_putchar_fd((n + '0'), fd);
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}
