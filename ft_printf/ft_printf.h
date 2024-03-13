/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:54:36 by ashirzad          #+#    #+#             */
/*   Updated: 2024/03/13 09:27:37 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

typedef struct t_struct
{
	int	dash;
	int	plus;
	int	zero;
	int	hash;
	int	space;
	int	width;
	int	dot;
	int	per;
	int	type;
}	t_struct;

int		ft_printf(const char *format, ...);
//create data object
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_putstr_fd(char *str, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_isalpha(int a);
int		ft_printf(const char *format, ...);
void	create_obj(const char **format, t_struct *obj);
int		get_number(const char **format, t_struct *obj);

//execute based in type
int		ft_execute(va_list args, t_struct *obj);
int		execute_int(int n, t_struct *obj);
int		execute_char(char c, t_struct *obj);
int		execute_u(unsigned int n, t_struct *obj);
int		execute_p(void *pointer, t_struct *obj);
int		execute_s(char *str, t_struct *obj);
int		execute_hex(unsigned int n, t_struct *obj);

//check the flags
int		space_check(int s, int n, t_struct *obj);
int		zero_check(int s, int n, t_struct *obj);
int		plus_check(int n, t_struct *obj);
int		hash_check(t_struct *obj);

//utils.c
int		ft_print(int n, char c);
int		get_digits(int long long n);
int		sum_formula(t_struct *obj);
int		max_bits(unsigned long n);
int		ft_putnbr(int n);
int		ft_unsigned_nbr(unsigned int n);

//execute_hex
int		ft_put_address(void *ptr);
int		ft_print_hex(unsigned int nbr, char c);
int		convert_and_write_hex(char *str, unsigned long long nbr);

#endif
