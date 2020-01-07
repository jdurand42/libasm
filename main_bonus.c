#include <stdio.h>
#include <stdlib.h>
#include "./bonus/libasm_bonus.h"

int main()
{
	char s[] = "abcdef";
	char s2[] = "abcdef";
	char s3[] = "abcdef";
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	t_list *lst = NULL;
	int *buffer_int;
/*	ft_lstadd_front(&lst, ft_lstnew(&a));
	ft_lstadd_front(&lst, ft_lstnew(&b));
	ft_lstadd_front(&lst, ft_lstnew(&c));
	ft_lstadd_front(&lst, ft_lstnew(&d));
	buffer_int = (int*)lst->data;
	printf("check list: first ele: %d\n", *buffer_int);
	printf("TEST LST_SIZE: ----------\n");
	printf("size of lst (4): %d\n", ft_list_size(lst));
	printf("size of lst 0 (null)(4): %d\n", ft_list_size(NULL));
*/
	t_list *lst_null = NULL;
	printf("TEST LIST_PUSH_FRONT ----------\n");
	ft_list_push_front(NULL, &a);
	printf("test with pointeur null ok\n");
//	printf("%zu\n", sizeof(t_list*));
//	printf("%zu\n%zu\n", sizeof(lst->data), sizeof(lst->next));
	ft_list_push_front(&lst_null, &a);
	buffer_int = (int*)lst_null->data;
	printf("lst_null test: %d\n", *buffer_int);
//	buffer_int = (int*)lst->data;
//	t_list *lst_null = NULL;
//	ft_list_push_front(&lst_null, &a);
//	buffer_int = (int*)lst_null->data;
//	printf("first elem, (1): %d\n", *buffer_int);
//	ft_list_remove_if(&alst, , &a, &ft_strcmp, NULL);
}
/*

a = 5;
*pa = &a
**ppa = &pa
**ppa = 5;
*ppa = pa
rdi -> ppa
[rdi] -> *ppa = pa = &a
*/
