/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:29 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/22 18:51:27 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getstart(const char *s1, const char *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_getend(const char *s1, const char *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	start;
	size_t	end;
	char	*ret;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	length = ft_strlen(s1);
	start = ft_getstart(s1, set, length);
	end = ft_getend(s1, set, length);
	if (start >= end)
		return (ft_strdup(""));
	ret = malloc((end - start + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1 + start, end - start + 1);
	return (ret);
}
