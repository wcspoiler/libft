/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: releanor <releanor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 00:02:53 by releanor          #+#    #+#             */
/*   Updated: 2019/09/08 13:16:23 by releanor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *dst, const char *src)
{
	int i;

	i = 0;
	while (dst[i] == src[i] && dst[i] && src[i])
		i++;
	return ((unsigned char)dst[i] - (unsigned char)src[i]);
}
