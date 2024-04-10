/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:03:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/04/06 11:08:03 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	space_check_char(int s, int n, t_obj *obj);
static int	zero_check_char(int s, int n, t_obj *obj);

int	execute_char(char c, t_obj *obj)
{
	int	i;
	int	count;
	int	s;

	i = 0;
	count = 0;
	s = sum_formula(obj);
	if (!s)
		return (ft_putchar_fd(c, 1));
	count += ft_print(space_check_char(s, 1, obj), ' ');
	count += ft_print(zero_check_char(s, 1, obj), '0');
	count += ft_putchar_fd(c, 1);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}

static int	space_check_char(int s, int n, t_obj *obj)
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

static	int zero_check_char(int s, int n, t_obj *obj)
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
