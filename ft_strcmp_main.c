#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	/*char *s1 = "abc";
	char *s2 = "abc";
	char *s3 = "a";
	char *s4 = "";
	
	
	printf("strcmp vs ft_strcmp\n");
	printf("libc: %d ft: %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("libc: %d ft: %d\n", strcmp(s1, s3), ft_strcmp(s1, s3));
	printf("libc: %d ft: %d\n", strcmp(s1, s4), ft_strcmp(s1, s4));

	printf("strncmp vs ft_strncmp\n");
	printf("libc: %d ft: %d\n", strncmp(s1, s2, 2), ft_strncmp(s1, s2, 10));
	printf("libc: %d ft: %d\n", strncmp(s1, s3, 2), ft_strncmp(s1, s3, 200));
	printf("libc: %d ft: %d\n", strncmp(s1, s4, 2), ft_strncmp(s1, s4, 200));
	
	return (0);*/

	printf("%i\n", ft_strcmp("\200", "\0"));

    printf("%i\n", ft_strcmp((char[] ) { '\200' }, "\0"));

    printf("%i\n", ft_strcmp((const char[] ) { '\200' }, "\0"));

    char a[1] = { 128 };
    char b[1] = { 0 };
    
	printf("%i\n", ft_strcmp(a, b));

	printf("%i\n", strcmp("\200", "\0"));

    printf("%i\n", strcmp((char[] ) { '\200' }, "\0"));

    printf("%i\n", strcmp((const char[] ) { '\200' }, "\0"));

    printf("%i\n", strcmp(a, b));
    return (0);
}
