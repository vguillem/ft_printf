/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 08:13:59 by vguillem          #+#    #+#             */
/*   Updated: 2017/12/03 08:14:10 by vguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(intmax_t nb, int base)
{
	int		i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / base;
	}
	if (i == 0)
		return (1);
	return (i);
}
