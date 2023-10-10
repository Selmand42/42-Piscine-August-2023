/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:56:29 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/13 17:26:44 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*p;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	p = malloc(len * 4);
	if (p == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (len);
}
