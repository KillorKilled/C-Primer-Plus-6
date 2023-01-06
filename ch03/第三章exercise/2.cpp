/*
	2.
	编写一个人程序，要求提示输入一个ASCII码的值（如，66）
	然后打印输入的字符
*/

#include <stdio.h>

int main(void) {
	char ch;

	printf("请输入一个ASCII码的值:");
	scanf("%d", &ch);
	printf("该ASCII码对应输出的字符是：%c", ch);

	return 0;
}