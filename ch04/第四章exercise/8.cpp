//8. 编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数
//	显示小数点后一位数字。接下来使用1加仑大约3.785升，1英里大约为1.609千米，
//	把单位是英里、加仑的值转换为升/100公里，并显示结果，显示小数点后面1位数字。
//  使用#define 创建符号常量或使用const限定符创建变量来表示两个转换系数。

#include <stdio.h>
#define gallon_per_liter 3.785
#define mile_per_kilometer 1.609

int main(void) {

	float mile, gallon, kilometer, liter;

	printf("Please enter your distance traveled(mile) and the amount of gas consumed(gallon):");
	scanf("%f %f", &mile, &gallon);
	printf("miles= %.1f ,gallons = %.1f, average_consumption = %.2f(mile/gallon)\n"
	       , mile, gallon, mile / gallon);
	printf("In another words,average_consumption = %.2f(liter/100km)\n"
	       , gallon * gallon_per_liter / (mile * mile_per_kilometer * 100));

	return 0;
}