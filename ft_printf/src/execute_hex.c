/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:28:22 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:30:39 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	space_check_hex(int s, int n, t_struct *obj)
{
	int	s_n;

	s_n = 0;
	if (s == 15 || s == 11 || s == 1)
		s_n = (obj->width - n) - obj->hash;
	else if (s == 31 || s == 27)
		s_n = (obj->width - obj->per) - obj->hash;
	return (s_n);
}

static int	zero_check_hex(int s, int n, t_struct *obj)
{
	int	z_n;

	z_n = 0;
	if (s == 5)
		z_n = (obj->width - n) - obj->hash;
	else if (obj->per)
		z_n = obj->per - n;
	return (z_n);
}

static int	hash_check_hex(int n, t_struct *obj)
{
	int	h_n;

	h_n = 0;
	if (n == 0)
		return (0);
	if (obj->hash)
	{
		if (obj->type == 'x')
			h_n += ft_putstr_fd("0x", 1);
		else
			h_n += ft_putstr_fd("0X", 1);
	}
	return (h_n);
}

static int	hex_numbers(unsigned int n)
{
	int	count = 1;
	while (n / 16)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	execute_hex(unsigned int n, t_struct *obj)
{
	int				hex_digits;
	int				count;
	int				s;

	count = 0;
	hex_digits = hex_numbers(n);
	s = sum_formula(obj);
	if (!s)
		return (ft_print_hex(n, obj->type));
	count += ft_print(space_check_hex(s, hex_digits, obj), ' ');
	count += hash_check_hex(n, obj);
	count += ft_print(zero_check_hex(s, hex_digits, obj), '0');
	count += ft_print_hex(n, obj->type);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}


