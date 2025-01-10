/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:21:58 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/17 10:43:09 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (array == 0)
		return (NULL);
	ft_bzero (array, nmemb * size);
	return (array);
}
/*
int main(void)
{

	size_t	i = 0;
	int	*h;
	size_t	n = 4;
	size_t	nmeb = 5;

	h = (int *)ft_calloc(n, nmeb);
	printf("%d\n", h[i]);
	return (0);
}*/
