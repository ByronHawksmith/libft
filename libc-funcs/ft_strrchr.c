/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:27:45 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/13 17:27:45 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = NULL;
	if (c == '\0')
	{
		while (*s)
			s++;
		save = (char *) s;
		return (save);
	}
	while (*s)
	{
		if (*s == c)
			save = (char *) s;
		s++;
	}
	return (save);
}
