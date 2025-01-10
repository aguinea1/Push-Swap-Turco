/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:52:55 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/16 17:37:11 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	unsigned char		uc;

	s1 = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*s1 == uc)
			return ((void *)s1);
		n--;
		s1++;
	}
	return (NULL);
}
/*
int main(void)
{
	size_t	n = 24;
	int	c = 'a';
	const void *s = "hola";
	char 	*result;


	result = ft_memchr(s, c, n);
	printf("%s\n", result);
	return(0);
}*/
