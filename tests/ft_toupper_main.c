#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	int low_a = 'a';
	int eight = '8';

	printf("           low_a: %c %d, eight: %c %d\n", low_a, low_a, eight, eight);
	printf("toupper    low_a: %c %d, eight: %c %d\n", toupper(low_a), toupper(low_a), toupper(eight), toupper(eight));
	printf("ft_toupper low_a: %c %d, eight: %c %d\n", ft_toupper(low_a), ft_toupper(low_a), ft_toupper(eight), ft_toupper(eight));

	return (0);
}
