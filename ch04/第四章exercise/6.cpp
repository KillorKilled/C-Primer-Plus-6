//6. ��дһ����������ʾ�����û�����Ȼ����ʾ�û������ա���һ�д�ӡ�û�
//	����������գ���һ�зֱ��ӡ�����յ���ĸ������ĸ��Ҫ����Ӧ�����յĽ�β����
//  �������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ����
/*
	Melissa Honeybee
		  7        8
	Melissa Honeybee
	7		8
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char first_name[10], last_name[10];

	printf("Please enter your last name:\n");
	scanf("%s", last_name);
	printf("Please enter your first name:\n");
	scanf("%s", first_name);
	printf("%s %s\n", last_name, first_name);
	printf("%*d %*d\n"
	       , strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));
	printf("%s %s\n", last_name, first_name);
	printf("%-*d %-*d\n"
	       , strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));

	return 0;
}