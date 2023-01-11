/*
	编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，
	并把该值作为参数传递给一个用户自定义的函数Temperatures().
	该函数计算摄氏温度和开式温度，并以小数点后面两位数字的精度显示3种温度。
	要使用不同的温标来表示这3个温度值。
	转换公式略
	Temperatures()函数中用const创建温度转换中使用的变量。在main()函数中使用一个循环让
	用户重复输入温度，当用户输入q或其他非数字时，循环结束。scanf()函数返回读取数据的
	数量，所以如果读取数字则返回1，如果读取q则不返回1.可以使用==运算符将scanf()的返回值和1
	作比较，测试两值是否相等。
*/

#include <stdio.h>

void Temperatures(double degree);

int main(void) {
	double temp;

	printf("Please enter a Fahrenheit degree(q to quit):");

	while (scanf("%lf", &temp) == 1) {
		Temperatures(temp);
		printf("you can enter again (q to quit):");
	}
	printf("Done.\n");

	return 0;
}

void Temperatures(double F_degree) {
	const double a = 5.0;
	const double b = 9.0;
	const double c = 32.0;	//摄氏温度参数
	const double d = 273.16;//开氏温度参数
	double C_degree, K_degree;
	C_degree = a / b * (F_degree - c);
	K_degree = F_degree + d;
	printf("Fahrenheit degree is %.2lf\n"
	       "centigrade is %.2lf\n"
	       "Kelvin degree is %.2lf\n"
	       , F_degree, C_degree, K_degree);
}