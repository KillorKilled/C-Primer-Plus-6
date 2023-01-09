//4.15 input.c 程序
//input.c -- 通过学习此例学会scanf何时使用&
/*
	scanf()读取基本变量类型的值，在变量名前加&
	scanf()把字符串读入字符数组中，不要加&！！！
*/

#include <stdio.h>

int main(void) {
	int age;
	float assets;
	char pet[30];

	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);	//除了%c 其他的scanf类型读到空白会跳过
	printf("%d $%.2f %s\n", age, assets, pet);


	return 0;
}