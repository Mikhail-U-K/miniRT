/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 02:46:44 by bdaedric          #+#    #+#             */
/*   Updated: 2021/03/14 02:47:46 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void		rendering(t_all *all, t_camera *camera)
{
	t_ray	ray;
	t_color	color;

	all->y = 0;
	ray.orig = camera->orig;
	while (all->y < all->scene.view.rh)
	{
		all->x = 0;
		while (all->x < all->scene.view.rw)
		{
			ray.dir = vec_normalisation(camera_to_world(ray_set(all->x,
						all->y, &all->scene), camera->dir));
			color = (t_color){0, 0, 0};
			if (test_collision(&all->scene, &ray))
			{
				init_normal(&all->scene);
				color = vec_mult(int_to_color(get_color(&all->scene.closest)), \
					shade(&all->scene, int_to_color(all->scene.ambient_color)));
			}
			my_mlx_pixel_put(&all->img, all->x, all->y, color_to_int(color));
			all->x++;
		}
		all->y++;
	}
	mlx_put_image_to_window(all->mlx, all->mlx_win, all->img.img, 0, 0);
}
