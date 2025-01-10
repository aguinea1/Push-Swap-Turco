/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:07:15 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/16 11:50:57 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	size_t	i = 0;
	size_t	n = 50;
	void	*s = malloc(n);

	if (!s)
		printf("malloc failed\n");
	ft_bzero(s, n);
	printf("%d\n", ((unsigned char *)s)[i]);
	free (s);
	return (0);
}*/
