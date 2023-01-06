/*
	6.
	1个水分子的质量约为3.0e-23克。1夸脱水大约是950克。
	编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/

#include <stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void) {
	int quart;
	printf("请输入水的夸脱数：");
	scanf("%d", &quart);
	printf("水分子的数量为：%Ld", quart * MASS_PER_QUART / MASS_PER_MOLE);

	return 0;
}