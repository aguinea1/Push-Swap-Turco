/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:04:02 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/20 18:36:12 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	len;
	size_t	i;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	len = dst_l + src_l;
	if (dst_l >= size)
		return (src_l + size);
	i = dst_l;
	while (*src && i < size - 1)
	{
		dst[i] = *src++;
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
	char *dest = "bof";
	size_t	result;

	result = ft_strlcat(dest, src, i);
	printf("%li\n", result);
	return (0);
}*/
