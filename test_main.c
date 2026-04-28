#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %s %d %x\n", "world", 42, 255);
	printf("Hello %s %d %x\n", "world", 42, 255);
}
