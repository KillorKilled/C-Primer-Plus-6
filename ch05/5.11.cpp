//5.11 post_pre.c 程序
//post_pre.c -- 递增前缀和后缀

#include <stdio.h>

int main(void) {
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;	//后缀：后加
	pre_b = ++b;	//前缀：先加
	printf("a  a_post    b    b_post \n");
	printf("%ld   %5d%5d%5d\n", a, a_post, b, pre_b);

	return 0;
}

//尽管如此，在写代码的时候仍应该小心些，尽量将可读性放在前位