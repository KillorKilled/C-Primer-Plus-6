/*
	修改程序addemup.c程序（例5.13），你可以认为addemup.c是计算20天里赚多少钱的程序。
	假设第一天赚1$，第二天赚2$以此类推。
	修改程序，使其可以与用户交互，根据用户数输入的数计算（即，用读入的一个变量来代替20）
*/

#include <stdio.h>

int main(void) {
	int days, sum, count;
	printf("Please enter yours earning days:");
	scanf("%d", &days);

	count = 0;
	sum = 0;
	while (count++ < days)
		sum = sum + count;
	printf("sum = %d$\n", sum);

	return 0;

}