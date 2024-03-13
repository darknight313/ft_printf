/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:49:32 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:20:10 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	space_check(int s, int n, t_struct *obj)
{
	int	s_n;

	s_n = 0;
	if (obj->space)
		ft_putchar_fd(' ', 1);
	if (s == 15 || s == 11 || s == 1)
		s_n = (obj->width - n) - obj->space - obj->plus - obj->hash;
	else if (s == 31 || s == 27)
		s_n = (obj->width - obj->per) - obj->plus - obj->space - obj->hash;
	return (s_n + obj->space);
}

int	plus_check(int n, t_struct *obj)
{
	int	p_n;

	p_n = 0;
	if (obj->plus)
	{
		if (n >= 0)
			p_n += ft_putchar_fd('+', 1);
		else
			p_n += ft_putchar_fd('-', 1);
	}
	return (p_n);
}

int	zero_check(int s, int n, t_struct *obj)
{
	int	z_n;

	z_n = 0;
	if (s == 5)
		z_n = (obj->width - n) - obj->space - obj->plus - obj->hash;
	else if (obj->per)
		z_n = obj->per - n;
	return (z_n);
}

int	hash_check(t_struct *obj)
{
	int	h_n;

	h_n = 0;
	if (obj->hash)
	{
		if (obj->type == 'x')
			h_n += ft_putstr_fd("0x", 1);
		else
			h_n += ft_putstr_fd("0X", 1);
	}
	return (h_n);
}
