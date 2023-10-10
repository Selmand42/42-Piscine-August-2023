/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buakgun <buakgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 04:01:59 by buakgun           #+#    #+#             */
/*   Updated: 2023/09/10 23:01:08 by buakgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		test(int variables[4][4], int board[4][4]);
void	backtrack(int *lind, int index, int board[4][4], int variables[4][4]);
void	printarray(int array[4][4]);
int		*strtoarray(char *str);

void	zerofill(int array[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	inputfill(int array[4][4], char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (str[k] < '1' || str[k] > '4')
				return (k);
			array[i][j] = str[k] - 48;
			k += 2;
			j++;
		}
		i++;
	}
	if (str[k - 1] != '\0')
		return (0);
	return (k);
}

int	main(int argc, char **argv)
{
	int	leftindex[4];
	int	array[4][4];
	int	inputs[4][4];
	int	j;

	if (argc != 2)
	{
		write(1, "Error!\n", 7);
		return (0);
	}
	if (inputfill(inputs, argv[1]) != 32)
	{
		write(1, "Error!\n", 7);
		return (0);
	}
	zerofill(array);
	j = 0;
	while (j < 4)
	{
		leftindex[j] = inputs[2][j];
		j++;
	}
	backtrack(leftindex, 0, array, inputs);
	return (0);
}
