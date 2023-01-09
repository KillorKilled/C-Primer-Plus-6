//3. 编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印
//	 用下面的格式进行输出
/*
	a. The input is 21.3 or 2.1e+001.
	b. The input is +21.290 or 2.129E+001
*/

#include <stdio.h>

int main(void) {

	float num;
	printf("Please enter a float number: ");
	scanf("%f", &num);
	printf("The input is %.1f or %1.1e\n", num, num);
	printf("The input is %+2.3f or %1.3E\n", num, num);

	return 0;
}