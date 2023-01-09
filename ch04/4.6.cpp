//4.6 printout.c程序
//通过此例学习print函数的一些转换说明符的含义输出的格式
//printf( 格式字符串，待打印项1，待打印项2，...)
#include <stdio.h>
#define PI 3.141593

int main(void) {
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestant ate %f berry pies.\n",
	       number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);

	return 0;
}