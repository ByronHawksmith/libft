/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:29 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/16 14:12:29 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
