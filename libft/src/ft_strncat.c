/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:31:31 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:24:27 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	unsigned int i;
	unsigned int y;

	i = 0;
	y = 0;
	while (s1[i])
		i++;
	while (s2[y] && y < n)
	{
		s1[i + y] = s2[y];
		y++;
	}
	s1[i + y] = '\0';
	return (s1);
}
