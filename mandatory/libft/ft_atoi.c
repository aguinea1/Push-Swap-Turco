/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:28:41 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/20 02:35:19 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (*nptr == 32 || (8 < *nptr && *nptr < 14))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		i++;
		if (*nptr == '-')
			sign = -1;
		nptr++;
		if (i >= 2)
			return (0);
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 +(*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
