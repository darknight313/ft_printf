/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:46:09 by ashirzad          #+#    #+#             */
/*   Updated: 2024/04/06 12:17:28 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	char	*u_str;
	char	u_c;
	size_t	count;

	u_c = (char)c;
	u_str = (char *)str;
	count = 0;
	while (count < n && u_str[count] != u_c)
	{
		count++;
	}
	if (count < n)
	{
		return (&u_str[count]);
	}
	else
	{
		return (NULL);
	}
}
