/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:47:26 by luntiet-          #+#    #+#             */
/*   Updated: 2023/01/08 12:28:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void	ft_exit_close(char *str, t_fd fd, char **path)
{
	perror(str);
	close(fd.infile);
	close(fd.outfile);
	split_free(path);
	exit(EXIT_FAILURE);
}

void	ft_exit(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}
