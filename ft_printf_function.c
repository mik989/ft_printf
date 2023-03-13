/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:03:09 by mgirardi          #+#    #+#             */
/*   Updated: 2022/10/21 15:06:39 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_print_c(char c)
{
	return (ft_putchar_fd(c, 1));
}

int	ft_print_s(char *c)
{
	if (!c)
	{
		return (ft_putstr_fd("(null)", 1));
	}
	else
	{
		return (ft_putstr_fd(c, 1));
	}
}

int	ft_print_p(unsigned long int ptr, int fd)
{
	int	n_char;

	n_char = 0;
	if (!ptr)
	{
		return (ft_putstr_fd("(nil)", fd));
	}
	n_char = ft_putstr_fd("0x", 1);
	n_char += ft_putnbr_basep_fd(ptr, fd, "0123456789abcdef");
	return (n_char);
}
