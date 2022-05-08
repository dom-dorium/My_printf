/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:13:37 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/29 12:26:01 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	if (i == n)
		return (1);
	return (0);
}