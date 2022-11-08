/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:27:34 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:37:45 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	key_handler(int key, t_data *data)
{
	if (key == 124)
	{
		data->vr = 1;
	}
	else if (key == 123)
	{
		data->vl = 1;
	}
	return (0);
}

int	key_release(int key, t_data *data)
{
	if (key == 124)
	{
		data->vr = 0;
	}
	else if (key == 123)
	{
		data->vl = 0;
	}
	return (0);
}
