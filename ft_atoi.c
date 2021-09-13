#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

static int	ft_long_border(const char c, int mult, unsigned long nb)
{
	unsigned long	border;

	border = 922337203685477580;
	if ((nb > border || (nb == border && (c - '0') > 7)) && mult == 1)
		return (-1);
	else if ((nb > border || (nb == border && (c - '0') > 8)) && mult == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				mult;
	unsigned long	nb;
	int				brd;

	i = 0;
	mult = 1;
	nb = 0;
	brd = 1;
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
		brd = ft_long_border(str[i], mult, nb);
		if (brd < 1)
			return (brd);
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	nb *= mult;
	return (nb);
}
