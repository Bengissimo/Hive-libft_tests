#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *with_space = "  Hello world  .  ";
	char *wo_space = ft_strtrim(with_space);
	char *empty = "     ";
	ft_strtrim(empty);

	printf("original: %s\n trimmed: %s\n", with_space, wo_space);

	return (0);
}
