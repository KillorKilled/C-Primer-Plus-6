/*
	2. 编写一个程序，提示用户输入一个整数，然后
	打印从该数到比该数大10的所有整数（例如，输入5，打印5-15）.
	要求打印的各值之间用一个空格隔开
*/

#include <stdio.h>

int main(void) {
	int num, divide;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	divide = num + 10;
	while (num <= divide) {
		printf(" %d", num);
		num++;
	}

	return 0;
}