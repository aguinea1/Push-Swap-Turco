/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typeofprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:56:06 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/12 11:27:53 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_typeofprint(va_list *arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_char(va_arg(*arg, int));
	else if (c == 's')
		len += ft_print_str(va_arg(*arg, char *));
	else if (c == 'p')
		len += ft_print_ptr(va_arg(*arg, void *));
	else if (c == 'd' || c == 'i')
		len += ft_print_num(va_arg(*arg, int));
	else if (c == 'u')
		len += ft_print_unsigned(va_arg(*arg, unsigned int));
	else if (c == 'X')
		len += ft_upper(va_arg(*arg, int));
	else if (c == 'x')
		len += ft_lower(va_arg(*arg, int));
	else if (c == '%')
		len += ft_print_char('%');
	return (len);
}
