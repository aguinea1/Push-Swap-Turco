/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:33:08 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/21 17:25:52 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			i;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (one[i] == two[i] && i < n - 1)
	{
		i++;
	}
	return (one[i] - two[i]);
}
/*
int main(void)
{
	const	void *s1 = "hola";
	const	void *s2 = "hola";
	size_t	n = 4;
	int	result;

	result = ft_memcmp(s1, s2, n);
	printf("%i\n", result);
	return (0);
}*/
