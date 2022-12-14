/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:05:53 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:49:32 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*d;

	i = -1;
	if (!needle[i + 1])
		return ((char *)haystack);
	while (++i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			d = (char *)&haystack[i];
			j = 0;
			while (needle[j] && (i + j) <= len)
			{
				if (needle[j] == haystack[i + j])
					j++;
				else
					break ;
				if (needle[j] == '\0')
					return (d);
			}
		}
	}
	return (NULL);
}
