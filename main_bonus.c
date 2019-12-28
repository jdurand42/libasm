#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"

int main()
{
	char s[] = "abcdef";
	char s2[] = "abcdef";
	char s3[] = "abcdef";
	printf("s:%s\n", s);
	ft_bzero(s, 6);
	printf("s:%s\n", s);
	printf("test s+4: %c\n", s[3]);
	ft_bzero(s2, 0);
	printf("test 0, s:%s\n", s2);
	ft_bzero(s3, 9);
	printf("test overflow:%s\n", s3);
}
