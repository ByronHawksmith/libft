#include "libft.h"

int	ft_is_space(int c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}
