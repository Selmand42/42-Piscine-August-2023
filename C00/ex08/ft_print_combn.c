/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:16:03 by muhademi          #+#    #+#             */
/*   Updated: 2023/08/31 21:56:20 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arrwrite(int *array, int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = array[i] + 48;
		write(1, &c, 1);
		i++;
	}
	if (array[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	backtrack(int i, int start, int *array, int n)
{
	int	a;

	if (i == n)
	{
		arrwrite(array, n);
		return ;
	}
	a = start;
	while (a < 10)
	{
		array[i] = a;
		backtrack(i + 1, a + 1, array, n);
		a += 1;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	if (n < 10 && n > 0)
	{
		backtrack(0, 0, array, n);
	}
}
