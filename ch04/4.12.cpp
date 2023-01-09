//4.12 floatcnv.c 程序
//floatcnv.c -- 不匹配的浮点类型转换会发生什么结果

#include <stdio.h>

int main(void) {
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	//前两个printf中float自动转double所以结果一样，后面整形转浮点型，本身类型不对，就算字节数对上了还是错
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
	//浮点型转整形（dev-c++）前面两个类型错了直接为0，后面两个成功
	//在有些编译器上后面的ld类型也会失败，是因为在栈中读取数据的顺序问题
	//后面两个ld实际上读取的是前面未读取完（字节数不同）的值

	return 0;
}