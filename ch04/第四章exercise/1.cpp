//1. ��дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ����

#include <stdio.h>

int main(void) {
	char first_name[10], last_name[10];

	printf("Please enter your first name:\n");
	scanf("%s", first_name);
	printf("Please enter your last name:\n");
	scanf("%s", last_name);
	printf("Your name is %s %s", first_name, last_name);

	return 0;
}