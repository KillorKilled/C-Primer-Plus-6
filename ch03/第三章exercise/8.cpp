/*
	8.
	���������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2������
	1�����׵���3���ס���дһ��������ʾ�û����뱭��������Ʒ�ѡ���˾�����ס�
	����Ϊ��λ��ʾ�ȼ�������
	˼�����ڸó���Ϊ��ʹ�ø������ͱ��������͸����ʣ�
*/

#include <stdio.h>
#define CUP_PER_PINT 2
#define OUNCE_PER_CUP 8
#define SPOON_PER_OUNCE 2
#define TEASPOON_PER_SPOON 3

int main(void) {
	float num_cups, num_pints, num_ounces, num_spoons, num_teaspoons;
	printf("�����뱭����");
	scanf("%f", &num_cups);

	num_pints = num_cups / CUP_PER_PINT;
	num_ounces = OUNCE_PER_CUP * num_cups;
	num_spoons = SPOON_PER_OUNCE * num_ounces;
	num_teaspoons = TEASPOON_PER_SPOON * num_spoons;

	printf(" num_cups = %.2f\n num_pints = %.2f\n num_ounces = %.2f\n num_spoons = %.2f\n num_teaspoons = %.2f"
	       , num_cups, num_pints, num_ounces, num_spoons, num_teaspoons);
	return 0;
}