#include "libft.h"
#include <stdio.h>

int main(void)
{
	char const *s1 = "ABC";
	char const *s2 = "ABC";

	char const *s3 = "";
	char const *s4 = "ABCD";
	char const *s5 = "BBC";

	printf("identical: %d\n", ft_strequ(s1, s2));
	printf("not identical: %d\n", ft_strequ(s1, s3));
	printf("not identical: %d\n", ft_strequ(s1, s4));
	printf("not identical: %d\n", ft_strequ(s1, s5));

	return (0);
}

