#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"
#include <sys/types.h>
#include <fcntl.h>



void	ft_test_read(void)
{
	int ret;
	char b[100];
	int fd;

	fd = open("main.c", O_RDONLY);
	
	
	ret = ft_read(fd, b, 99);
	b[ret] = 0;
	printf("stdin: ret: %d@%s\n", ret, b);
}

void	ft_test_cpy()
{
	char *ret;
	char d[] = "11111111111";
	char s[] = "222222";
	char *e = "";
	char *n = "dsqdqd";
	ret = ft_strcpy(d, s);
	printf("d: %s\ns: %s\nret: %s\n", d, s, ret);
	ret = ft_strcpy(n, e);
	printf("d: %s\n", ret);
	
}

void 	ft_test_strcmp()
{
	printf("comp 1 _mine: %d\ncomp 1 _officiel : %d\n", ft_strcmp("hello", "aurevoir"), strcmp("hello", "aurevoir"));
	printf("comp 2 _mine: %d\ncomp 2 _officiel : %d\n", ft_strcmp("hello", "hello"), strcmp("hello", "hello"));
	printf("comp 3 _mine: %d\ncomp 3 _officiel : %d\n", ft_strcmp("hello", "hellz"), strcmp("hello", "hellz"));
	printf("comp null _mine: %d\ncomp null _officiel : %d\n", ft_strcmp("", ""), strcmp("", ""));
}

void	ft_test_strlen()
{
	printf("ret strlen: %zu\n", ft_strlen("richard"));
	printf("ret strlen big string: %zu\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	printf("ret strlen empty: %zu\n", ft_strlen("")); 
}

void	ft_test_strdup()
{
//	char s[] = "succes";
	
	printf("strdup: %s\n", ft_strdup("lololo"));
	printf("ft_strdup null: %s\n", ft_strdup(NULL));
//	printf("strdup null: %s\n", strdup(NULL));
	char *sm = ft_strdup("lalala");
	free(sm);
	char *se = ft_strdup("");
	printf("strdup empty: %s\n", se);
	se[0] = '&';
	free(se);
}

int main(int ac, char **av)
{
	char buffer[12];
	write(1, "TEST WRITE\n", sizeof("TEST WRITE\n"));
	ft_write(1, "test 1, normal, fd 1\n", sizeof("test 1, normal, fd 1\n"));
	ft_test_read();
	ft_test_cpy();
	ft_test_strcmp();
	ft_test_strlen();
//	printf("bad fd official: %zd\n",write(3, "&", 1));
//	printf("bad fd mine: %zu\n", ft_write(3, "hhhh", 4));
//	printf("bad fd read official: %d\n", read(3, buffer, 11));
//	printf("bad fd read mine: %d\n", ft_read(3, buffer, 11));
	ft_test_strdup();
	return (0);
}
