//5.3 golf.c 程序
//golf.c -- 高尔夫竞标赛积分卡,通过此例看看三重赋值

#include <stdio.h>

int main(void) {
	int jane, tarzan, cheeta;

	cheeta = tarzan = jane = 68;
	printf("                    cheeta   tarzan   jane\n");
	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

	return 0;
}