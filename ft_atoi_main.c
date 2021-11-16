#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	const char *s1 = " 0";
	const char *s2 = "  0";
	const char *s3 = "   0";
	const char *s4 = "+ 1";
	const char *s5 = "++0";
	const char *s6 = " +0";
	const char *s7 = "-1 1";
	const char *s8 = "--1";
	const char *s9 = " -0";
	const char *max = "+21474836470000000000";
	const char *min = "-9223372036854775808";
	const char *s10 = " ?1";
	const char *s11 = " + 1";
	char **end = NULL;


	
	printf("%s ft_atoi: %d atoi: %d\n", s1, ft_atoi(s1), atoi(s1));
	printf("%s ft_atoi: %d atoi: %d\n", s2, ft_atoi(s2), atoi(s2));
	printf("%s ft_atoi: %d atoi: %d\n", s3, ft_atoi(s3), atoi(s3));
	printf("%s ft_atoi: %d atoi: %d\n", s4, ft_atoi(s4), atoi(s4));
	printf("%s ft_atoi: %d atoi: %d\n", s5, ft_atoi(s5), atoi(s5));
	printf("%s ft_atoi: %d atoi: %d\n", s6, ft_atoi(s6), atoi(s6));
	printf("%s ft_atoi: %d atoi: %d\n", s7, ft_atoi(s7), atoi(s7));
	printf("%s ft_atoi: %d atoi: %d\n", s8, ft_atoi(s8), atoi(s8));
	printf("%s ft_atoi: %d atoi: %d\n", s9, ft_atoi(s9), atoi(s9));
	printf("%s ft_atoi: %d atoi: %d\n", max, ft_atoi(max), atoi(max));
	printf("%s atoi: %d strtol: %ld\n", max, atoi(max), strtol(max, end, 10));

	printf("%s ft_atoi: %d atoi: %d\n", min, ft_atoi(min), atoi(min));
	printf("%s atoi: %d strtol: %ld\n", min, atoi(min), strtol(min, end, 10));

	printf("%s ft_atoi: %d atoi: %d\n", s10, ft_atoi(s10), atoi(s10));
	printf("%s ft_atoi: %d atoi: %d\n", s11, ft_atoi(s11), atoi(s11));

	return (0);

}
