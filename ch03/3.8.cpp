//3.8typesize.c程序
/*typesize.c -- 打印类型大小
  在前面3.4打印过一些，觉得不全面这里尽可能多地打印 */

#include <stdio.h>

int main(void) {
	printf("--------signed int----------\n");
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type short has a size of %zd bytes.\n", sizeof(short));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("--------unsigned int--------\n");
	printf("Type unsigned int has a size of %zd bytes.\n", sizeof(unsigned));
	printf("Type unsigned short has a size of %zd bytes.\n", sizeof(unsigned short));
	printf("Type unsigned long has a size of %zd bytes.\n", sizeof(unsigned long));
	printf("--------char----------------\n");
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("--------Bool----------------\n");
	printf("_Bool is not defined in dev-c++.\n");
	//printf("Type _Bool has a size of %zd bytes.\n", sizeof(_Bool));
	printf("--------float---------------\n");
	printf("Type float has a size of %zd bytes.\n", sizeof(float));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
	printf("Please pay attention,long float;short float;short double are not defined.\n");

	return 0;

}