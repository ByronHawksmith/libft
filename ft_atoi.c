#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

int	ft_atoi(const char *str)
{
	int i;
	int mult;
	int nb;

	i = 0;
	mult = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	nb *= mult;
	return (nb);
}
