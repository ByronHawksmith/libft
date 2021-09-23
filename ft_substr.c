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

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	if (!dst || !src)
		return (dst);
	while (n && *src)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return (dst);
}

static size_t	ft_strnlen(const char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	str_len = ft_strnlen(str, len);
	substr = malloc((str_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strncpy(substr, (str + start), str_len);
	substr[str_len] = '\0';
	return (substr);
}
