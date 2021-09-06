#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp = (char *) malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
