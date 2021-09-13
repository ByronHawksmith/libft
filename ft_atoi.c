/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:44 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/13 17:27:44 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int				mult;
	unsigned long	nb;
	int				brd;

	mult = 1;
	nb = 0;
	brd = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mult *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		brd = ft_long_border(*str, mult, nb);
		if (brd < 1)
			return (brd);
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb * mult);
}
