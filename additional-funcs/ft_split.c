/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:28 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/20 19:20:12 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlendel(char const *s, char c)
{
	size_t	str_len;

	str_len = 0;
	while (*s && *s != c)
	{
		str_len++;
		s++;
	}
	return (str_len);
}

char	**ft_split(char const *s, char c)
{
	size_t	idx;
	size_t	num_str;
	size_t	str_len;
	char	**str_arr;

	CHECK_PTR(s);
	idx = 0;
	num_str = ft_count_strings(s, c);
	CHECK_MALLOC(str_arr, (num_str + 1) * sizeof(char *));
	while (*s)
	{
		str_len = ft_strlendel(s, c);
		if (str_len)
		{
			CHECK_MALLOC(str_arr[idx], (str_len + 1) * sizeof(char));
			ft_memcpy(str_arr[idx], s, str_len);
			str_arr[idx][str_len] = '\0';
			s += str_len;
			idx++;
		}
		if (*s)
			s++;
	}
	str_arr[idx] = NULL;
	return (str_arr);
}
