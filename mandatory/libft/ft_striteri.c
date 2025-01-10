/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:50:50 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/20 13:32:07 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!f || !s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_h(unsigned	int i, char *c)
{
	if  (i < 5)
		*c = 'h';
	else
		*c ='o';
}
int main(void)
{
	char	*s = "asdfghuji";
	char	*result;

	ft_striteri(s, ft_h);
	printf("%s\n", s);
	return (0);
}*/
