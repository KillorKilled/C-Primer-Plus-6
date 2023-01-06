//3.7 show_pt.c程序
/*showf_pt.c -- 以两种方式显示float类型的值*/

#include <stdio.h>

int main(void) {
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	//下面要求支持C99
	printf("And it's %a in hexadecimal,powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	return 0;
	//此例与标准的C99有区别，在最后一句，看3.8的各种数据类型大小
}