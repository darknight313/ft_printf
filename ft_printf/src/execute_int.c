/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:35:54 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:30:43 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	space_check_int(int s, int n, t_struct *obj)
{
	int	s_n;

	s_n = 0;
	if (s == 15 || s == 11 || s == 1)
	{
		if (n >= 0)
			s_n = (obj->width - get_digits(n)) - obj->space - obj->plus;
		else
			s_n = (obj->width - get_digits(n)) - obj->space;
	}
	else if (s == 31 || s == 27)
	{
		if (n >= 0)
			s_n = (obj->width - obj->per) - obj->plus - obj->space;
		else
			s_n = (obj->width - (obj->per + 1)) - obj->space;
	}

	return (s_n);
}

static	int zero_check_int(int s, int n, t_struct *obj)
{
	int	z_n;

	z_n = 0;
	if (s == 5)
	{
		if (n >= 0)
			z_n = (obj->width - get_digits(n)) - obj->space - obj->plus;
		else
			z_n = (obj->width - get_digits(n)) - obj->space;
	}
	else if (obj->per)
	{
		if (n >= 0)
			z_n = obj->per - get_digits(n);
		else
			z_n = obj->per - (get_digits(n) - 1);
	}

	return (z_n);
}

static int	plus_check_int(int n, t_struct *obj)
{
	int	p_n;

	p_n = 0;
	if (obj->plus)
	{
		if (n >= 0)
			p_n += ft_putchar_fd('+', 1);
	}
	if (n < 0)
		p_n += ft_putchar_fd('-', 1);
	return (p_n);
}

int	execute_int(int n, t_struct *obj)
{
	int	i;
	int	count;
	int	s;

	i = 0;
	count = 0;
	s = sum_formula(obj);
	if (obj->space && n >= 0)
		count += ft_putchar_fd(' ', 1);
	count += ft_print(space_check_int(s, n, obj), ' ');
	count += plus_check_int(n, obj);
	count += ft_print(zero_check_int(s, n, obj), '0');
	if (n < 0)
		n *= -1;
	count += ft_unsigned_nbr(n);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}




