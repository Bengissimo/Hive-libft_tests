
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s0 = "";
	char *s1 = "1";
	char *s2 = "12";
	
	printf("   strlen s0: %lu s1: %lu s2: %lu\n", strlen(s0), strlen(s1), strlen(s2));
	printf("ft_strlen s0: %lu s1: %lu s2: %lu\n", ft_strlen(s0), ft_strlen(s1), ft_strlen(s2));

	return (0);
}