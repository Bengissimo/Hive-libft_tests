#include "libft.h"
#include <stdio.h>

int main(void)
{
	int n = -5859;
	int max = 2147483647;
	int min = -2147483648;

	char *mx = ft_itoa(max);
	char *mn = ft_itoa(min);
	char *nb = ft_itoa(n);

	printf("%s\n", nb);
	printf("%s\n", mx);
	printf("%s\n", mn);

	while (*nb != '\0')
	{
		printf("(%c)", *nb);
		nb++;
	}
	printf("\n");
	while (*mx != '\0')
	{
		printf("(%c)", *mx);
		mx++;
	}
	printf("\n");
	while (*mn != '\0')
	{
		printf("(%c)", *mn);
		mn++;
	}
	printf("\n");
	return (0);
}
