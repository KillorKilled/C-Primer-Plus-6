/*
	2. ��дһ��������ʾ�û�����һ��������Ȼ��
	��ӡ�Ӹ������ȸ�����10���������������磬����5����ӡ5-15��.
	Ҫ���ӡ�ĸ�ֵ֮����һ���ո����
*/

#include <stdio.h>

int main(void) {
	int num, divide;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	divide = num + 10;
	while (num <= divide) {
		printf(" %d", num);
		num++;
	}

	return 0;
}