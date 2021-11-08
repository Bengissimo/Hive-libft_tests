#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *new;

	new = ft_strnew(3);
	for (int i = 0; i < 3; i++)
	{
		printf("(%c)\n", new[i]);
	}
	return (0);
}
