//4.8 floats.c ����
// float.c -- ͨ������ѧϰһЩ���������η������

#include <stdio.h>

int main(void) {
	const double RENT = 3852.99;	//Ĭ��С��������λ

	printf("*01234567890123456789*\n");
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);	//��С�ֶο��.λ��
	printf("*%3.1f*\n", RENT);	//��������
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);//�ճ������������

	return 0;
}