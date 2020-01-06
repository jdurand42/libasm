/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 19:18:44 by jdurand           #+#    #+#             */
/*   Updated: 2020/01/06 20:13:34 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

typedef struct s_list
{
	void 	*data;
	struct 	s_list *next;
} t_list;

ssize_t	ft_write(size_t fd, const char *s, size_t size);
ssize_t	ft_read(size_t fd, char *buffer, size_t buffer_size);
char	*ft_strcpy(char *dest, char *src);
void	ft_bzero(void *s, size_t n);
int	ft_atoi(const char *s);
int	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char *ft_strdup(const char *s);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstnew(const void *data);

int		ft_list_size(t_list *lst);
void 	ft_list_push_front(t_list **alst, void *data);
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
