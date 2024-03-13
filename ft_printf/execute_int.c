/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:35:54 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:14:58 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

int	execute_int(int n, t_struct *obj)
{
	int	i;
	int	count;
	int	s;

	i = 0;
	count = 0;
	s = sum_formula(obj);
	count += ft_print(space_check(s, get_digits(n), obj), ' ');
	count += plus_check(n, obj);
	count += ft_print(zero_check(s, get_digits(n), obj), '0');
	count += ft_putnbr(n);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
