/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:56:40 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/13 17:22:29 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

int	lensum(char	**strs, int size)
{
	int	i;
	int	lensum;

	i = 0;
	lensum = 0;
	while (i < size)
	{
		lensum += ln(strs[i]);
		i++;
	}
	return (lensum);
}

char	*freee(char *p)
{
	p[0] = '\0';
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (size == 0)
	{
		p = (char *)malloc(1);
		return (freee(p));
	}
	p = malloc(((size * lensum(strs, size)) + ((size - 1) * ln(sep)) + 1) * 1);
	while (i < size)
	{
		ft_strcpy(&p[count], strs[i], ln(strs[i]));
		count += ln(strs[i]);
		if (i != size - 1)
			ft_strcpy(&p[count], sep, ln(sep));
		else
			p[count] = '\0';
		count += ln(sep);
		i++;
	}
	return (p);
}
