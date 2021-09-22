/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:44 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/22 17:56:16 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*front(void *dst, char *d, const char *s, size_t len)
{
	while (len)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dst);
}

static void	*back(void *dst, char *d, const char *s, size_t len)
{
	while (len)
	{
		len--;
		d--;
		s--;
		*d = *s;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!dst || !src)
		return (NULL);
	d = dst;
	s = src;
	if (d <= s)
		return (front(dst, d, s, len));
	d += len;
	s += len;
	return (back(dst, d, s, len));
}
