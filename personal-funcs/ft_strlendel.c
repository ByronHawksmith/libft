/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlendel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:04:07 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/16 16:04:07 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlendel(char const *s, char c)
{
	size_t str_len;

	str_len = 0;
	while (*s && *s != c)
	{
		str_len++;
		s++;
	}
	return (str_len);
}
