/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:36:56 by ccompote          #+#    #+#             */
/*   Updated: 2022/11/21 20:44:05 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	received(int sig)
{
	if (sig == SIGUSR2)
	{
		ft_putstr("Message received, good job, go home:)\n");
		exit(0);
	}
}

void	send_signal(int pid, char *str)
{
	char	c;
	int		j;

	while (*str)
	{
		c = *str;
		j = 7;
		while (j >= 0)
		{
			if (c & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			c = c >> 1;
			usleep(50);
			j--;
		}
		str++;
	}
	j = 8;
	while (j--)
	{
		kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	if (argc != 3)
	{
		ft_putstr("Error, invalid number of arguments\n");
		return (0);
	}
	sa.sa_handler = &received;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	send_signal(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
