/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhademi <muhademi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:19:22 by muhademi          #+#    #+#             */
/*   Updated: 2023/09/17 17:43:17 by muhademi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) \
        ({ \
            int result;\
            if (Value < 0)\
                result = -Value;\
            else    \
                result = Value;\
            result;\
            })

#endif