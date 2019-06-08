/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 04:21:02 by abourenn          #+#    #+#             */
/*   Updated: 2019/06/08 05:58:12 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		segment(t_mlx *mlx, int xf, int yf, int xi, int yi, int color)
{
	int dx,dy,i,xinc,yinc,cumul,x,y;
	x = xi;
	y = yi;
	dx = xf - xi;
	dy = yf - yi;
	xinc = ( dx > 0 ) ? 1 : -1;
	yinc = ( dy > 0 ) ? 1 : -1;
	dx = abs(dx);
	dy = abs(dy);
	if (mlx->map)
	mlx_pixel_put(mlx->mlx_ptr, mlx->win_ptr, x, y, color);
	if (dx > dy)
	{
		cumul = dx / 2;
		for (i = 1 ; i <= dx ; i++)
		{
			x += xinc;
			cumul += dy;
			if (cumul >= dx)
			{
				cumul -= dx;
				y += yinc; 
			}
			mlx_pixel_put(mlx_ptr, win_ptr, x, y, color);
		} 
	}
	else
	{
		cumul = dy / 2;
		for (i = 1 ; i <= dy ; i++)
		{
			y += yinc;
			cumul += dx;
			if (cumul >= dy)
			{
				cumul -= dy;
				x += xinc;
			}
			mlx_pixel_put(mlx_ptr, win_ptr, x, y, color);
		} 
	}
	return (0);
}

int		cercle(t_mlx *mlx, int rayon, int center_x, int center_y, int color, double start, double end)
{
	double	joe;
	double	alb;

	while (start <= end)
	{
		joe = center_x + (rayon * cos(start));
		alb = center_y + (rayon * sin(start));
//		segment(mlx_ptr, win_ptr, joe, alb, center_x, center_y, color);
		if (mlx->)
		mlx_pixel_put(mlx_ptr, win_ptr, joe, alb, color);
		start += 0.00001;
	}
	return (1);
}

void	elmapo(t_mlx *mlx)
{
	int		x;
	int		y;
	int		i;

	x = 0;
	i = 0;
	while (x < mlx->len_x)
	{
		y = 0;
		while (y < mlx->len_y)
		{
			mlx->map[i].x = x;
			mlx->map[i].y = y;
			y++;
			i++;
		}
		x++;
	}
}

int		main(int ac, char **av)
{
	t_mlx	mlx;

	mlx.mlx_ptr = mlx_init();
	mlx.len_x = 1920;
	mlx.len_y = 1280;
	mlx.win_ptr = mlx_new_window(mlx_ptr, mlx.len_x, mlx.len_y, "La chatte");
	elmapo(&mlx);
	cercle(&mlx, 200, 960, 640, 0xFF0000, 0, (M_PI) *2);
	segment(&mlx, 960, 840, 960, 440, 0xFF0000);
	mlx_loop(mlx_ptr);
	return (0);
}
