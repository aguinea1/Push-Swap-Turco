/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:28:17 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/19 17:07:44 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	n;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (len > i - start)
		len = i - start;
	if (i <= start)
		return (ft_strdup(""));
	s1 = (char *)ft_calloc((len + 1), sizeof(char));
	if (s1 == NULL)
		return (NULL);
	n = 0;
	while (n < len)
	{
		s1[n] = s[n + start];
		n++;
	}
	s1[n] = '\0';
	return (s1);
}
/*
int main(void)
{
	char *s = "oghswuiwu";
	int start = 3;
	size_t len = 4;
	char *result;

	result = ft_substr(s, start, len);
	printf("%s\n", result);
	return (0);
}*/
