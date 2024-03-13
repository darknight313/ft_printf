/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:28:22 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:15:02 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

int	execute_hex(unsigned int n, t_struct *obj)
{
	int				hex_digits;
	int				count;
	int				s;

	hex_digits = (max_bits(n) / 4) + 1;
	count = 0;
	s = sum_formula(obj);
	count += ft_print(space_check(s, hex_digits, obj), ' ');
	count += hash_check(obj);
	count += ft_print(zero_check(s, hex_digits, obj), '0');
	count += ft_print_hex(n, obj->type);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}


