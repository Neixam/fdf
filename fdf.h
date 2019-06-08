/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 04:21:45 by abourenn          #+#    #+#             */
/*   Updated: 2019/06/08 05:58:18 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "mlx.h"

typedef struct	s_map
{
	int		x;
	int		y;
	int		pix;
}				t_map;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		len_x;
	int		len_y;
	t_map	map[len_x * len_y];
}				t_mlx;

#endif
