#include "libft.h"

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str == '-')
			sign *= -1;
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
