#include "libft.h"
#include <stdio.h>

int main()
{
	char *str = "split       this for   me  !       \0";
	printf("%s", ft_split(str, ' ')[2]);
}
