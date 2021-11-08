#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello world";
	char *sub;
	char *sub2;
	sub  = ft_strsub(str, 6, 5);
	sub2  = ft_strsub(str, 12, 5);
	
	printf("Hello world: %s\n", str);
	printf("      world: %s\n", sub);
	printf("unknown: %s\n", sub2);

	return (0);
}
