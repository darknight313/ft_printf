/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:43:27 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:31:29 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	return (result);
}