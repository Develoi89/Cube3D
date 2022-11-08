/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:59 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:37:14 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	free_map(t_data *data, int i)
{
	while (data->map[i] != NULL && i < data->height + 2)
	{
		printf("%s\n", data->map[i]);
		free(data->map[i]);
		i++;
	}
	free(data->map);
}
