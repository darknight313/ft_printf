/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:53:57 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:13:06 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

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
