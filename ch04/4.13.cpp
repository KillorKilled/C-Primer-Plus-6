//4.13 prntval.c 程序
//prntval.c -- 通过此例学习printf返回值的含义：字符个数（所有字符，包括空格，\n）
//可用于检查输出错误，比如写入文件

#include <stdio.h>

int main(void) {
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);

	return 0;
}