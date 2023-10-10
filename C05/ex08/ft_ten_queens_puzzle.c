/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:34:24 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/13 14:19:50 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	test0(int board[10][10], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i][col] == 1)
			return (0);
		i++;
	}
	return (1);
}

int	test1(int board[10][10], int row, int col)
{
	int	i;
	int	j;

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (i >= 0 && j < 10)
	{
		if (board[i][j] == 1)
			return (0);
		i--;
		j++;
	}
	return (1);
}

void	arraywrite(int board[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i][j] == 1)
			{
				c = j + 48;
				write(1, &c, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	i++;
}

int	backtrack(int board[10][10], int row)
{
	int	col;
	int	count;

	if (row == 10)
	{
		arraywrite(board);
		return (1);
	}
	count = 0;
	col = 0;
	while (col < 10)
	{
		if (test0(board, row, col) && test1(board, row, col))
		{
			board[row][col] = 1;
			count += backtrack(board, row + 1);
			board[row][col] = 0;
		}
		col++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (backtrack(board, 0));
}
