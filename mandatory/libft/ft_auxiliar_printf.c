/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliar_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:23:48 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/12 11:26:57 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		return (ft_print_str("(null)"));
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_num(int n)
{
	int	len;

	len = 0;
	len = ft_int_len(n);
	ft_putnbr_fd(n, 1);
	return (len);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	num;
	int				len;

	if (ptr == 0)
	{
		len = ft_print_str("(nil)");
	}
	else
	{
		write(1, "0x", 2);
		len = 2;
		num = (unsigned long)ptr;
		len += ft_atoi_hex(num, 1);
	}
	return (len);
}
