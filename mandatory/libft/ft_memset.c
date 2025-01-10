/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:43:35 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/20 18:11:51 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main(void)
{
	char	s[11];
	int	c = 'A';
	size_t	n = 10;
	
	ft_memset(s, c, n);
	s[10] = '\0';

	printf("%s\n",s);
	return (0);
}*/
