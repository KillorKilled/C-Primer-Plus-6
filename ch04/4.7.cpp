//4.7 width.c ����
// width.c -- �ַ����
//ͨ������ѧϰprintf��ӡ�ַ���ȵĸ�ʽ

#include <stdio.h>
#define PAGES 959

int main(void) {
	printf("*01234567890123456789*\n");
	printf("*%2d*\n", PAGES);   //�����ֶο�ȣ�����3λ���֣������ֶο���Զ�����
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);	//��-����ʾ�����

	return 0;
}