/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccompote <ccompote@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:37:25 by ccompote          #+#    #+#             */
/*   Updated: 2022/11/21 17:55:39 by ccompote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_message(int sig, siginfo_t *info, void *context)
{
	static int	counter;
	static char	bits;
	int			c;

	if (context)
		;
	c = 0;
	if (sig == SIGUSR1)
		c = (1 << counter);
	bits |= c;
	counter++;
	if (counter == 8)
	{
		if (!bits)
		{
			kill(info->si_pid, SIGUSR2);
			bits = 0;
			counter = 0;
			return ;
		}
		ft_putchar(bits);
		bits = 0;
		counter = 0;
		kill(info->si_pid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_putstr("Server PID: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	sa.sa_sigaction = handle_message;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
