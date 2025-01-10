/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:15:13 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/22 14:37:24 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
/*
int main(void)
{
	char *contenido = "cghugeib";
	t_list *nodo =ft_lstnew(contenido);

	 printf("Contenido del nodo: %s\n", (char *)nodo->content);

	 free (nodo);
	 return (0);
}*/
