/*
	7.
	1英寸相当于2.54cm。编写一个程序，提示用户输入身高（/英寸），
	然后以厘米为单位显示身高。
*/

#include <stdio.h>

int main(void) {
	float high;
	printf("请输入身高：（/英寸）");
	scanf("%f", &high);
	printf("您的身高是：%f（/厘米）", high * 2.54);
	return 0;
}