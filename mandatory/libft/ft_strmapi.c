/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:08:57 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/20 12:45:26 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*s1;

	i = 0;
	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
char	ft_h(unsigned	int i, char c)
{
	if  (i < 5)
		c = 'h';
	else
		c ='o';
	return (c);
}
int main(void)
{
	char	*s = "asdfghuji";
	char	*function = ft_strmapi(s, ft_h);

	printf("%s\n", function);
	return (0);
}*/
