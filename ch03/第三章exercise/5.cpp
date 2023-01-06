/*
	5.
	一年大约有3.156e7秒。编写一个程序，提示用户输入年龄，
	然后显示该年龄对应的秒数
*/

#include <stdio.h>
#define SEC_PER_YEAR 3.156E7

int main(void) {
	int ages;

	printf("Please enter your age:");
	scanf("%d", &ages);
	printf("%d years old includes %e s", ages, ages * SEC_PER_YEAR);

	return 0;
}