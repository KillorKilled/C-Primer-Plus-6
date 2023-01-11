//5.13 addemup.c 程序
//addemup.c -- 几种常见的语句求0到20的和
//没什么好说的

#include <stdio.h>

int main(void) {
	int count, sum;

	count = 0;
	sum = 0;
	while (count++ < 20)
		sum = sum + count;
	printf("sum = %d\n", sum);

	return 0;
}
