/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:03:24 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/19 18:38:04 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	j;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (j && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, 0, j + 1));
}
/*
int main ()
{
	char	*s1 = "hola";
	char	*set = "h";
	char	*s2;

	s2 = ft_strtrim(s1, set);
	printf("%s\n", s2);
	return (0);
}*/
