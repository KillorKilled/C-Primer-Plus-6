//4.14 longstrg.c 程序
//longstrg.c -- 通过此例学习打印较长字符串的三种表示，第三种我比较喜欢

#include <stdio.h>

int main(void) {
	printf("Here's one way to print a ");
	printf("long string.\n");

	printf("Here's another way to print a \
long string.\n");	//第二行记得顶格！！

	printf("Here's the newest way to print a "
	       "long string.\n"); //ANSI C

	return 0;
}