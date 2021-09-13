#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = (char *) malloc(len);
	if (!dup)
		return (NULL);
	return ((char *) ft_memcpy(dup, s1, len));
}
