#define FT_PRINTF_H
# ifndef FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

typedef struct s_obj
{
	int	dash;
	int	plus;
	int	zero;
	int	hash;
	int	space;
	int	width;
	int	per;
	int	type;
} t_obj;

//main.c
int	ft_printf(const char *format, ...);

//ft_execute all formats
int	ft_execute(va_list args, t_struct *obj);

// create obj
void	create_obj(const char **format, t_struct *obj);
int		get_number(const char **format, t_struct *obj);

// execute_char
int	execute_char(char c, t_struct *obj);

//execute_hex
int	execute_hex(unsigned int n, t_struct *obj);

//execute_int
int	execute_int(int n, t_struct *obj);

//execute_p
int	execute_p(void *pointer, t_struct *obj);

//execute_str
int	execute_s(char *str, t_struct *obj);

//execute_u
int	execute_u(unsigned int n, t_struct *obj);
