/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:03:46 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:49:05 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	int		i;
	int		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < (int)start)
		return ((char *)ft_calloc(1, sizeof(char)));
	d = malloc(sizeof(char) * len + 1);
	if (!d)
		return (NULL);
	i = 0;
	ft_bzero(d, len + 1);
	if (!d)
		return (NULL);
	while (i < (int)len)
	{
		d[i] = s[start + i];
		i++;
	}
	return (d);
}
