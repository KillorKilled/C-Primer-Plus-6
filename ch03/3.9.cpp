//3.9 badcount.c程序
/*badcount.c -- 参数错误的情况
  通过此例学习参数少、参数多、参数错误的情况*/

#include <stdio.h>

int main(void) {
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m); //参数太多
	printf("%d %d %d\n", n); //参数太少
	printf("%d %d\n", f, g); //值类型不匹配、

	return 0;
	//注意以后写程序的时候参数类型要匹配很重要
}
