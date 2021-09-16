/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:44 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/16 12:48:56 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_long_border(const char c, int mult, long nb)
{
	long	border;

	border = 922337203685477580;
	if ((nb > border || (nb == border && (c - '0') > 7)) && mult == 1)
		return (-1);
	else if ((nb > border || (nb == border && (c - '0') > 8)) && mult == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		brd;

	num = 0;
	sign = 1;
	brd = 1;
	while (IS_WSPACE(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		brd = ft_long_border(*str, sign, num);
		if (brd < 1)
			return (brd);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
