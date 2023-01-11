//5.8 sizeof.c 程序
//sizeof.c -- 通过学习本例了解sizeof运算符和size_t类型
//使用C99新增的转换说明：%zd 没什么好说的

#include <stdio.h>

int main(void) {
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n = %d,n has %zd bytes; all ints have %zd bytes.\n"
	       , n, sizeof n, intsize);

	return 0;
}