/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:12:21 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/22 18:13:31 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>
# include<stddef.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_convbase(unsigned long nbr);
int	ft_convbase_up(unsigned int n);
int	ft_convbase_x(unsigned int nbr);
int	ft_printf(const char *forma, ...);
int	ft_unsigned(unsigned int nbr);
int	ft_strlen(char *a);

#endif
