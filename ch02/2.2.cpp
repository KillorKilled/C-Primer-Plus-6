//fathm_ft.c---把2英寻转换成英尺
#include <stdio.h>

int main(void) {
	int feet, fathoms;

	fathoms = 2;		//这里也可以让读者自己输入用scanf
	feet = 6 * fathoms;	//这里在乘号也加了空格，为了增加程序的可读性
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}

/*总结这段代码相比于上一个提供了1.程序描述
2.多变量声明和替换
3.printf打印的值不一定是变量也可以是赋值表达式语句
*/