//4.15 input.c ����
//input.c -- ͨ��ѧϰ����ѧ��scanf��ʱʹ��&
/*
	scanf()��ȡ�����������͵�ֵ���ڱ�����ǰ��&
	scanf()���ַ��������ַ������У���Ҫ��&������
*/

#include <stdio.h>

int main(void) {
	int age;
	float assets;
	char pet[30];

	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);	//����%c ������scanf���Ͷ����հ׻�����
	printf("%d $%.2f %s\n", age, assets, pet);


	return 0;
}