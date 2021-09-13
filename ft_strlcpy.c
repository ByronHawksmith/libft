#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const size_t	srclen = ft_strlen(src);

	if (srclen + 1 < size)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
