/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:19:04 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:14:45 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

int	execute_u(unsigned int n, t_struct *obj)
{
	int	i;
	int	count;
	int	s;

	i = 0;
	count = 0;
	s = sum_formula(obj);
	count += ft_print(space_check(s, get_digits(n), obj), ' ');
	count += ft_print(zero_check(s, get_digits(n), obj), '0');
	count += ft_unsigned_nbr(n);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
