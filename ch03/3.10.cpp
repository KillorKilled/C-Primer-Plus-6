//3.10 escape.c����i
/*escape.c--ʹ��ת������
ͨ���������ѧϰת�����к��壬�ص�
ת���ַ��������ڴ�ӡ�����棬���Ժܶ�Ч��������pc���޷���⣬��ע���ص�Ӧ�÷��ڹ����*/

//\a:���� \b:�˸� \t:ˮƽ�Ʊ�� \r���س�������ƶ������ף�
#include <stdio.h>

int main(void) {
	float salary;

	printf("\aEnter your desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,
	       salary * 12.0);
	printf("\rGee!\n");
//dev-c++��һ���Ʊ��Ӧ���ǵھ���
	return 0;
}