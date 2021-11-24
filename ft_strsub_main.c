#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello world";

	if (ft_strequ("Hello world", ft_strsub(str, 0, 12)) != 1)
	{
		printf("start: 0 len: 12 [KO]\n");
		return (1);
	}
	if (ft_strequ("ello world", ft_strsub(str, 1, 11)) != 1)
	{
		printf("start: 1 len: 11 [KO]\n");
		return (1);
	}
	if (ft_strequ("llo world", ft_strsub(str, 2, 10)) != 1)
	{
		printf("start: 2 len: 10 [KO]\n");
		return (1);
	}
	if (ft_strequ("d", ft_strsub(str, 10, 1)) != 1)
	{
		printf("start: 10 len: 1 [KO]\n");
		return (1);
	}
	if (ft_strequ("d", ft_strsub(str, 10, 20)) != 1)
	{
		printf("start: 10 len: 20 [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
