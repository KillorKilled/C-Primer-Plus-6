/*
	�޸ı����ϰ5�ĳ���ʹ���ܹ�����������ƽ���ͣ�������Ϊ��һ��׬1$,�ڶ���׬4$���Դ����ƣ�

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