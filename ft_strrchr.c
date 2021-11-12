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
	char	*strr;
	char	chr;
	size_t	i;

	strr = (char *) s;
	chr = (char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (strr[i] == chr)
			return (strr + i);
		i--;
	}
	if (strr[i] == chr)
		return (strr);
	return (0);
}
