/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:48:21 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/16 13:49:02 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_contains(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_str_bound(
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	start;
	size_t	end;
	char	*ret;

	CHECK_PTR(s1);
	CHECK_PTR(set);
	length = ft_strlen(s1);
	start = ft_str_bound(s1, set, length, 1);
	end = ft_str_bound(s1, set, length, -1);
	if (start > end)
		length = 0;
	else
		length = end - start + 1;
	if (length <= 0)
		return (ft_strdup(""));
	CHECK_MALLOC(ret, (length + 1) * sizeof(char));
	ft_memcpy(ret, s1 + start, length);
	ret[length] = '\0';
	return (ret);
}
