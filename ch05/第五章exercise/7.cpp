/*
	7. 编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值，
	自己设计一个函数计算并打印立方值，main()函数要把用户输入的值传递给该函数
*/
#include <stdio.h>

double cal_square(double num);

int main(void) {
	double input;
	printf("Please enter a double number:");
	scanf("%lf", &input);
	printf("%.2lf's square is %.2lf", input, cal_square(input));

	return 0;
}

double cal_square(double num) {
	double ending;
	ending = num * num * num;
	return ending;
}
