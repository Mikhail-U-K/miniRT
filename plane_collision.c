/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 03:09:58 by bdaedric          #+#    #+#             */
/*   Updated: 2021/03/14 03:10:02 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int		plane_collision(t_scene *scene, t_plane *plane, t_ray *ray)
{
	double		u;
	double		v;
	double		t;

	u = scalar(ray->dir, plane->vec_n);
	v = scalar(vec_sub(ray->orig, plane->orig), plane->vec_n);
	if (u == 0 || (u < 0 && v < 0) || (u > 0 && v > 0))
		return (0);
	t = -(v / u);
	if (t < 0)
		return (0);
	scene->closest.t = t;
	scene->closest.point = vec_sum(ray->orig, vec_con_mult(t, ray->dir));
	scene->closest.figure = plane;
	if (u > 0)
		plane->vec_n = vec_con_mult(-1, plane->vec_n);
	scene->closest.type = T_PLANE;
	return (1);
}
