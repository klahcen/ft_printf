/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:48:42 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/21 13:40:18 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
	{
		count += ft_unsigned(nbr / 10);
		count += ft_putchar(nbr % 10 + 48);
	}
	else
		count += ft_putchar(nbr + 48);
	return (count);
}
