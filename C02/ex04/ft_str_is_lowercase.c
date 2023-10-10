/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:50:13 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/03 11:08:44 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			sign = 0;
			break ;
		}
		i++;
	}
	return (sign);
}
