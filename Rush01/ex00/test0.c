/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buakgun <buakgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 04:02:05 by buakgun           #+#    #+#             */
/*   Updated: 2023/09/10 23:01:29 by buakgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rows(int board[4][4]);
int	cols(int board[4][4]);

int	uptodown(int *variables, int board[4][4])
{
	int	i;
	int	j;
	int	counter;
	int	max;

	i = 0;
	while (i < 4)
	{
		max = 0;
		counter = 0;
		j = 0;
		while (j < 4)
		{
			if (board[j][i] > max)
			{
				counter += 1;
				max = board[j][i];
			}
			j++;
		}
		if (variables[i] != counter)
			return (0);
		i++;
	}
	return (1);
}

int	downtoup(int *variables, int board[4][4])
{
	int	i;
	int	j;
	int	counter;
	int	max;

	i = 3;
	while (i >= 0)
	{
		max = 0;
		counter = 0;
		j = 3;
		while (j >= 0)
		{
			if (board[j][i] > max)
			{
				counter += 1;
				max = board[j][i];
			}
			j--;
		}
		if (variables[i] != counter)
			return (0);
		i--;
	}
	return (1);
}

int	lefttoright(int *variables, int board[4][4])
{
	int	i;
	int	j;
	int	counter;
	int	max;

	i = 0;
	while (i < 4)
	{
		max = 0;
		counter = 0;
		j = 0;
		while (j < 4)
		{
			if (board[i][j] > max)
			{
				counter += 1;
				max = board[i][j];
			}
			j++;
		}
		if (variables[i] != counter)
			return (0);
		i++;
	}
	return (1);
}

int	righttoleft(int *variables, int board[4][4])
{
	int	i;
	int	j;
	int	counter;
	int	max;

	i = 3;
	while (i >= 0)
	{
		max = 0;
		counter = 0;
		j = 3;
		while (j >= 0)
		{
			if (board[i][j] > max)
			{
				counter += 1;
				max = board[i][j];
			}
			j--;
		}
		if (variables[i] != counter)
			return (0);
		i--;
	}
	return (1);
}

int	test(int variables[4][4], int board[4][4])
{
	if (uptodown(variables[0], board) == 0)
		return (0);
	if (downtoup(variables[1], board) == 0)
		return (0);
	if (lefttoright(variables[2], board) == 0)
		return (0);
	if (righttoleft(variables[3], board) == 0)
		return (0);
	if (cols(board) == 0)
		return (0);
	if (rows(board) == 0)
		return (0);
	return (1);
}
