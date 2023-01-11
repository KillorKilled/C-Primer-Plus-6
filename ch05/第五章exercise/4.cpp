/*
	��дһ��������ʾ�û�����һ����ߣ�cm��,���ֱ���Ӣ�ߣ���������Ӣ����ʾ����ֵ��������С�����֡�����Ӧ����
	���û��ظ�������ߣ�ֱ���û�������ߣ�ֱ���û�����һ������ֵ��
	�����ʾ�����£�
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