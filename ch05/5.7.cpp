//5.7 rules.c 程序
//rules.c -- 通过此例学习运算符的优先级问题
//没什么好说的
#include <stdio.h>

int main(void) {
	int top, score;

	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
	printf("top = %d,score = %d\n", top, score);

	return 0;
}