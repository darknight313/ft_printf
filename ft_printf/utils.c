/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:24:01 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:13:13 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"

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

int	get_digits(int long long n)
{
	int	count;

	count = 0;
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
	return (count);
}

int	max_bits(unsigned long n)
{
	int	max;

	max = 0;
	while (n >> max)
		max++;
	return (max);
}

int	ft_putnbr(int n)
{
	char	str[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n == 0)
		count += ft_putchar_fd('0', 1);
	if (n < 0)
	{
		count += ft_putchar_fd('-', 1);
		n = -n;
	}
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		count += ft_putchar_fd(str[--i], 1);
	return (count);
}

int	ft_unsigned_nbr(unsigned int n)
{
	char	str[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == 0)
		count += ft_putchar_fd('0', 1);
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		count += ft_putchar_fd(str[--i], 1);
	return (count);
}
