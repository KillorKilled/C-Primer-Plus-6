/*
	��дһ������Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ��
	���Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���Temperatures().
	�ú������������¶ȺͿ�ʽ�¶ȣ�����С���������λ���ֵľ�����ʾ3���¶ȡ�
	Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ��
	ת����ʽ��
	Temperatures()��������const�����¶�ת����ʹ�õı�������main()������ʹ��һ��ѭ����
	�û��ظ������¶ȣ����û�����q������������ʱ��ѭ��������scanf()�������ض�ȡ���ݵ�
	���������������ȡ�����򷵻�1�������ȡq�򲻷���1.����ʹ��==�������scanf()�ķ���ֵ��1
	���Ƚϣ�������ֵ�Ƿ���ȡ�
*/

#include <stdio.h>

void Temperatures(double degree);

int main(void) {
	double temp;

	printf("Please enter a Fahrenheit degree(q to quit):");

	while (scanf("%lf", &temp) == 1) {
		Temperatures(temp);
		printf("you can enter again (q to quit):");
	}
	printf("Done.\n");

	return 0;
}

void Temperatures(double F_degree) {
	const double a = 5.0;
	const double b = 9.0;
	const double c = 32.0;	//�����¶Ȳ���
	const double d = 273.16;//�����¶Ȳ���
	double C_degree, K_degree;
	C_degree = a / b * (F_degree - c);
	K_degree = F_degree + d;
	printf("Fahrenheit degree is %.2lf\n"
	       "centigrade is %.2lf\n"
	       "Kelvin degree is %.2lf\n"
	       , F_degree, C_degree, K_degree);
}