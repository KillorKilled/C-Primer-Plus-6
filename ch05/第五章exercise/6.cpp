/*
	修改编程练习5的程序，使其能够计算整数的平方和（可以认为第一天赚1$,第二天赚4$，以此类推）

*/

#include <stdio.h>

int main(void) {
	int days, sum, count;
	printf("Please enter yours earning days:");
	scanf("%d", &days);

	count = 0;
	sum = 0;
	while (count++ < days)
		sum = sum + count * count;
	printf("sum = %d$\n", sum);

	return 0;

}