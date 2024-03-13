/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:44:19 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:14:34 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isalpha(int a)
{
	int	result;

	result = 0;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
	{
		result = 1;
	}
	return (result);
}
