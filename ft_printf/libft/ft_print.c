/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:21:02 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:31:40 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print(int n, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < n)
	{
		count += ft_putchar_fd(c, 1);
		i++;
	}
	return (count);
}
