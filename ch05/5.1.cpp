//5.1 shoes1.c程序
//shoes1.c -- 把鞋码换成英寸
//通过这个程序把格式对齐好

#include <stdio.h>
#define ADJUST 7.31 //字符常量

int main(void) {
	const double SCALE = 0.333;
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe  size (men's)    foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);

	return 0;
}
