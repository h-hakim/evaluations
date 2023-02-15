/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:25:18 by luntiet-          #+#    #+#             */
/*   Updated: 2023/01/08 12:15:03 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

static int	check_null(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) < 1)
			return (0);
		i++;
	}
	return (1);
}

char	*read_file(int fd)
{
	char	*line;
	char	*output;

	line = get_next_line(fd);
	output = ft_strdup("");
	if (!line)
		exit(EXIT_FAILURE);
	while (line)
	{
		output = ft_strjoin_gnl(output, line);
		free(line);
		line = get_next_line(fd);
	}
	return (output);
}

int	handle_input(int argc, char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		perror(argv[1]);
	if (!check_null(argc, argv))
	{
		close(fd);
		ft_exit("no empty arguments allowed");
	}
	return (fd);
}

t_input	new_input(char **argv, char **env)
{
	t_input	input;

	input.path = get_path(env);
	input.argv = argv;
	input.env = env;
	return (input);
}
