/*
	4.
	编写一个程序，读取一个浮点数，先打印成小数形式，再打印成指数
	形式。然后，如果系统支持，再打印成p记数法（即十六进制计数法）。按以下格式输出：
	Enter a floating-point value:64.25
	fixed-point natation: 64.250000
	exponential notation: 6.425000e+01
	p notation: 0x1.01p+6
*/
#include <stdio.h>

int main(void) {
	float value ;

	printf("Enter a floating-point value:");
	scanf("%f", &value);
	printf("fixed-point natation:%f\n", value);
	printf("exponential notation:%e\n", value);
	printf("p notation:%a", value);

	return 0;
}