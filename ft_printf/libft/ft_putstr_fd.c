/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:15:38 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:31:47 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (*s)
	{
		count += write(fd, s, 1);
		s++;
	}
	return (count);
}
