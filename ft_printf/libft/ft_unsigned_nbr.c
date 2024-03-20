/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:14:14 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:32:01 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_unsigned_nbr(unsigned int n)
{
	char	str[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar_fd('0', 1));
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		count += ft_putchar_fd(str[--i], 1);
	return (count);
}
