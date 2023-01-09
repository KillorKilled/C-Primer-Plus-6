//4.7 width.c 程序
// width.c -- 字符宽度
//通过此例学习printf打印字符宽度的格式

#include <stdio.h>
#define PAGES 959

int main(void) {
	printf("*01234567890123456789*\n");
	printf("*%2d*\n", PAGES);   //两个字段宽度，但是3位数字，所以字段宽度自动扩大
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);	//‘-’表示左对齐

	return 0;
}