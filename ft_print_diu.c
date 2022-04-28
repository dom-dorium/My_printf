/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:40:12 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/28 13:05:52 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (ft_intlen(n));
}

int	ft_putnbrpos(unsigned int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		ft_putnbrpos(n / 10);
		ft_putnbrpos(n % 10);
	}
	return (ft_intlen(n));
}
