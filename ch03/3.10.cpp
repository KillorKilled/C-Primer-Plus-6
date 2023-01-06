//3.10 escape.c程序i
/*escape.c--使用转义序列
通过这个例子学习转义序列含义，特点
转义字符常体现在打印机里面，所以很多效果读者在pc上无法理解，关注的重点应该放在光标上*/

//\a:蜂鸣 \b:退格 \t:水平制表符 \r：回车（光标移动到行首）
#include <stdio.h>

int main(void) {
	float salary;

	printf("\aEnter your desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,
	       salary * 12.0);
	printf("\rGee!\n");
//dev-c++下一个制表点应该是第九列
	return 0;
}