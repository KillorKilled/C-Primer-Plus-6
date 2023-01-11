//5.6 divide.c 程序
//divide.c -- 通过此例学习除法带来的截断问题：
//整数除法->整数：截断小数部分；整数+浮点数->浮点数
//一般情况应避免使用浮点类型

#include <stdio.h>

int main(void) {
	printf("integer division: 5/4 is %d \n", 5 / 4);
	printf("integer division: 6/3 is %d \n", 6 / 3);
	printf("integer division: 7/4 is %d \n", 7 / 4);
	printf("float division: 7./4. is %1.2f \n", 7. / 4.);
	printf("mixed division: 7./4 is %1.2f \n", 7. / 4);

	return 0;
}