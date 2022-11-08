/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:17 by zpalfi            #+#    #+#             */
/*   Updated: 2022/11/06 12:36:41 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <math.h>
# include "mlx.h"
# include "../libs/Libft/include/libft.h"
# include "../libs/Get_Next_Line/include/get_next_line.h"
# include <fcntl.h>

# define WIDTH 1920
# define HEIGHT 1080

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;

	int		fd;
	int		fd2;
	int		width;
	int		height;
	int		index;
	int		player;
	int		first;
	int		error;
	int		dir;
	int		colorc;
	int		colorf;
	int		colorw1;
	int		colorw2;

	double	posx;
	double	posy;
	double	dirx;
	double	diry;
	double	planex;
	double	planey;
	double	camerax;
	double	raydirx;
	double	raydiry;
	double	sidedistx;
	double	sidedisty;
	double	deltadistx;
	double	deltadisty;
	double	perpwalldist;

	int		mapx;
	int		mapy;
	int		stepx;
	int		stepy;
	int		hit;
	int		side;
	int		line;
	int		drawstart;
	int		drawend;

	int		vr;
	int		vl;

	char	**map;

	char	*filename;
	char	*no;
	char	*so;
	char	*ea;
	char	*we;
	char	*f;
	char	*c;

	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

void	malloc_map(t_data *data);
void	free_map(t_data *data, int i);
void	save_map(t_data *data, char *line);
int		rendering(t_data *data);
void	save_texture(t_data *data, char *line);
void	map_checker(t_data *data, int i, int j);
void	get_height(t_data *data, char *filename, int i, int j);

char	*del_spaces(char *line, int i);

int		key_handler(int key, t_data *data);
int		init_data(t_data *data, char *filename);
int		get_color(char *c, int color, int i, int j);
int		color_checker(char *c, int i, int j, int k);
int		file_parser(t_data *data, int i, char *filename);
int		key_release(int key, t_data *data);

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);

#endif