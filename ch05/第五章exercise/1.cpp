/*
	1. ��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ��
	ʹ��#define��const��ʾ����һ����ʾ60�ķ��ų�����const����
	ͨ��while���û��ظ�����ֵ��ֱ���û������ֵС�ڻ����0��ֵ��ֹͣѭ��
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