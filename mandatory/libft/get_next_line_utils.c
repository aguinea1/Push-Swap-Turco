/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:02:43 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 19:24:26 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (array == 0)
		return (NULL);
	ft_bzero (array, nmemb * size);
	return (array);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

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

char	*ft_strjoin(char *buffer, char *buff)
{
	int		i;
	int		n;
	int		p;
	int		d;
	char	*s3;

	if (!buff || !buffer)
		return (NULL);
	i = ft_strlen(buffer);
	n = ft_strlen(buff);
	s3 = (char *)malloc(sizeof(char) * (i + n + 1));
	if (!s3)
		return (NULL);
	p = -1;
	while (i > ++p)
		s3[p] = buffer[p];
	d = -1;
	while (n > ++d)
	{
		s3[p + d] = buff[d];
	}
	s3[p + d] = '\0';
	return (s3);
}
