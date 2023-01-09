//4.10 stringf.c 程序
//stringf.c -- t通过此例学习字符串格式的表达
#include <stdio.h>
#define BLURB "Authentic imitation"

int main(void) {
	printf("[01234567890123456789012345]\n");
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
//	没什么好说的

	return 0;
}

