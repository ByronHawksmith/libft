/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:45 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/13 17:27:45 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *) haystack);
	while (len >= needle_len && *haystack)
	{
		len--;
		if (!ft_memcmp(haystack, needle, needle_len))
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
