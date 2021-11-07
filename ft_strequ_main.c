#include "libft.h"
#include <stdio.h>

int main(void)
{
	char const *ABC_1 = "ABC";
	char const *ABC_2 = "ABC";
	char const *NULL1 = NULL;
	char const *ABCD = "ABCD";
	char const *BBC = "BBC";
	char const *NULL2 = NULL;
	char const empty[] = "";
	char uninit1[0];
	char uninit2[0];

	printf("identical: %d\n", ft_strequ(ABC_1, ABC_2));
	printf("not identical: %d\n", ft_strequ(ABC_1, NULL1));
	printf("not identical: %d\n", ft_strequ(ABC_1, ABCD));
	printf("not identical: %d\n", ft_strequ(ABC_1, BBC));
	printf("identical: %d\n", ft_strequ(NULL1, NULL2));
	printf("not identical: %d\n", ft_strequ(NULL1, uninit1));
	printf("?? identical: %d\n", ft_strequ(NULL1, empty));
	printf("identical: %d\n", ft_strequ(uninit1, uninit2));
	return (0);
}

