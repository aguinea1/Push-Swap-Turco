/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:09:38 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/21 20:25:11 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main(void)
{
	size_t i = 0;
	const char *src = "hola";
	char dest[100];
	size_t	result;

	result = ft_strlcpy(dest, src, i);
	printf("%li\n", result);
	return (0);
}*/
