//4.2 praisel.c����
/*praisel.c -- ʹ�ò�ͬ���͵��ַ���*/

#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being"

int main(void) {
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}

//ͨ������ѧϰscanfֻ�ܶ�ȡ��һ�����ʡ�,�����fgets(),scanf��������һ��
//�ո�ʱ�Ͳ��ٶ�ȡ����