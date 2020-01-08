#include <stdio.h>
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
	printf("stdin: ret: %d---%s\n", ret, b);
	close(fd);

	fd = open("main.c", O_RDONLY);
	ret = ft_read(fd, b, 3);
	b[ret] = 0;
	printf("stdin: ret: %d---%s\n", ret, b);
	close(fd);
}

void	ft_test_cpy()
{
	char *ret = NULL;
	char d[] = "11111111111";
	char s[] = "222222";
	char e[] = "";
	char n[] = "dsqdqd";
	printf("before copy ->\nd: %s\ns: %s\nret: %s\n", d, s, ret);
	ret = ft_strcpy(d, s);
	printf("after copy ->\nd: %s\ns: %s\nret: %s\n", d, s, ret);
	printf("d[7] -- %c \n", d[7]);
	ret = ft_strcpy(n, e);
	printf("srcs empty d: %s\n", ret);

	char *ret2 = NULL;
	char d2[] = "richardcoeurdelion";
	char s2[] = "henri";
	printf("before copy->\nd: %s\ns: %s\nret: %s\n", d2, s2, ret2);
	ret2 = ft_strcpy(d2, s2);
	printf("after copy->\nd: %s\ns: %s\nret: %s\n", d2, s2, ret2);
	printf("d[7] -- %c \n", d2[7]);

	char *ret3 = NULL;
	char d3[] = "richa";
	char s3[] = "henri";
	printf("before copy->\nd: %s\ns: %s\nret: %s\n", d3, s3, ret3);
	ret2 = ft_strcpy(d3, s3);
	printf("after copy->\nd: %s\ns: %s\nret: %s\n", d3, s3, ret3);
	//printf("d[7] -- %c \n", d3[]);
}

void 	ft_test_strcmp()
{
	printf("comp 1 _mine: %d\ncomp 1 _officiel : %d\n", ft_strcmp("hello", "haurevoir"), strcmp("hello", "haurevoir"));
	printf("-----------\n");
	printf("comp 2 _mine: %d\ncomp 2 _officiel : %d\n", ft_strcmp("hello", "hello"), strcmp("hello", "hello"));
	printf("-----------\n");
	printf("comp 3 _mine: %d\ncomp 3 _officiel : %d\n", ft_strcmp("hello", "hellz"), strcmp("hello", "hellz"));
	printf("-----------\n");
	printf("comp null _mine: %d\ncomp empty _officiel : %d\n", ft_strcmp("", ""), strcmp("", ""));
	printf("-----------\n");
	printf("comp null _mine: %d\ncomp empty _officiel : %d\n", ft_strcmp("d", ""), strcmp("d", ""));
	printf("-----------\n");
	printf("comp null _mine: %d\ncomp empty _officiel : %d\n", ft_strcmp("d", "ddd"), strcmp("d", "ddd"));
	//printf("comp null _mine: %d\ncomp empty _officiel : %d\n", ft_strcmp(NULL, NULL), strcmp(NULL, NULL));

}

void	ft_test_strlen()
{
	printf("ret ft_strlen: %zu\n", ft_strlen("richard"));
	printf("ret strlen: %zu\n", strlen("richard"));
	printf("ret ft_strlen big string: %zu\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	printf("ret strlen big string: %zu\n", strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	printf("ret strlen empty: %zu\n", ft_strlen(""));
}

void	ft_test_strdup()
{
//	char s[] = "succes";

	printf("strdup: %s\n", ft_strdup("lololol comme ca 3 fois"));
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
	int fd = open("./fichier.txt", O_WRONLY);
	printf("fd: %d\n", fd);
	printf("write into fichier.txt:-----\n");
	ft_write(fd, "OIOIOIOOIOIOIOIOIOIOIOIOI\n", sizeof("OIOIOIOOIOIOIOIOIOIOIOIOI\n"));
	write(1, "TEST WRITE\n", sizeof("TEST WRITE\n"));
	printf("ret write stdout: %zd\n", write(1, "test 1, normal, fd 1\n", 12));
	close(fd);

	printf("-----------\n");
	ft_test_read();
	printf("-----------\n");
	ft_test_cpy();
	printf("-----------\n");
	ft_test_strcmp();
	printf("-----------\n");
	ft_test_strlen();
	printf("-----------\n");
	ft_test_strdup();
	printf("END ----------\nThank you, come back :)\n");
	return (0);
}
