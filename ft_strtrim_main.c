#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("(%s) -> (%s)\n", "Hello world", ft_strtrim("Hello world"));
	printf("(%s) -> (%s)\n", " Hello world", ft_strtrim(" Hello world"));
	printf("(%s) -> (%s)\n", "   Hello world", ft_strtrim("   Hello world"));
	printf("(%s) -> (%s)\n", " Hello world ", ft_strtrim(" Hello world "));
	printf("(%s) -> (%s)\n", "   Hello world   ", ft_strtrim("   Hello world   "));
	printf("(%s) -> (%s)\n", "	Hello world", ft_strtrim("	Hello world"));
	printf("(%s) -> (%s)\n", "		Hello world", ft_strtrim("		Hello world"));
	printf("(%s) -> (%s)\n", "		Hello world		", ft_strtrim("		Hello world		"));
	printf("(%s) -> (%s)\n", "\nHello world\n", ft_strtrim("\nHello world\n"));



	return (0);
}
