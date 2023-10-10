/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:08:11 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/03 11:10:20 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			sign = 0;
			break ;
		}
		i++;
	}
	return (sign);
}
