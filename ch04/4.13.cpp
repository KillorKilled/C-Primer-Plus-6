//4.13 prntval.c ����
//prntval.c -- ͨ������ѧϰprintf����ֵ�ĺ��壺�ַ������������ַ��������ո�\n��
//�����ڼ��������󣬱���д���ļ�

#include <stdio.h>

int main(void) {
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);

	return 0;
}