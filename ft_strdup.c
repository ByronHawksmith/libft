#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *) malloc(sizeof(s1) + 1);
	ft_strlcpy(dup, s1, sizeof(s1) + 1);
	return (dup);
}
