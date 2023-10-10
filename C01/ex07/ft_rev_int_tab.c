/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <apthz7@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:48:24 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/01 13:16:33 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	len;
	int	temp;

	len = 0;
	size -= 1;
	while (size > len)
	{
		temp = tab[len];
		tab[len] = tab[size];
		tab[size] = temp;
		len += 1;
		size -= 1;
	}
}
