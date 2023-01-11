//5.2 shoes2.c 程序
//shoes2.c -- 通过此例看看循环在处理重复计算的好处

#include <stdio.h>
#define ADJUST 7.31 //字符常量

int main(void) {
	const double SCALE = 0.333;
	double shoe, foot;

	shoe = 3.0;

	printf("Shoe  size (men's)    foot length\n");
	while (shoe < 18.5) {
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe++;
	}

	return 0;
}                                                                                                                                                                                                                                                