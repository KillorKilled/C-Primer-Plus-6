/*
	4.
	��дһ�����򣬶�ȡһ�����������ȴ�ӡ��С����ʽ���ٴ�ӡ��ָ��
	��ʽ��Ȼ�����ϵͳ֧�֣��ٴ�ӡ��p����������ʮ�����Ƽ��������������¸�ʽ�����
	Enter a floating-point value:64.25
	fixed-point natation: 64.250000
	exponential notation: 6.425000e+01
	p notation: 0x1.01p+6
*/
#include <stdio.h>

int main(void) {
	float value ;

	printf("Enter a floating-point value:");
	scanf("%f", &value);
	printf("fixed-point natation:%f\n", value);
	printf("exponential notation:%e\n", value);
	printf("p notation:%a", value);

	return 0;
}