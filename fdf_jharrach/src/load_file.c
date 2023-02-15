/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 07:36:26 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/10 16:11:43 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static int32_t	count_words(char **split)
{
	int32_t	i;

	i = 0;
	if (!split)
		return (i);
	while (split[i])
		i++;
	return (i);
}

static void	get_fdf_error(t_fdf *fdf, char **split, int fd)
{
	int32_t	i;

	close(fd);
	if (split)
	{
		i = 0;
		while (split[i])
			free(split[i++]);
		free(split);
	}
	free_fdf(fdf);
	ft_printf("\033[0;91merror:\033[0;39m Allocation failed\n");
	exit(EXIT_FAILURE);
}

static void	allocate_fdf(t_fdf *fdf, char **split, int fd)
{
	int32_t			**tmp;
	const int32_t	cols = count_words(split);

	if (!split)
		get_fdf_error(fdf, split, fd);
	tmp = fdf->fdf;
	fdf->fdf = malloc(sizeof(int32_t *) * (fdf->rows + 1));
	if (!fdf->fdf)
	{
		fdf->fdf = tmp;
		get_fdf_error(fdf, split, fd);
	}
	ft_memmove(fdf->fdf, tmp, sizeof(int32_t *) * fdf->rows);
	free(tmp);
	fdf->fdf[fdf->rows] = malloc(sizeof(int32_t) * cols);
	if (!fdf->fdf[fdf->rows])
		get_fdf_error(fdf, split, fd);
	fdf->cols = 0;
	while (fdf->cols < cols)
	{
		fdf->fdf[fdf->rows][fdf->cols] = atoi(split[fdf->cols]);
		fdf->cols++;
	}
}

static void	load_file(t_fdf *fdf, int fd)
{
	char	*line;
	char	*tmp;
	char	**split;
	int32_t	i;

	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			return ;
		tmp = line;
		line = ft_strtrim(line, "\n");
		free(tmp);
		if (!line)
			get_fdf_error(fdf, 0, fd);
		split = ft_split(line, ' ');
		free(line);
		allocate_fdf(fdf, split, fd);
		i = 0;
		while (split[i])
			free(split[i++]);
		free(split);
		fdf->rows++;
	}
}

void	get_fdf(t_fdf *fdf, int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		ft_printf("Usage: ./fdf [filename]\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_printf("\033[0;91merror:\033[0;39m Unable to open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	fdf->cols = 0;
	fdf->rows = 0;
	fdf->fdf = 0;
	load_file(fdf, fd);
	close(fd);
}
