/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:53:10 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/12 11:28:11 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_hex(unsigned long num, int upper)
{
	char	*hexlst;
	char	buffer[16];
	int		i;
	int		len;

	i = 0;
	hexlst = "0123456789ABCDEF";
	if (upper == 1)
		hexlst = "0123456789abcdef";
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (num != 0)
	{
		buffer[i++] = hexlst[num % 16];
		num /= 16;
	}
	len = i;
	while (i--)
		write (1, &buffer[i], 1);
	return (len);
}

int	ft_atoi_int(unsigned int num, int upper)
{
	char	*hexlst;
	char	buffer[16];
	int		i;
	int		len;

	i = 0;
	hexlst = "0123456789ABCDEF";
	if (upper == 1)
		hexlst = "0123456789abcdef";
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = hexlst[num % 16];
		num /= 16;
	}
	len = i;
	while (i--)
		write (1, &buffer[i], 1);
	return (len);
}
