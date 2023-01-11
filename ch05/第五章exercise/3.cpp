/*
	3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。
	例如：用户输入18，则转换成2周4天。以下面的格式显示结果
	18 days are 2 weeks, 4 days.
	通过while循环让用户重复输入天数，当用户输入一个非正值时，程序结束。
*/
#include <stdio.h>

int main(void) {

	int times, weeks, days;

	printf("This program convert times to weeks and days\n");
	printf("Then,please enter the times(days):\n");
	scanf("%d", &times);
	while (times > 0) {
		weeks = times / 7;
		days = times % 7;
		printf("%d days are %d weeks, %d days.\n", times, weeks, days);
		printf("Then,please enter next time:\n");
		scanf("%d", &times);
	}

	return 0;

}