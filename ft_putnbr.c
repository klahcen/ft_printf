/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:37:36 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/21 17:42:30 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		count;

	count = 0;
	nbr = n;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putchar(nbr % 10 + 48);
	}
	else
	count += ft_putchar(nbr + 48);
	return (count);
}
