//2. ��дһ��������ʾ�û��������֣���ִ��һ�²���
/*
	a.��ӡ���֣�����˫���ţ�
	b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
	c.�ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
	d.�ڱ�������ȿ�3���ֶ��д�ӡ���֡�
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char name[40];

	printf("Please enter your name:\n");
	scanf("%s", name);
	printf("Your name is \"%s\"\n", name);
	printf("Your name is \"%20s\"\n", name);
	printf("Your name is \"%-20s\"\n", name);
	printf("Your name is \"%*s\"\n", strlen(name)+3, name);

	return 0;
}