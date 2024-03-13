/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:33:09 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 10:27:57 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	execute_s(char *str, t_struct *obj)
{
	int	count;
	int	s;

	(void)str;
	count = 0;
	s = sum_formula(obj);
	if (s == 0)
	{
		count += ft_putstr_fd(str, 1);
		return (count);
	}
	if (obj->per >= ft_strlen(str))
		obj->per = ft_strlen(str);
	count += ft_print(space_check(s, 0, obj), ' ');
	int size = obj->per;
	while (size > 0)
	{
		count += ft_putchar_fd(*str, 1);
		str++;
		size--;
	}
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
