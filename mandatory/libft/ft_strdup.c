/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:45:17 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/19 17:01:34 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	int		i;

	i = ft_strlen(s);
	s1 = ((char *)malloc(sizeof(char) * (i + 1)));
	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int main(void)
{
	const char *s = "jfi4";
	char *t;

	t = ft_strdup(s);
	printf("%s\n", t);
	free (t);
	return (0);
}*/
