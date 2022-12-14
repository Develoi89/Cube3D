/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:31:38 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:50:01 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strlcat(char *dst, const char *src, size_t n)
{
	int	dlen;
	int	slen;
	int	i;
	int	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	j = 0;
	if (dlen > (int)n - 1)
		return (slen + (int)n);
	else if (dlen == (int)n - 1)
		return (slen + (int)n - 1);
	while (*(src + j) != '\0')
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
		if (i == (int)n - 1)
			break ;
	}
	*(dst + i) = '\0';
	return (dlen + slen);
}
