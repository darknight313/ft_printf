/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:12:28 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:14:54 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

int	execute_p(void *pointer, t_struct *obj)
{
	unsigned long	n;
	int				hex_digits;
	int				count;

	n = (unsigned long ) pointer;
	hex_digits = (max_bits(n) / 4) + 1;
	count = 0;
	count += ft_put_address(pointer);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
