#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	req;

	req = count * size;
	CHECK_MALLOC(arr, req);
	ft_memset(arr, 0, req);
	return (arr);
}
