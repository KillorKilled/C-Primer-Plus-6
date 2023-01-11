//5.15 pound.c 程序
//pound.c -- 通过此例学习带参数的函数怎么表达，每个符号什么意思
//注意实参和形参的概念区别

#include <stdio.h>
void pound(int n);	//没有返回值所以前面是void，形式参数n是int型的

int main(void) {
	int times = 5;
	char ch = '!';
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}

void pound(int n) {
	while (n-- > 0)
		printf("#");
	printf("\n");

}