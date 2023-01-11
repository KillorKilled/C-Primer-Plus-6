//5.5 wheat.c ����
//wheat.c -- С���ָ������

#include <stdio.h>
#define SQUARES 64 	//�����еķ�����

int main(void) {
	const double CROP = 2E16;	//����С�����������
	double current, total;
	int count = 1;

	printf("square    grains          total          fraction  of\n");
	printf("          added           qrains         world total\n");
	total = current = 1.0;		//��1�Ź�����ʼ

	while (count <= SQUARES) {
		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
		       total, total / CROP);
		count++;
		current = current * 2;
		total = total + current;
	}
	printf("Thats's all.\n");


	return 0;
}