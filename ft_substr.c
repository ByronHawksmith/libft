/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:19:55 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/22 18:52:09 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	idx;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	idx = 0;
	while (idx < len && idx + start < str_len)
	{
		substr[idx] = str[start + idx];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
