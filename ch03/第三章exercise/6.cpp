/*
	6.
	1��ˮ���ӵ�����ԼΪ3.0e-23�ˡ�1����ˮ��Լ��950�ˡ�
	��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������
*/

#include <stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void) {
	int quart;
	printf("������ˮ�Ŀ�������");
	scanf("%d", &quart);
	printf("ˮ���ӵ�����Ϊ��%Ld", quart * MASS_PER_QUART / MASS_PER_MOLE);

	return 0;
}