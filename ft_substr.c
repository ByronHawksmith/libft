/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:19:55 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/13 18:19:55 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t 	str_len;
	size_t	idx;

	CHECK_PTR(str);
	str_len = ft_strlen(str);
	CHECK_MALLOC(substr, (len * sizeof(char)) + 1);
	idx = 0;
	while (idx < len && idx + start < str_len)
	{
		substr[idx] = str[start + idx];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
