/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:03:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 10:12:57 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

int	execute_char(char c, t_struct *obj)
{
	int	i;
	int	count;
	int	s;

	i = 0;
	count = 0;
	s = sum_formula(obj);
	count += ft_print(space_check(s, 1, obj), ' ');
	count += ft_print(zero_check(s, 1, obj), '0');
	count += ft_putchar_fd(c, 1);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
