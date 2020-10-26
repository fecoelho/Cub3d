/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry_rect.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho </var/mail/fcoelho>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:42:20 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/26 14:42:21 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_rectangle(t_data *img, t_point point, int width, int height)
{
	int x;
	int y;

	x = 0;
	while (x <= width)
	{
		y = 0;
		while (y <= height)
		{
			my_mlx_pixel_put(img, point.x + x, point.y + y, point.color);
			y++;
		}
		x++;
	}
}
