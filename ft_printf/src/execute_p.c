/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:12:28 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/15 23:30:47 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	execute_p(void *pointer, t_struct *obj)
{
	int		count;

	count = 0;
	count += ft_put_address(pointer);
	if (obj->dash)
		count += ft_print(obj->width - count, ' ');
	return (count);
}
