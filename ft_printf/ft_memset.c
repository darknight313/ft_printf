/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:56:51 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:14:30 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = uc;
		ptr++;
		len--;
	}
	return (b);
}
