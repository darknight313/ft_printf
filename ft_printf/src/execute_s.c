/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:33:09 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:30:50 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	space_check_s(int s, int n, t_struct *obj)
{
	int	s_n;

	s_n = 0;
	if (s == 1)
		s_n = (obj->width - n);
	else if (s == 27 || s == 11)
	{
		if (n == 0)
			s_n = (obj->width);
		else
			s_n = (obj->width - obj->per);
	}
	return (s_n);
}

int	execute_s(char *str, t_struct *obj)
{
	int	count;
	int	s;

	count = 0;
	s = sum_formula(obj);

	if (!s)
		return (ft_putstr_fd(str, 1));
	if (str == NULL)
	{
		str = "(null)";
		if (s == 11)
			count += ft_print(space_check_s(s, 0, obj), ' ');
		else
			count += ft_print(space_check_s(s, ft_strlen(str), obj), ' ');
	}
	else
		count += ft_print(space_check_s(s, ft_strlen(str), obj), ' ');
	if (obj->dot)
	{
		int size = obj->per;
		while (size > 0 && *str)
		{
			count += ft_putchar_fd(*str, 1);
			str++;
			size--;
		}
	}
	else
		count += ft_putstr_fd(str, 1);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
