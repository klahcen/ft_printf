/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convbase_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:57:49 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/21 13:20:21 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_convbase_x(unsigned int n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_convbase_x(n / 16);
		count += ft_putchar(base[n % 16]);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}
