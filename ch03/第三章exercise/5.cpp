/*
	5.
	һ���Լ��3.156e7�롣��дһ��������ʾ�û��������䣬
	Ȼ����ʾ�������Ӧ������
*/

#include <stdio.h>
#define SEC_PER_YEAR 3.156E7

int main(void) {
	int ages;

	printf("Please enter your age:");
	scanf("%d", &ages);
	printf("%d years old includes %e s", ages, ages * SEC_PER_YEAR);

	return 0;
}