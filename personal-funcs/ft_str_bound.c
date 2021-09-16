/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_bound.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:11:43 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/16 14:11:43 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_bound(
	const char *str,
	const char *set,
	size_t length,
	char step
)
{
	size_t	idx;
	size_t	bound_idx;

	bound_idx = 0;
	while (bound_idx < length)
	{
		if (step < 0)
			idx = length - 1 - bound_idx;
		else if (step >= 0)
			idx = bound_idx;
		if (!ft_str_contains(str[idx], set))
			return (idx);
		bound_idx++;
	}
	return (bound_idx);
}
