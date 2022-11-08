/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:05 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:49:17 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strrncmp(const char *str, const char *str2, size_t n)
{
	int	i;
	int	l;

	i = ft_strlen(str) - 1;
	l = ft_strlen(str2) - 1;
	while (n > 0)
	{
		if (str[i] == str2[l])
		{
			i--;
			l--;
			n--;
		}
		else
			break ;
	}
	if (n == 0)
		return (0);
	else
		return (1);
}
