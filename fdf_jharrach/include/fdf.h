/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:29:24 by jan-arvid         #+#    #+#             */
/*   Updated: 2023/01/10 14:04:26 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../MLX42/include/MLX42/MLX42.h"
# include "../libft/include/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <math.h>

# define WIDTH 1024
# define HEIGHT 512

# define BLACK 0xFF000000
# define WHITE 0xFFFFFFFF
# define T_GREY 0xAA111111

# define PI 3.141592653589793238462643383279502884197169399375105820974944592307

# define Z_MULTIPLIER -1.0f

typedef struct s_vec2
{
	int32_t	x;
	int32_t	y;
}	t_vec2;

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}	t_vec3;

typedef struct s_line3
{
	t_vec3	a;
	t_vec3	b;
}	t_line3;

typedef struct s_fdf
{
	mlx_t			*mlx;
	mlx_image_t		*win;
	int8_t			type;
	int8_t			*line_b;
	t_line3			**line;
	int64_t			lines;
	int32_t			**fdf;
	t_vec3			a;
	t_vec3			t;
	t_vec3			s;
	int32_t			rows;
	int32_t			cols;
	uint32_t		col;
	float			hwidth;
	float			hheight;
	float			proj[4][4];
	float			scale;
	float			near;
	float			far;
	float			fov;
	double			delta_time;
	double			time;
	bool			shift;
}	t_fdf;

void	draw(t_fdf	*fdf);
void	multiply_matrix3x3(t_vec3 *input, t_vec3 *output, float const m[3][3]);
void	multiply_matrix4x4(t_vec3 *i, t_vec3 *o, float m[4][4]);
void	vec_add(t_vec3 *v1, t_vec3 *v2);
void	vec_sub(t_vec3 *v1, t_vec3 *v2);
void	vec_mul(t_vec3 *v1, t_vec3 *v2);
void	vec_copy(t_vec3 *v1, t_vec3 *v2);
int8_t	clip_line(t_vec3 *a, t_vec3 *b, t_vec3 clip);
int8_t	clip_for_win(t_line3 *l);
void	keys_translation(t_fdf *fdf);
void	keys_rotation(t_fdf *fdf);
void	keys_scalling(t_fdf *fdf);
void	scroll(double xdelta, double ydelta, void *param);
void	keys(mlx_key_data_t keydata, void *param);
void	init_fdf(t_fdf *fdf);
void	reset(t_fdf *fdf);
void	get_fdf(t_fdf *fdf, int argc, char **argv);
void	free_fdf(t_fdf *fdf);
void	init_lines(t_fdf *fdf, t_vec2 max, t_vec2 d, t_line3 **line);
void	set_center(t_fdf *fdf);
void	print_keys(void);
void	terminate_fdf(t_fdf *fdf);
void	mlx_error(t_fdf *fdf);

#endif
