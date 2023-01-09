//4.17 skip2.c 程序
//skip2.c -- 通过此例学习修饰符*在scanf中的作用:跳过输入

#include <stdio.h>

int main(void) {
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integers was %d\n", n);

	return 0;
}