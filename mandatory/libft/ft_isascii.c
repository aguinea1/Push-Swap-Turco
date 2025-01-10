/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:37:57 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/15 13:08:13 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && 127 >= c)
	{
		return (1);
	}
	else
		return (0);
}
/*
int main(void)
{
	char	ch = 'A';
	int	i;

	i = ft_isascii(ch);

	if (i == 1)
		printf("%d es ascii\n",ch);
	if (i == 0)
		printf("%d no es ascii\n", ch);
	return (0);
}*/
