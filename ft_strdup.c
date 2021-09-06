#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *) malloc(sizeof(src) + 1);
	ft_strcpy(dup, src);
	return (dup);
}
