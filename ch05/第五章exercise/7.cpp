/*
	7. ��дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ��
	�Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ���ݸ��ú���
*/
#include <stdio.h>

double cal_square(double num);

int main(void) {
	double input;
	printf("Please enter a double number:");
	scanf("%lf", &input);
	printf("%.2lf's square is %.2lf", input, cal_square(input));

	return 0;
}

double cal_square(double num) {
	double ending;
	ending = num * num * num;
	return ending;
}
