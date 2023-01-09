//4.8 floats.c 程序
// float.c -- 通过此例学习一些浮点型修饰符的组合

#include <stdio.h>

int main(void) {
	const double RENT = 3852.99;	//默认小数点后带六位

	printf("*01234567890123456789*\n");
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);	//最小字段宽度.位数
	printf("*%3.1f*\n", RENT);	//四舍五入
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);//空出来的用零填充

	return 0;
}