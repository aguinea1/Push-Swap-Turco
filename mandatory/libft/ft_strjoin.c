/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:55:12 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/17 15:59:01 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	int		p;
	int		d;
	char	*s3;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1);
	n = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (i + n + 1));
	if (!s3)
		return (NULL);
	p = -1;
	while (i > ++p)
		s3[p] = s1[p];
	d = -1;
	while (n > ++d)
		s3[p + d] = s2[d];
	s3[p + d] = '\0';
	return (s3);
}
/*
int main ()
{
	  char *string1 = "hola ";
	  char *string2 = "jefe";
	  char *result;
	  
	  result = ft_strjoin(string1, string2);
	  return(0);
}*/
