/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:59 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/09 20:37:37 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	free_data(t_data *data)
{
	free(data->no);
	free(data->so);
	free(data->we);
	free(data->ea);
	free(data->f);
	free(data->c);
	free(data);
}

void	free_map(t_data *data, int i)
{
	mlx_destroy_image(data->mlx_ptr, data->textures[0].img);
	mlx_destroy_image(data->mlx_ptr, data->textures[1].img);
	mlx_destroy_image(data->mlx_ptr, data->textures[2].img);
	mlx_destroy_image(data->mlx_ptr, data->textures[3].img);
	mlx_destroy_image(data->mlx_ptr, data->img);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	while (data->map[i] != NULL && i < data->height + 2)
	{
		free(data->map[i]);
		i++;
	}
	free(data->map);
	free_data(data);
}
