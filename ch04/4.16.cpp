//4.16 varwid.c 程序
//varwid.c --通过此例学习修饰符*在printf中的作用:说明字段宽度，但是在后面一定要给出,起到一个代替的左右

#include <stdio.h>

int main(void) {
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}