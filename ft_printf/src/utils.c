/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:24:01 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:31:14 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	get_digits(int long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	sum_formula(t_struct *obj)
{
	int	count;

	count = 0;
	if (obj->width)
		count += 1;
	if (obj->zero)
		count += 4;
	if (obj->dot)
		count += 10;
	if (obj->per)
		count += 16;
	if (obj->dash)
		count += 100;
	if (obj->hash)
		count += 255;
	return (count);
}

int	ft_putnbr(int n, t_struct *obj)
{
	char	str[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == -2147483648 && obj->plus == 0)
		return (write(1, "-2147483648", 11));
	else if (n == -2147483648 && obj->plus  != 0)
		return (write(1, "2147483648", 10));
	if (n == 0)
		return (ft_putchar_fd('0', 1));
	if ((n < 0) && (obj->plus == 0))
	{
		count += ft_putchar_fd('-', 1);
		n *= -1;
	}
	else if (n < 0 && obj->plus != 0)
		n *= -1;
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		count += ft_putchar_fd(str[--i], 1);
	return (count);
}


