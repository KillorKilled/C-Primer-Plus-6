/*
	3.��дһ��������ʾ�û�����������Ȼ����ת����������������
	���磺�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ���
	18 days are 2 weeks, 4 days.
	ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ�����������
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