#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*str;
	unsigned char	chr;

	idx = 0;
	str = (unsigned char *) s;
	chr = (unsigned char) c;
	while (idx < n)
	{
		if (*str == chr)
			return (str);
		str++;
		idx++;
	}
	return (NULL);
}
