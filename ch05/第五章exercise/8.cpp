/*
	8.��дһ��������ʾ��ģ����Ľ�������û�����ĵ�һ��������Ϊ��ģ������ĵڶ����������
	����������������б��ֲ��䡣�û�������������ǵ�һ��������󡣵��û�����һ������ֵʱ��
	��������������ʾ�����£�
	This program computes moduli.
	Enter an integer to serve as the second operand:256
	Now enter the first operand:438
	438 % 256 is 182
	Enter next number for first operand (<=0 to quit): 1234567
	1234567 % 256 is 135
	Enter next number for first operand (<=0 to quit): 0
	Done
*/

#include <stdio.h>

int main(void) {

	int fir_num, sec_num;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &sec_num);
	printf("Now enter the first operand:");
	scanf("%d", &fir_num);
	while (fir_num > 0) {
		printf("%d %% %d is %d\n", fir_num, sec_num, fir_num % sec_num);
		printf("Enter next number for first operand (<=0 to quit):");
		scanf("%d", &fir_num);
	}
	printf("Done\n");

	return 0;
}