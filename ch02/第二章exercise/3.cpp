//2.12编程练习
/*编写一个程序把你的年龄换成天数，并显示这两个值，不用考虑闰年的问题*/
#include <stdio.h>

int main(void) {
	int years, days;
	const int days_per_year = 365;
	printf("你的年龄是？\n");
	scanf("%d", &years);
	days = days_per_year * years;
	printf("你的年龄即是%d天\n", days);

	return 0;
}