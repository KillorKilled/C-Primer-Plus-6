//4.3praise2.c����
//ͨ������ѧϰstrlen��size of������
//strlen:�ַ�������Ч����
//size of:���͵ĳ��ȣ��ܳ��ȣ���������ַ��������\0��

#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraodinary being

int main(void) {
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
	       strlen(name), sizeof name);
	printf("The phrase of praise has %zd letter ",
	       strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}