//5.4 square.c ����
//square.c -- ����1-20��ƽ��

#include <stdio.h>

int main(void) {
	int num = 1;

	while (num < 21) {
		printf("%4d %6d\n", num, num * num);
		num++;
	}

	return 0;
}