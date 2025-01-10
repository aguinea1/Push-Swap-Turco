/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:29:45 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/12 11:27:15 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = ft_unsigned_len(n);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putchar_fd(n % 10 + '0', 1);
	}
	else
		ft_putchar_fd(n + '0', 1);
	return (len);
}

int	ft_upper(int n)
{
	int	len;

	len = 0;
	len = ft_atoi_int(n, 2);
	return (len);
}

int	ft_lower(int n)
{
	int	len;

	len = 0;
	len = ft_atoi_int(n, 1);
	return (len);
}

int	ft_unsigned_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
