//4.17 skip2.c ����
//skip2.c -- ͨ������ѧϰ���η�*��scanf�е�����:��������

#include <stdio.h>

int main(void) {
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integers was %d\n", n);

	return 0;
}