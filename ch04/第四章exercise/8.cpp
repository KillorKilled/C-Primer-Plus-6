//8. ��дһ��������ʾ�û��������е���̺����ĵ���������Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ����
//	��ʾС�����һλ���֡�������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף�
//	�ѵ�λ��Ӣ����ص�ֵת��Ϊ��/100�������ʾ�������ʾС�������1λ���֡�
//  ʹ��#define �������ų�����ʹ��const�޶���������������ʾ����ת��ϵ����

#include <stdio.h>
#define gallon_per_liter 3.785
#define mile_per_kilometer 1.609

int main(void) {

	float mile, gallon, kilometer, liter;

	printf("Please enter your distance traveled(mile) and the amount of gas consumed(gallon):");
	scanf("%f %f", &mile, &gallon);
	printf("miles= %.1f ,gallons = %.1f, average_consumption = %.2f(mile/gallon)\n"
	       , mile, gallon, mile / gallon);
	printf("In another words,average_consumption = %.2f(liter/100km)\n"
	       , gallon * gallon_per_liter / (mile * mile_per_kilometer * 100));

	return 0;
}