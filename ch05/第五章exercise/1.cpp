/*
	1. 编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间
	使用#define和const表示创建一个表示60的符号常量或const变量
	通过while让用户重复输入值，直到用户输入的值小于或等于0的值才停止循环
*/

#include <stdio.h>
#define HOUR_PER_MIN 60

int main(void) {
	int min_times;
	int hours;
	int minutes;

	printf("This program convert time to be accumulated by hours and minutes\n");
	printf("Please enter a time(min):\n");
	scanf("%d", &min_times);
	while (min_times > 0) {
		hours = min_times / HOUR_PER_MIN;
		minutes = min_times % HOUR_PER_MIN;
		printf("The converted time is %d hours plus %d minutes\n", hours, minutes);
		printf("Please enter a next time:\n");
		scanf("%d", &min_times);

	}
	return 0;
}