//4.10 stringf.c ����
//stringf.c -- tͨ������ѧϰ�ַ�����ʽ�ı��
#include <stdio.h>
#define BLURB "Authentic imitation"

int main(void) {
	printf("[01234567890123456789012345]\n");
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
//	ûʲô��˵��

	return 0;
}

