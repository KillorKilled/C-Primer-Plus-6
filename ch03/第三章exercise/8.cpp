/*
	8.
	在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺
	1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、
	茶勺为单位显示等价容量。
	思考对于该程序，为何使用浮点类型比整数类型更合适？
*/

#include <stdio.h>
#define CUP_PER_PINT 2
#define OUNCE_PER_CUP 8
#define SPOON_PER_OUNCE 2
#define TEASPOON_PER_SPOON 3

int main(void) {
	float num_cups, num_pints, num_ounces, num_spoons, num_teaspoons;
	printf("请输入杯数：");
	scanf("%f", &num_cups);

	num_pints = num_cups / CUP_PER_PINT;
	num_ounces = OUNCE_PER_CUP * num_cups;
	num_spoons = SPOON_PER_OUNCE * num_ounces;
	num_teaspoons = TEASPOON_PER_SPOON * num_spoons;

	printf(" num_cups = %.2f\n num_pints = %.2f\n num_ounces = %.2f\n num_spoons = %.2f\n num_teaspoons = %.2f"
	       , num_cups, num_pints, num_ounces, num_spoons, num_teaspoons);
	return 0;
}