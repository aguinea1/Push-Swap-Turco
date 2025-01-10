/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:09:17 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/12 11:26:31 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(char const *s, ...)
{
	va_list	arg;
	int		i;
	int		len;

	len = 0;
	va_start(arg, s);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			len += ft_typeofprint(&arg, s[i]);
		}
		else
			len += ft_print_char(s[i]);
		i++;
	}
	va_end (arg);
	return (len);
}
