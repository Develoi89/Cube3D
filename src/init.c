/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:46:47 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/09 20:37:52 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_data_2(t_data *data)
{
	data->dirx = 0;
	data->diry = 0;
	data->planex = 0;
	data->planey = 0;
	data->vr = 0;
	data->vl = 0;
	data->mf = 0;
	data->mb = 0;
	data->ml = 0;
	data->mr = 0;
}

int	init_data(t_data *data, char *filename)
{
	data->no = NULL;
	data->so = NULL;
	data->ea = NULL;
	data->we = NULL;
	data->f = NULL;
	data->c = NULL;
	data->player = 0;
	data->index = 0;
	data->width = 0;
	data->height = 0;
	data->first = 0;
	data->error = 0;
	data->speed = 0.06;
	data->fd = open(filename, O_RDONLY, 0);
	if (data->fd < 0)
	{
		printf("File couldn't be opened!\n");
		return (0);
	}
	return (0);
}
