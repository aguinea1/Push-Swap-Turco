/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:42 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/21 20:25:37 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src == dest || n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main(void)
{
	const void	*s = "hola";
	size_t	n = 10;
	void   *d = malloc(n + 1);

	((char *)d)[n] = '\0';
	printf("%s\n", (char *)d);
	free (d);
	return (0);
}*/
