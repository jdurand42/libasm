#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"


void	ft_test_read(void)
{
	int ret;
	char b[100];
	
	ret = ft_read(0, b, 99);
	b[ret] = 0;
	printf("stdin: ret: %d@%s\n", ret, b);
}

void	ft_test_cpy()
{
	char *ret;
	char d[] = "11111111111";
	char s[] = "222222";
	ret = ft_strcpy(d, s);
	printf("d: %s\ns: %s\nret: %s\n", d, s, ret);
}

int main(int ac, char **av)
{
	write(1, "TEST WRITE\n", sizeof("TEST WRITE\n"));
	ft_write(1, "test 1, normal, fd 1\n", sizeof("test 1, normal, fd 1\n"));
	//ft_test_read();
	ft_test_cpy();
	return (0);
}
