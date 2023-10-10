/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buakgun <buakgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 04:01:55 by buakgun           #+#    #+#             */
/*   Updated: 2023/09/10 23:01:03 by buakgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	printarray(int array[4][4]);
int		test(int variables[4][4], int board[4][4]);
void	arrayforonefill(int array[6][4]);
void	arrayfortwofill0(int array[11][4]);
void	arrayfortwofill1(int array[11][4]);
void	arrayforthreefill(int array[6][4]);
void	arrayforfourfill(int array[1][4]);

void	indexfill(int array[4])
{
	array[0] = 6;
	array[1] = 11;
	array[2] = 6;
	array[3] = 1;
}

int	(*getarray(int i))[4]
{
	int	(*selectedarray)[4];
	int	arrayforone[6][4];
	int	arrayfortwo[11][4];
	int	arrayforthree[6][4];
	int	arrayforfour[1][4];

	arrayforonefill(arrayforone);
	arrayfortwofill0(arrayfortwo);
	arrayfortwofill1(arrayfortwo);
	arrayforthreefill(arrayforthree);
	arrayforfourfill(arrayforfour);
	if (i == 0)
		selectedarray = arrayforone;
	if (i == 1)
		selectedarray = arrayfortwo;
	if (i == 2)
		selectedarray = arrayforthree;
	if (i == 3)
		selectedarray = arrayforfour;
	return (selectedarray);
}

void	backtrack(int *lind, int index, int board[4][4], int variables[4][4])
{
	int	array[4];
	int	(*arraynum)[4];
	int	i;
	int	j;

	indexfill(array);
	if (index == 4)
	{
		if (test(variables, board) == 1)
			printarray(board);
		return ;
	}
	i = 0;
	while (i < array[lind[index] - 1])
	{
		j = 0;
		arraynum = getarray(lind[index] - 1);
		while (j < 4)
		{
			board[index][j] = arraynum[i][j];
			j++;
		}
		backtrack(lind, index + 1, board, variables);
		i++;
	}
}
