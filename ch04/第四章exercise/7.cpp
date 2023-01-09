//7. 编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0.
//	分别显示两次计算的结果各三次：一次显示小数点后面6位数字；
//	一次显示小数点后面12位数字；
//	一次显示小数点后面16位数字。
//  程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗

#include <stdio.h>
#include <float.h>

int main(void) {
	double double_num;
	float float_num;
	double_num = 1.0 / 3.0;
	float_num = 1.0 / 3.0;

	printf("double_num = %.6f float_num = %.6f\n", double_num, float_num);
	printf("double_num = %.12f float_num = %.12f\n", double_num, float_num);
	printf("double_num = %.16f float_num = %.16f\n", double_num, float_num);
	printf("FLT_DIG:float类型的最小有效数字位数\n");
	printf("FLT_DIG = %d DBL_DIG = %d", FLT_DIG, DBL_DIG);

	return 0;
}