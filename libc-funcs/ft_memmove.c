/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:44 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/16 11:03:53 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	CHECK_PTR(dst);
	CHECK_PTR(src);
	d = dst;
	s = src;
	if (d <= s)
		while (len)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	d += len;
	s += len;
	if (d > s)
		while (len)
		{
			len--;
			d--;
			s--;
			*d = *s;
		}
	return (dst);
}
