/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:34:55 by aleveque          #+#    #+#             */
/*   Updated: 2017/02/07 20:09:03 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_freetab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL && tab[i][0] != 0)
		free(tab[i++]);
	free(tab);
}
