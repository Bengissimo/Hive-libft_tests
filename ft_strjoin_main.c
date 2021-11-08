#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *hello = "Hello";
	char *world = " world";
	char *empty = "";
	
	char *hello_world = ft_strjoin(hello, world);
	char *hello_empty = ft_strjoin(hello, empty);
	char *empty_world = ft_strjoin(empty, world);

	printf("%s\n", hello_world);
	printf("%s\n", hello_empty);
	printf("%s\n", empty_world);

	return (0);
}
