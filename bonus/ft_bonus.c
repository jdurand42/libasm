/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 18:34:54 by jdurand           #+#    #+#             */
/*   Updated: 2020/01/06 19:00:49 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_bonus.h"

t_list	*ft_lstnew(const void *data)
{
	t_list			*buffer;

	if (!(buffer = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!data)
		data = NULL;
	else
		buffer->data = (void*)data;
	buffer->next = NULL;
	return (buffer);
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new == NULL || alst == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	new->next = *alst;
	*alst = new;
}
