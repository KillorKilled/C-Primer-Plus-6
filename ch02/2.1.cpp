//2.1
//简单的c程序实例
#include <stdio.h>

int main(void) {
	int num;	//一个简单的C程序,声明
	num = 1;

	printf("I am a simple "); //没有换行符，语句
	printf("computer.\n");
	printf("my favorite number is %d because it is first.\n ", num);

	//
	getchar();
	return 0;	//结束
}