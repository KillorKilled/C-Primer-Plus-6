/*
	编写一个程序，提示用户输入一个身高（cm）,并分别以英尺（整数）和英寸显示该数值，允许有小数部分。程序应该能
	让用户重复输入身高，直到用户输入身高，直到用户输入一个非正值。
	其输出示例如下：
	Enter a height in centimeters: 182
	182.0 cm = 5 feet, 11.7 inches
	Enter a height in centimeters (<=0 to quit):168.7
	168.7 cm = 5 feet, 6.4 inches
	Enter a height in centimeters (<=0 to quit):0
	bye
*/

#include <stdio.h>
#define FOOT_PER_CM 30.48
#define INCH_PER_CM 2.54

int main(void) {
	float height, inches;
	int feet;

	printf("Enter a height in centimeters:");
	scanf("%f", &height);
	while (height > 0) {
		feet = height / FOOT_PER_CM;
		inches = (height - FOOT_PER_CM * feet) / INCH_PER_CM;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%f", &height);
	}
	printf("bye");

	return 0;
}