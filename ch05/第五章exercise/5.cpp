/*
	�޸ĳ���addemup.c������5.13�����������Ϊaddemup.c�Ǽ���20����׬����Ǯ�ĳ���
	�����һ��׬1$���ڶ���׬2$�Դ����ơ�
	�޸ĳ���ʹ��������û������������û�������������㣨�����ö����һ������������20��
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