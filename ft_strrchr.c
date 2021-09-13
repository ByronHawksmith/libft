#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = NULL;
	if (c == '\0')
	{
		while (*s)
			s++;
		save = (char *) s;
		return (save);
	}
	while (*s)
	{
		if (*s == c)
			save = (char *) s;
		s++;
	}
	return (save);
}
