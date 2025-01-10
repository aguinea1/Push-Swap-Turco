/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvini@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:31:23 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/20 10:43:29 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_array(char **arr, int size)
{
	while (size > 0)
	{
		size--;
		free(arr[size]);
	}
	free(arr);
	return (NULL);
}

int	ft_substr_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	ft_count_word(char const *s, char c)
{
	int	word_num;
	int	in_word;

	in_word = 0;
	word_num = 0;
	while (*s)
	{
		if (*s && *s != c && in_word == 0)
		{
			word_num++;
			in_word = 1;
		}
		else if (*s && *s == c)
			in_word = 0;
		s++;
	}
	return (word_num);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		letter_count;
	char	**result;

	result = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	k = 0;
	i = 0;
	while (i < ft_count_word(s, c))
	{
		while (s[k] == c)
			k++;
		letter_count = 0;
		while (s[k + letter_count] != '\0' && s[k + letter_count] != c)
			letter_count++;
		result[i] = ft_substr(s, k, letter_count);
		if (result[i++] == NULL)
			return (ft_free_array(result, i));
		k = k + letter_count;
	}
	result[i] = NULL;
	return (result);
}
/*
int	main(void)
{
	int	i;
	char **result;

	i = 0;
	result = ft_split("     HOLA BUENAS TARDES    ", ' ');
	if (result == NULL)
		return (1);
	while (result[i])
	{
		printf("%s\n",result[i]);
		//free(result[i]);
		i++;
	}
	//free(result);
	return (0);
}*/
