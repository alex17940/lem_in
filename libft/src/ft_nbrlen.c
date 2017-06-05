/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:13:55 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/06 17:18:16 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_nbrlen(int nbr)
{
	int i;

	i = 1;
	while (nbr > 10)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
