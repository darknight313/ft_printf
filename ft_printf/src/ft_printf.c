/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:53:57 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:31:06 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_struct	obj;
	int			count;

	va_list(args);
	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			create_obj(&format, &obj);
			count += ft_execute(args, &obj);
		}
		else
			count += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
