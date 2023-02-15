/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:28:09 by jharrach          #+#    #+#             */
/*   Updated: 2022/11/06 19:16:19 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_nbrlen(int num)
{
	char	len;

	len = 0;
	if (!num)
		len++;
	while (num)
	{	
		len++;
		num /= 10;
	}
	return (len);
}

static int	ft_handleflags(int num, t_placeholder *ph)
{
	int	i;

	ph->len = ft_nbrlen(num);
	if (!num && ph->flags & F_DOT && !ph->precision)
		ph->len = 0;
	if (ph->precision > ph->len)
		ph->len = ph->precision;
	if (num < 0 || ph->flags & (F_PLUS + F_SPACE))
		ph->len++;
	if (ph->width < ph->len)
		ph->width = ph->len;
	i = ph->len;
	if (ph->flags & F_MINUS)
		ph->len = ph->width;
	else
	{
		i = ph->width;
		if (ph->flags & F_ZERO && !(ph->flags & F_DOT) && ph->len)
		{
			ph->precision = ph->width;
			ph->len = ph->width;
		}
	}
	return (i);
}

static void	ft_createstr(char *s, long num, int i, t_placeholder ph)
{
	ft_memset(s, ' ', ph.width);
	if (ph.precision)
		ft_memset(s + ph.width - ph.len, '0', ph.precision);
	if (num < 0)
	{
		num *= -1;
		s[ph.width - ph.len] = '-';
	}
	else if (ph.flags & F_PLUS)
		s[ph.width - ph.len] = '+';
	else if (ph.flags & F_SPACE)
		s[ph.width - ph.len] = ' ';
	if (!num && !(ph.flags & F_DOT && !ph.precision))
		s[--i] = '0';
	while (num)
	{
		s[--i] = num % 10 + 48;
		num /= 10;
	}
}

int	ft_printf_d(long num, t_placeholder ph)
{
	char	*s;
	int		i;

	i = ft_handleflags(num, &ph);
	s = (char *)malloc(sizeof(char) * ph.width);
	if (!s)
		return (0);
	ft_createstr(s, num, i, ph);
	write(1, s, ph.width);
	free(s);
	return (ph.width);
}
