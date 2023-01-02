//2.12编程练习
/*
	许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出
	Smile!Smile!Smile!
	Smile!Smile!
	Smile!
	该程序要定义一个函数，该函数被调用一次打印一次"Smile!",根据程序的需要使用该函数。
*/
#include <stdio.h>
void PrintfSmile(void);

int main(void) {
	PrintfSmile();
	PrintfSmile();
	PrintfSmile();
	printf("\n");

	PrintfSmile();
	PrintfSmile();
	printf("\n");

	printf("Smile!");
	return 0;
}

void PrintfSmile(void) {
	printf("Smile!");
}

//没学循环就简单用printf