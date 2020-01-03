#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"

typedef struct s_list
{
	void 	*data;
	struct 	s_list *next;
} t_list;

t_list *lst_new(void *content, int id)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list*))))
		return (NULL);
	if (!(new->data = malloc(sizeof(void*))))
		return (NULL);
	new->next = 0;
}

void 	lst_add(t_list *list, t_list *new, int *id)
{
	if (list == NULL)
	{
		list->data = id;
		list->new = NULL;
	}
	while (list->next != NULL)
	{
		list
	}
}

int main()
{
	char s[] = "abcdef";
	char s2[] = "abcdef";
	char s3[] = "abcdef";
	int a = 1;
	int b = 2;
	int c = 3;
	t_list *list = NULL;


}
