#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	idx;

	if (dst == NULL && src == NULL)
		return (NULL);
	idx = 0;
	while (idx < n)
	{
		((unsigned char *) dst)[idx] = ((unsigned char *) src)[idx];
		idx++;
	}
	return (dst);
}
