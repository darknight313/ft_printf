/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:28:27 by ashirzad          #+#    #+#             */
/*   Updated: 2024/04/06 12:31:22 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n == 0)
		return (write(fd, "0", 1));
	if (n < 0)
	{
		count += write(fd, "-", 1);
		n = -n;
	}
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		count += write(fd, &str[--i], 1);
	return (count);
}
