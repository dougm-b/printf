
#include "printf.h"

int	ft_printchar(int c)
{
	write (fd, &c, 1);
	return (1);
}

