/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:28 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/22 20:56:56 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strings(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

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
	size_t	str_len;
	char	**str_arr;

	if (!s)
		return (NULL);
	idx = 0;
	str_arr = malloc((ft_count_strings(s, c) + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	while (*s)
	{
		str_len = ft_strlendel(s, c);
		if (str_len)
		{
			str_arr[idx] = malloc((str_len + 1) * sizeof(char));
			if (ft_memcpy(str_arr[idx], s, str_len) == NULL)
				return (NULL);
			str_arr[idx++][str_len] = '\0';
			s += str_len - 1;
		}
		s++;
	}
	str_arr[idx] = NULL;
	return (str_arr);
}
