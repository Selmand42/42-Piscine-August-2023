/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:40:40 by muhademi          #+#    #+#             */
/*   Updated: 2023/08/31 19:18:48 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printint(int n)
{
	char	zero;
	char	birler;
	char	onlar;

	if (n <= 9)
	{
		n += 48;
		zero = '0';
		write(1, &zero, 1);
		write(1, &n, 1);
	}
	else
	{
		birler = (n % 10) + 48;
		onlar = (n / 10) + 48;
		write(1, &onlar, 1);
		write(1, &birler, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			printint(i);
			write(1, " ", 1);
			printint(j);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
