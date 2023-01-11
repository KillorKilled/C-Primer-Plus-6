//5.10 add_one.c 程序
//add_one.c -- 通过此例学习递增运算符前缀和后缀的区别

#include <stdio.h>

int main(void) {
	int ultra = 0, super = 0;

	while (super < 5) {
		super++;
		++ultra;
		printf("super = %d,ultra = %d \n", super, ultra);

	}

	return 0;
}
//其实这里二者的区别并没有体现出来！看下一个例子