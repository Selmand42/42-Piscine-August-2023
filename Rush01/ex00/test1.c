/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buakgun <buakgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 04:02:11 by buakgun           #+#    #+#             */
/*   Updated: 2023/09/10 23:01:43 by buakgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rows(int board[4][4])
{
	int	row;
	int	i;
	int	j;

	row = 0;
	while (row < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < i)
			{
				if (board[row][i] == board[row][j])
					return (0);
				j++;
			}
			i++;
		}
		row++;
	}
	return (1);
}

int	cols(int board[4][4])
{
	int	col;
	int	i;
	int	j;

	col = 0;
	while (col < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < i)
			{
				if (board[i][col] == board[j][col])
					return (0);
				j++;
			}
			i++;
		}
		col++;
	}
	return (1);
}
