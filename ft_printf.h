#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_printchar(va_arg(args, int));
int	ft_printstr(va_arg(args, char *));
int	ft_printptr(va_arg(args, unsigned long long));		
int	ft_printnbr(va_arg(args, int));
int	ft_printunsigned(va_arg(args, unsigned long long));
int	ft_printhex(va_arg(args, unsigned int));
int	ft_printpercent(va_arg(args, unsigned int), format);
		
#endif
