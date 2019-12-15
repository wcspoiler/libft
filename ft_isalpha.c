/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 04:03:50 by releanor          #+#    #+#             */
/*   Updated: 2019/09/12 04:15:38 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	int i;

	i = 0;
	while (i < 26)
	{
		if (c == (65 + i))
			return (1);
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (c == (97 + i))
			return (1);
		i++;
	}
	return (0);
}
