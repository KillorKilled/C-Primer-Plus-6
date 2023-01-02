//2.12编程练习
/*
	编写一个程序，创建一个整形变量toes,并将toes设置为10.程序中还要计算toes的两倍和
	toes的平方。该程序应打印3个值，并分别描述以示区分
*/

#include <stdio.h>

int main(void) {
	int toes;
	toes = 10;
	printf("toes = %d\ntoes * 2 = %d\ntoes^2 = %d\n", toes, toes * 2, toes * toes);
	return 0;
}

