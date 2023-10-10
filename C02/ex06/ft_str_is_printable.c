/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:11:15 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/03 11:12:13 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			sign = 0;
			break ;
		}
		i++;
	}
	return (sign);
}
