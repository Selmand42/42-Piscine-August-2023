/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:18:24 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/03 11:29:03 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	after_ac;

	after_ac = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (after_ac == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (after_ac == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && \
						str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			after_ac = 1;
		else
			after_ac = 0;
		i++;
	}
	return (str);
}
